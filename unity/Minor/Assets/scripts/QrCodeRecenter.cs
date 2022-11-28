using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using ZXing;

public class QrCodeRecenter : MonoBehaviour
{
    [SerializeField]
    private ARSession session;
    [SerializeField]
    private ARSessionOrigin sessionOrigin;
    [SerializeField]
    private ARCameraManager cameraManager;
    [SerializeField]
    private List<Target> navigationTargetObjects =new List<Target>();

    private Texture2D cameraImageTexture;
    private IBarcodeReader reader =new BarcodeReader();

    private void Update(){
        if(Input.GetKeyDown(KeyCode.Space)){
            SetQrCodeRecenterTarget("cafe");
        }
    }
    private void OnEnable(){
        cameraManager.frameReceived += OnCameraFrameReceived;
    }
    private void OnDisable(){
        cameraManager.frameReceived -=OnCameraFrameReceived;
    }
    private void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs){
        if(!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image)){
            return ;
        }

        var conversionParams = new XRCpuImage.ConversionParams{
            inputRect = new RectInt(0,0,image.width,image.height),
            outputDimensions = new Vector2Int(image.width/2,image.height/2),
            outputFormat =TextureFormat.RGBA32,
            transformation = XRCpuImage.Transformation.MirrorY
        };

        int size = image.GetConvertedDataSize(conversionParams);

        var buffer = new NativeArray<byte>(size,Allocator.Temp);

        image.Convert(conversionParams,buffer); 

        image.Dispose();

        cameraImageTexture = new Texture2D(
            conversionParams.outputDimensions.x,
            conversionParams.outputDimensions.y,
            conversionParams.outputFormat,
            false);

        cameraImageTexture.LoadRawTextureData(buffer);
        cameraImageTexture.Apply();

        buffer.Dispose();

        var result = reader.Decode(cameraImageTexture.GetPixels32(),cameraImageTexture.width,cameraImageTexture.height);

        if(result!=null){
            SetQrCodeRecenterTarget(result.Text);
        }
    }

    private void SetQrCodeRecenterTarget(string targetText){
        Target currentTarget =navigationTargetObjects.Find(x=>x.Name.ToLower().Equals(targetText.ToLower()));
        if(currentTarget!=null){
            session.Reset();

            sessionOrigin.transform.position = currentTarget.PositionObject.transform.position;
            sessionOrigin.transform.rotation = currentTarget.PositionObject.transform.rotation;
        }
    }
}
