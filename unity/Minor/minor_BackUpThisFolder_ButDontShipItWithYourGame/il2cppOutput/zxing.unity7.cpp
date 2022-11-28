#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3;
// System.Collections.ObjectModel.Collection`1<ZXing.Aztec.Internal.State>
struct Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>
struct ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5;
// System.Collections.Generic.IDictionary`2<System.Int32,ZXing.Common.CharacterSetECI>
struct IDictionary_2_tD3643B65426942720B01A4ECA047F9360D0DB3B5;
// System.Collections.Generic.IDictionary`2<System.String,ZXing.Common.CharacterSetECI>
struct IDictionary_2_t26E911269C6D091279FBE4FB9B9A26CC9BD011A7;
// System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>
struct IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29;
// System.Collections.Generic.IList`1<ZXing.Common.ReedSolomon.GenericGFPoly>
struct IList_1_t8286A7CF7BFF172739934A9E72BF4A7E3B631A11;
// System.Collections.Generic.IList`1<ZXing.Aztec.Internal.State>
struct IList_1_tE293EDB493543AB061BD07E172361F5D611E4984;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C;
// System.Collections.Generic.LinkedListNode`1<ZXing.Aztec.Internal.State>
struct LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76;
// System.Collections.Generic.LinkedList`1<ZXing.Aztec.Internal.State>
struct LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ZXing.Aztec.Internal.State>
struct List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797;
// System.Collections.Generic.List`1<ZXing.Aztec.Internal.Token>
struct List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// ZXing.Aztec.Internal.State[]
struct StateU5BU5D_tFB790EDE12A1C3D2BE1F1D8FC82A98160416890D;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// ZXing.Aztec.Internal.Token[]
struct TokenU5BU5D_t71B42DB50BB24570917D505B011BB3924C3691C2;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// ZXing.Aztec.Internal.AztecCode
struct AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366;
// ZXing.Aztec.Internal.BinaryShiftToken
struct BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110;
// ZXing.Common.BitArray
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7;
// ZXing.Common.BitMatrix
struct BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91;
// ZXing.Common.CharacterSetECI
struct CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0;
// ZXing.Common.ReedSolomon.GenericGFPoly
struct GenericGFPoly_t85EB6B1C74EDFAA906625D971CBB4276BB28DD43;
// ZXing.Aztec.Internal.HighLevelEncoder
struct HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// ZXing.Common.ReedSolomon.ReedSolomonEncoder
struct ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636;
// ZXing.ResultPoint
struct ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// ZXing.Aztec.Internal.SimpleToken
struct SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97;
// ZXing.Aztec.Internal.State
struct State_tE3C6505B0E83E2D10113F91E853B22093CD5273E;
// System.String
struct String_t;
// ZXing.Aztec.Internal.Token
struct Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ZXing.Aztec.Internal.Detector/Point
struct Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_49_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_56_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_63_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_79_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_82_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_117_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_243_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_345_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6D141CD0B036C4E5A7B645E678A13005A9E0B7;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD5C8785DD5916B8669E67C2A4B9435344A3846;
IL2CPP_EXTERN_C String_t* _stringLiteral32725D282232F05FFA02D73D5E41117CB098398B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C040BFFD29AC6C9CD22396AB3049E61EABB1887;
IL2CPP_EXTERN_C String_t* _stringLiteral5295380188F75D696383F8BDB2147F0053791372;
IL2CPP_EXTERN_C String_t* _stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4;
IL2CPP_EXTERN_C String_t* _stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E73755B7B3ABC61F614B6B3404904BDC750906;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2BF525BE84B3D6B88D844591311E684F7987A3;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddFirst_m1991E1ABD2C38EEF91EAB3729074317A31017A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5711235BA91B72A61B3F921E50A6F613E79856D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC0783EF65F5CE032B578CD6D6B6E89FCA7B3E2D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m54D2DC498BD296098BCCE83FC87F5AF6B3FD03D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m56DE0B297592490F29C1FB89324822D51FFC11AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* State_appendFLGn_m7D1B2210FA421C493DE5BC8FBEE8C37E4968AEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<ZXing.Aztec.Internal.State>
struct Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
};

// System.Collections.Generic.LinkedListNode`1<ZXing.Aztec.Internal.State>
struct LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___item_3;
};

// System.Collections.Generic.LinkedList`1<ZXing.Aztec.Internal.State>
struct LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ZXing.Aztec.Internal.State>
struct List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StateU5BU5D_tFB790EDE12A1C3D2BE1F1D8FC82A98160416890D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StateU5BU5D_tFB790EDE12A1C3D2BE1F1D8FC82A98160416890D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ZXing.Aztec.Internal.Token>
struct List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TokenU5BU5D_t71B42DB50BB24570917D505B011BB3924C3691C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TokenU5BU5D_t71B42DB50BB24570917D505B011BB3924C3691C2* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// ZXing.Aztec.Internal.AztecCode
struct AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366  : public RuntimeObject
{
	// System.Boolean ZXing.Aztec.Internal.AztecCode::<isCompact>k__BackingField
	bool ___U3CisCompactU3Ek__BackingField_0;
	// System.Int32 ZXing.Aztec.Internal.AztecCode::<Size>k__BackingField
	int32_t ___U3CSizeU3Ek__BackingField_1;
	// System.Int32 ZXing.Aztec.Internal.AztecCode::<Layers>k__BackingField
	int32_t ___U3CLayersU3Ek__BackingField_2;
	// System.Int32 ZXing.Aztec.Internal.AztecCode::<CodeWords>k__BackingField
	int32_t ___U3CCodeWordsU3Ek__BackingField_3;
	// ZXing.Common.BitMatrix ZXing.Aztec.Internal.AztecCode::<Matrix>k__BackingField
	BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___U3CMatrixU3Ek__BackingField_4;
};

// ZXing.Aztec.AztecWriter
struct AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252  : public RuntimeObject
{
};

struct AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_StaticFields
{
	// System.Text.Encoding ZXing.Aztec.AztecWriter::DEFAULT_CHARSET
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___DEFAULT_CHARSET_0;
};

// ZXing.Common.BitArray
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7  : public RuntimeObject
{
	// System.Int32[] ZXing.Common.BitArray::bits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits_0;
	// System.Int32 ZXing.Common.BitArray::size
	int32_t ___size_1;
};

struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_StaticFields
{
	// System.Int32[] ZXing.Common.BitArray::_lookup
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____lookup_2;
};

// ZXing.Common.BitMatrix
struct BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91  : public RuntimeObject
{
	// System.Int32 ZXing.Common.BitMatrix::width
	int32_t ___width_0;
	// System.Int32 ZXing.Common.BitMatrix::height
	int32_t ___height_1;
	// System.Int32 ZXing.Common.BitMatrix::rowSize
	int32_t ___rowSize_2;
	// System.Int32[] ZXing.Common.BitMatrix::bits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits_3;
};

// ZXing.Common.ECI
struct ECI_t23895361BC213ED79ED64811A883496B9D7192D0  : public RuntimeObject
{
	// System.Int32 ZXing.Common.ECI::<Value>k__BackingField
	int32_t ___U3CValueU3Ek__BackingField_0;
};

// ZXing.Aztec.Internal.Encoder
struct Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5  : public RuntimeObject
{
};

struct Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields
{
	// System.Int32[] ZXing.Aztec.Internal.Encoder::WORD_SIZE
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___WORD_SIZE_4;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0  : public RuntimeObject
{
	// System.Int32[] ZXing.Common.ReedSolomon.GenericGF::expTable
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___expTable_8;
	// System.Int32[] ZXing.Common.ReedSolomon.GenericGF::logTable
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___logTable_9;
	// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGF::zero
	GenericGFPoly_t85EB6B1C74EDFAA906625D971CBB4276BB28DD43* ___zero_10;
	// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGF::one
	GenericGFPoly_t85EB6B1C74EDFAA906625D971CBB4276BB28DD43* ___one_11;
	// System.Int32 ZXing.Common.ReedSolomon.GenericGF::size
	int32_t ___size_12;
	// System.Int32 ZXing.Common.ReedSolomon.GenericGF::primitive
	int32_t ___primitive_13;
	// System.Int32 ZXing.Common.ReedSolomon.GenericGF::generatorBase
	int32_t ___generatorBase_14;
};

struct GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields
{
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_12
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_12_0;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_10
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_10_1;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_6
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_6_2;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_PARAM
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_PARAM_3;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::QR_CODE_FIELD_256
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___QR_CODE_FIELD_256_4;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::DATA_MATRIX_FIELD_256
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___DATA_MATRIX_FIELD_256_5;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_8
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___AZTEC_DATA_8_6;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::MAXICODE_FIELD_64
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___MAXICODE_FIELD_64_7;
};

// ZXing.Aztec.Internal.HighLevelEncoder
struct HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE  : public RuntimeObject
{
	// System.Byte[] ZXing.Aztec.Internal.HighLevelEncoder::text
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text_9;
	// System.Text.Encoding ZXing.Aztec.Internal.HighLevelEncoder::encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding_10;
	// System.Boolean ZXing.Aztec.Internal.HighLevelEncoder::disableEci
	bool ___disableEci_11;
};

struct HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields
{
	// System.String[] ZXing.Aztec.Internal.HighLevelEncoder::MODE_NAMES
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___MODE_NAMES_0;
	// System.Int32[][] ZXing.Aztec.Internal.HighLevelEncoder::LATCH_TABLE
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___LATCH_TABLE_6;
	// System.Int32[][] ZXing.Aztec.Internal.HighLevelEncoder::CHAR_MAP
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___CHAR_MAP_7;
	// System.Int32[][] ZXing.Aztec.Internal.HighLevelEncoder::SHIFT_TABLE
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___SHIFT_TABLE_8;
};

// ZXing.Common.ReedSolomon.ReedSolomonEncoder
struct ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636  : public RuntimeObject
{
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.ReedSolomonEncoder::field
	GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___field_0;
	// System.Collections.Generic.IList`1<ZXing.Common.ReedSolomon.GenericGFPoly> ZXing.Common.ReedSolomon.ReedSolomonEncoder::cachedGenerators
	RuntimeObject* ___cachedGenerators_1;
};

// ZXing.ResultPoint
struct ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB  : public RuntimeObject
{
	// System.Single ZXing.ResultPoint::x
	float ___x_0;
	// System.Single ZXing.ResultPoint::y
	float ___y_1;
	// System.Byte[] ZXing.ResultPoint::bytesX
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesX_2;
	// System.Byte[] ZXing.ResultPoint::bytesY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesY_3;
	// System.String ZXing.ResultPoint::toString
	String_t* ___toString_4;
};

// ZXing.Aztec.Internal.State
struct State_tE3C6505B0E83E2D10113F91E853B22093CD5273E  : public RuntimeObject
{
	// System.Int32 ZXing.Aztec.Internal.State::mode
	int32_t ___mode_1;
	// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.State::token
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___token_2;
	// System.Int32 ZXing.Aztec.Internal.State::binaryShiftByteCount
	int32_t ___binaryShiftByteCount_3;
	// System.Int32 ZXing.Aztec.Internal.State::bitCount
	int32_t ___bitCount_4;
	// System.Int32 ZXing.Aztec.Internal.State::binaryShiftCost
	int32_t ___binaryShiftCost_5;
};

struct State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields
{
	// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::INITIAL_STATE
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___INITIAL_STATE_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// ZXing.Aztec.Internal.Token
struct Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502  : public RuntimeObject
{
	// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::previous
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous_1;
};

struct Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields
{
	// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::EMPTY
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___EMPTY_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ZXing.Aztec.Internal.Detector/Point
struct Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A  : public RuntimeObject
{
	// System.Int32 ZXing.Aztec.Internal.Detector/Point::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 ZXing.Aztec.Internal.Detector/Point::<Y>k__BackingField
	int32_t ___U3CYU3Ek__BackingField_1;
};

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	RuntimeObject* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.LinkedList`1/Enumerator<ZXing.Aztec.Internal.State>
struct Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// System.Collections.Generic.List`1/Enumerator<ZXing.Aztec.Internal.State>
struct Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ____current_3;
};

// ZXing.Aztec.Internal.BinaryShiftToken
struct BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110  : public Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502
{
	// System.Int32 ZXing.Aztec.Internal.BinaryShiftToken::binaryShiftStart
	int32_t ___binaryShiftStart_2;
	// System.Int32 ZXing.Aztec.Internal.BinaryShiftToken::binaryShiftByteCount
	int32_t ___binaryShiftByteCount_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// ZXing.Common.CharacterSetECI
struct CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56  : public ECI_t23895361BC213ED79ED64811A883496B9D7192D0
{
	// System.String ZXing.Common.CharacterSetECI::encodingName
	String_t* ___encodingName_3;
};

struct CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,ZXing.Common.CharacterSetECI> ZXing.Common.CharacterSetECI::VALUE_TO_ECI
	RuntimeObject* ___VALUE_TO_ECI_1;
	// System.Collections.Generic.IDictionary`2<System.String,ZXing.Common.CharacterSetECI> ZXing.Common.CharacterSetECI::NAME_TO_ECI
	RuntimeObject* ___NAME_TO_ECI_2;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// ZXing.Aztec.Internal.SimpleToken
struct SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97  : public Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502
{
	// System.Int16 ZXing.Aztec.Internal.SimpleToken::value
	int16_t ___value_2;
	// System.Int16 ZXing.Aztec.Internal.SimpleToken::bitCount
	int16_t ___bitCount_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_t6EC6A3E7E7DB0A7072248FCD7228161BB33DB0D5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t6EC6A3E7E7DB0A7072248FCD7228161BB33DB0D5__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11148
struct __StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39__padding[11148];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D__padding[112];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124
struct __StaticArrayInitTypeSizeU3D124_tF2056A147B3FEE8FC6D079B531D5E005E0BF000B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_tF2056A147B3FEE8FC6D079B531D5E005E0BF000B__padding[124];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t68BAA10EC835232A7650BF2054DB502B0ECFFFCD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t68BAA10EC835232A7650BF2054DB502B0ECFFFCD__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=132
struct __StaticArrayInitTypeSizeU3D132_t17CA2427A8420E48002298798ADF94E69DA8DC9C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D132_t17CA2427A8420E48002298798ADF94E69DA8DC9C__padding[132];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136
struct __StaticArrayInitTypeSizeU3D136_t90CF912B9341DF136CE5AF373B04F41182A5AC50 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D136_t90CF912B9341DF136CE5AF373B04F41182A5AC50__padding[136];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
struct __StaticArrayInitTypeSizeU3D144_t88DBA1A06BA52C64551CAA28CF6A700C7276E4CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t88DBA1A06BA52C64551CAA28CF6A700C7276E4CC__padding[144];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=148
struct __StaticArrayInitTypeSizeU3D148_tB9B7F92C7973454BB2C36DDDB445FABCE8E4B7FA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D148_tB9B7F92C7973454BB2C36DDDB445FABCE8E4B7FA__padding[148];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=156
struct __StaticArrayInitTypeSizeU3D156_tD70DAAACCD53BB9AB46DD56868095A2D44F7BEF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D156_tD70DAAACCD53BB9AB46DD56868095A2D44F7BEF0__padding[156];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=168
struct __StaticArrayInitTypeSizeU3D168_t8E80F36BC1B7BE7B01D5651DE7C69C38C8CA6DCB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D168_t8E80F36BC1B7BE7B01D5651DE7C69C38C8CA6DCB__padding[168];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172
struct __StaticArrayInitTypeSizeU3D172_t6232E17501516CEC94D373BE7830856ADC7BBBE3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D172_t6232E17501516CEC94D373BE7830856ADC7BBBE3__padding[172];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF__padding[192];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct __StaticArrayInitTypeSizeU3D2048_tE25931E1FFD4C943523B4FB281CBCB2EEBE2779C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_tE25931E1FFD4C943523B4FB281CBCB2EEBE2779C__padding[2048];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=224
struct __StaticArrayInitTypeSizeU3D224_t5755492DB7BFC8BEE69DDA8A67082319B835C4E2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D224_t5755492DB7BFC8BEE69DDA8A67082319B835C4E2__padding[224];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=248
struct __StaticArrayInitTypeSizeU3D248_t285FA6A194E9054B5B7F2B34D8F1125D3AE13F12 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D248_t285FA6A194E9054B5B7F2B34D8F1125D3AE13F12__padding[248];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tD597FA54545AF0CB15679AB3C10F2858019C8919 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tD597FA54545AF0CB15679AB3C10F2858019C8919__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2574
struct __StaticArrayInitTypeSizeU3D2574_tB3189D28577694B158C7062CAE14923548B1B29B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2574_tB3189D28577694B158C7062CAE14923548B1B29B__padding[2574];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26
struct __StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA__padding[26];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=272
struct __StaticArrayInitTypeSizeU3D272_t7A195C0F46D93DA62E7FC125F4AE9EF30B8F384F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D272_t7A195C0F46D93DA62E7FC125F4AE9EF30B8F384F__padding[272];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30
struct __StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE__padding[30];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3716
struct __StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E__padding[3716];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=384
struct __StaticArrayInitTypeSizeU3D384_t1A1F076C04E5220ED1284BA358D4D0B5A803E3B5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_t1A1F076C04E5220ED1284BA358D4D0B5A803E3B5__padding[384];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tE5607E48123D57172D8B5D881AE877E860F7CBC4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tE5607E48123D57172D8B5D881AE877E860F7CBC4__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct __StaticArrayInitTypeSizeU3D512_t63E611E57DB9137D2BFD25125E263460A665DF27 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t63E611E57DB9137D2BFD25125E263460A665DF27__padding[512];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=54
struct __StaticArrayInitTypeSizeU3D54_tE8A2E134BEFA0AD9FBCAC8C0FA853BFB9195E7D0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D54_tE8A2E134BEFA0AD9FBCAC8C0FA853BFB9195E7D0__padding[54];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_t66702F042D53810B18AD6DD1A9A0C566EB2EE696 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t66702F042D53810B18AD6DD1A9A0C566EB2EE696__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2__padding[6];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t708588A5E342FEDE2E7BBDA6EEAC365EE84CFEE2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t708588A5E342FEDE2E7BBDA6EEAC365EE84CFEE2__padding[72];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80
struct __StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984__padding[80];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_tA9EA4D9A3345D9A71FF7DC176D791EC5F1C3740E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tA9EA4D9A3345D9A71FF7DC176D791EC5F1C3740E__padding[9];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t9CD906CB1D7B605081EDC2DE3DF5BF2ECBF5272C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t9CD906CB1D7B605081EDC2DE3DF5BF2ECBF5272C__padding[96];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::018A19DA611E24A75122AB7F8638B900202C48C7ACDF482A10C7017E56EA1B0F
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___018A19DA611E24A75122AB7F8638B900202C48C7ACDF482A10C7017E56EA1B0F_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::01D382070575DCF0FE01331D331575280321D7F09C9CAC24673BA181A2F732C1
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___01D382070575DCF0FE01331D331575280321D7F09C9CAC24673BA181A2F732C1_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=272 <PrivateImplementationDetails>::031A7DAB4A9DA871178C39A60B07218F323F2FFF0B20515E960157325A736FA5
	__StaticArrayInitTypeSizeU3D272_t7A195C0F46D93DA62E7FC125F4AE9EF30B8F384F ___031A7DAB4A9DA871178C39A60B07218F323F2FFF0B20515E960157325A736FA5_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::03AFB9095D050E297BBAB2F86D9B867378EA675884180C8984CE0DCE947F3635
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___03AFB9095D050E297BBAB2F86D9B867378EA675884180C8984CE0DCE947F3635_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30 <PrivateImplementationDetails>::048F1C6BA9ABEEE037650E52B43535B87F5D0E33A17E5963078DACC7C730B531
	__StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE ___048F1C6BA9ABEEE037650E52B43535B87F5D0E33A17E5963078DACC7C730B531_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04B8238B8817C8D6A2EC59A0CF6831D27FF30B5E0B1541599E0D433BDF8E6DCC
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___04B8238B8817C8D6A2EC59A0CF6831D27FF30B5E0B1541599E0D433BDF8E6DCC_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::058136CC1E0E3BC635D71D3CB6C90CCA260B40324627991E938F59612D216948
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___058136CC1E0E3BC635D71D3CB6C90CCA260B40324627991E938F59612D216948_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30 <PrivateImplementationDetails>::05CC43EDCFE1162519DBE1AF7E1335D1DAF982239BCF8053E6105AB2E8661271
	__StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE ___05CC43EDCFE1162519DBE1AF7E1335D1DAF982239BCF8053E6105AB2E8661271_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::072A033D360FB1B422E89181C3089B4EB42C4C1DC16226CEC6B76252E78CCC95
	__StaticArrayInitTypeSizeU3D512_t63E611E57DB9137D2BFD25125E263460A665DF27 ___072A033D360FB1B422E89181C3089B4EB42C4C1DC16226CEC6B76252E78CCC95_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::0755D41A7E6483FE002E8A721F4AC00C2C9BFFFDBF036DC8BF5C720DCCD5558E
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___0755D41A7E6483FE002E8A721F4AC00C2C9BFFFDBF036DC8BF5C720DCCD5558E_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::07D3741213269F079A9FF9B5021B5D06B8CE4D24E84DD85F068991ED352DEFC4
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___07D3741213269F079A9FF9B5021B5D06B8CE4D24E84DD85F068991ED352DEFC4_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::08008FE38F6DD9C8CF08EEAA27DAEC72C63D1FBE62A7664617837B7FBE3579DF
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___08008FE38F6DD9C8CF08EEAA27DAEC72C63D1FBE62A7664617837B7FBE3579DF_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::0923B8F138B2EDD9A1C360BA61E84ADDB537E2B82F9F14F1ADC291CBEAC90EA1
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___0923B8F138B2EDD9A1C360BA61E84ADDB537E2B82F9F14F1ADC291CBEAC90EA1_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::0972EA0FC33C85A08C0CB08E9E3A13D70F7C57215ECD0F2F813304AEDBC48A2B
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___0972EA0FC33C85A08C0CB08E9E3A13D70F7C57215ECD0F2F813304AEDBC48A2B_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::099049BB630E06D6F5F9ABE2F3F256E9A1D41A35D4A218832CD6B4651A3FDDAE
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___099049BB630E06D6F5F9ABE2F3F256E9A1D41A35D4A218832CD6B4651A3FDDAE_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::09FC02D06A518D6A2E42057CA223013CE52E398FB680414062691AA290DA597D
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___09FC02D06A518D6A2E42057CA223013CE52E398FB680414062691AA290DA597D_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::0AEC6048672FB3B9BA52C4058EAF228C43C1735163092E53FE244601BEA9D8BA
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___0AEC6048672FB3B9BA52C4058EAF228C43C1735163092E53FE244601BEA9D8BA_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::0CD52975D68D04335BC1B147D61D749B87BB641972CE633EDFB5C39C37ACFC17
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___0CD52975D68D04335BC1B147D61D749B87BB641972CE633EDFB5C39C37ACFC17_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::0D29B9AA3D0E997B3CF4FEEB2CE219F2DEEE880AD5451E149A63F42F95B62F64
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___0D29B9AA3D0E997B3CF4FEEB2CE219F2DEEE880AD5451E149A63F42F95B62F64_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::0DA449C0FF1FEA38DEDB3CBF33D6EA0BAC52B769108DFBFFC3B3FFBE2BEA62B6
	__StaticArrayInitTypeSizeU3D48_tE5607E48123D57172D8B5D881AE877E860F7CBC4 ___0DA449C0FF1FEA38DEDB3CBF33D6EA0BAC52B769108DFBFFC3B3FFBE2BEA62B6_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0E5A9DA19B5F6C533C7A3FE96B89E352628918F0528547181D6A790A245AEE37
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0E5A9DA19B5F6C533C7A3FE96B89E352628918F0528547181D6A790A245AEE37_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::0E69E2878FF4865846511AD0F6C3CDFCD35124DA9CBC2DD2FFA9926E5225681D
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___0E69E2878FF4865846511AD0F6C3CDFCD35124DA9CBC2DD2FFA9926E5225681D_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0EFBE15675AE6B086C3E0262CD75F823C7F77CA53A65B42D8B515B7469763CD3
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0EFBE15675AE6B086C3E0262CD75F823C7F77CA53A65B42D8B515B7469763CD3_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=54 <PrivateImplementationDetails>::0F326F6333970A0EE0B70548F659019839F42A0D35A4065BB89C5C0973D71EC0
	__StaticArrayInitTypeSizeU3D54_tE8A2E134BEFA0AD9FBCAC8C0FA853BFB9195E7D0 ___0F326F6333970A0EE0B70548F659019839F42A0D35A4065BB89C5C0973D71EC0_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0FD1FEF0F55461833DC1732C3CF2BF1D560CE93949C628358451972E2E4DD083
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0FD1FEF0F55461833DC1732C3CF2BF1D560CE93949C628358451972E2E4DD083_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0FD23C7C3687A528DA543E34841C6DE85AD4610511D1A1A741B9A7B5E7354FEF
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___0FD23C7C3687A528DA543E34841C6DE85AD4610511D1A1A741B9A7B5E7354FEF_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0FE5EA953905A7E632F48916BEE4115FA1BC91A8B14BDD57F57CCF3C79F11926
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___0FE5EA953905A7E632F48916BEE4115FA1BC91A8B14BDD57F57CCF3C79F11926_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::10236EF2156BE2047BD3377ABA7937F2102CBE4DC8A927072D302A7E2CEA8F14
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___10236EF2156BE2047BD3377ABA7937F2102CBE4DC8A927072D302A7E2CEA8F14_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::1200321A9D4D9ECACD206E9234BB30E6EA0CE3CD2F8E5FF759FD7651E58D7A1A
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___1200321A9D4D9ECACD206E9234BB30E6EA0CE3CD2F8E5FF759FD7651E58D7A1A_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::120146F23536CA41FF3D095892F4AEE1412D96B751FA67D465F45D6A9C1B35BA
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___120146F23536CA41FF3D095892F4AEE1412D96B751FA67D465F45D6A9C1B35BA_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::126F68DF1532C2B52650C95F611297C8D903AC4685B56BD1A6E475249DC614D5
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___126F68DF1532C2B52650C95F611297C8D903AC4685B56BD1A6E475249DC614D5_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::12882299078C85629712D32DC5C8A7585D76A7728B966688FE8BF2E24D5D3EC5
	__StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549 ___12882299078C85629712D32DC5C8A7585D76A7728B966688FE8BF2E24D5D3EC5_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::12DEDE5424FCC863514545E121A40894069D03534E02CFE4A66F1E79C72EBEB4
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___12DEDE5424FCC863514545E121A40894069D03534E02CFE4A66F1E79C72EBEB4_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::13725726F438CF735A00F646A3C0489D18FB4A297067C0186DD358DF4937ECD1
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___13725726F438CF735A00F646A3C0489D18FB4A297067C0186DD358DF4937ECD1_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::13C2A8B2FA10F7CD55272F4FB8F76348444562D66EB8F42C374D51825722C6A2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___13C2A8B2FA10F7CD55272F4FB8F76348444562D66EB8F42C374D51825722C6A2_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::14164DB6AE6DD908B1A17BE450277EF3355DF63A8311EBB056FF03477957D69D
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___14164DB6AE6DD908B1A17BE450277EF3355DF63A8311EBB056FF03477957D69D_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::14F3AF8BBA4E69306FB8C4420147917A270AB0DA9322A09EF0CA818701224A52
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___14F3AF8BBA4E69306FB8C4420147917A270AB0DA9322A09EF0CA818701224A52_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1577DEEA3D606B9333A6C16EDC4C38AD182F37F459FE5D2F8BAFB9C03C81B58B
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___1577DEEA3D606B9333A6C16EDC4C38AD182F37F459FE5D2F8BAFB9C03C81B58B_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::172272A31C68924D4492AD97C56E7B6989487DDF8D4691C6964EA08403561E91
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___172272A31C68924D4492AD97C56E7B6989487DDF8D4691C6964EA08403561E91_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::17D36E5A2AD75C191F070405139EE1FAF2DAC6DDEC515605DBFCCB65D1CBA620
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___17D36E5A2AD75C191F070405139EE1FAF2DAC6DDEC515605DBFCCB65D1CBA620_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::17EB2D7A14A7305A9CAFC3C9DDFB7189A8EF373A02DA385C379800BFDC952E9A
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___17EB2D7A14A7305A9CAFC3C9DDFB7189A8EF373A02DA385C379800BFDC952E9A_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::18045443A61D3E6F181335D3BF551A22980853C1E94009B0DD2A79A9279287F4
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___18045443A61D3E6F181335D3BF551A22980853C1E94009B0DD2A79A9279287F4_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::182FE6A6D2E6DF33EF2AF690D41FD78B3BE0CEA43D4E1AF5B2614A02E4E04507
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___182FE6A6D2E6DF33EF2AF690D41FD78B3BE0CEA43D4E1AF5B2614A02E4E04507_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::195C23306CC1AC0CE60290FCBF363E8A054A493D31F26AE959C4F93B9032EB56
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___195C23306CC1AC0CE60290FCBF363E8A054A493D31F26AE959C4F93B9032EB56_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::19D1DEB92599D0859647A8700314DD2D735B5B00B038278E456EDD676CA38687
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___19D1DEB92599D0859647A8700314DD2D735B5B00B038278E456EDD676CA38687_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::19F62F45090513D31BFE4B2760AA4C0C9FED0DC89C824BA8788EBAE7DAA58CC2
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___19F62F45090513D31BFE4B2760AA4C0C9FED0DC89C824BA8788EBAE7DAA58CC2_46;
	// System.Int64 <PrivateImplementationDetails>::1A408B5C9FB225A7230CC9434D8E38506A1C4E3E5A1471598F98F9B5326DA3F9
	int64_t ___1A408B5C9FB225A7230CC9434D8E38506A1C4E3E5A1471598F98F9B5326DA3F9_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::1A7A05BF60C95989ECB9F9710200B8FF883A46289813087969055CE6B6A4F9AC
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___1A7A05BF60C95989ECB9F9710200B8FF883A46289813087969055CE6B6A4F9AC_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1CCF6C0CE61BFFCCA95581F68036B911D3C95F7E3E1486121AE92C688FDA02B6
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___1CCF6C0CE61BFFCCA95581F68036B911D3C95F7E3E1486121AE92C688FDA02B6_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::1D7C51C2DFB3815F118B7EA33BFD0C75F5251A7AD77D0E533D82694EFAF77250
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___1D7C51C2DFB3815F118B7EA33BFD0C75F5251A7AD77D0E533D82694EFAF77250_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::1F5BBECF6766899B8129CD725DEDD69198C57C1DA1659815ECF08F793CD74184
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___1F5BBECF6766899B8129CD725DEDD69198C57C1DA1659815ECF08F793CD74184_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1FE6C4DC18E85E72ED243CA7112D66D156196F93B91C0D79C284C2A25605B9C2
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___1FE6C4DC18E85E72ED243CA7112D66D156196F93B91C0D79C284C2A25605B9C2_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2219F43B7ECE977659BDE826A95F92A74A8967AFB37AFF87C51992D2B3CDDA55
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___2219F43B7ECE977659BDE826A95F92A74A8967AFB37AFF87C51992D2B3CDDA55_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::236B40419B78D6875ED1777CBAA8239EDBD590ABB5984DC20CAF6025406CD41A
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___236B40419B78D6875ED1777CBAA8239EDBD590ABB5984DC20CAF6025406CD41A_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::23BBAD722E68CA6E471CB9A92B60F129B3EDFAB520DBDCFA37A5E35F53DC467B
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___23BBAD722E68CA6E471CB9A92B60F129B3EDFAB520DBDCFA37A5E35F53DC467B_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::23CD6D0B6979506A1F632C96C0D955183FFA5B396ADB1FECD27EBB7C716CCAE1
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___23CD6D0B6979506A1F632C96C0D955183FFA5B396ADB1FECD27EBB7C716CCAE1_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::246FE9DD05C396E40CA5A049DF92840B57E2B7E774419C0332D6C72885A65D02
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___246FE9DD05C396E40CA5A049DF92840B57E2B7E774419C0332D6C72885A65D02_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::24CA1A9EB94E3FBFE3297337ED4551BB4A6BE33A80C2806D9228F669FC7CD3A6
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___24CA1A9EB94E3FBFE3297337ED4551BB4A6BE33A80C2806D9228F669FC7CD3A6_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::255F6A73A6E636371F66D82AAE4B3DAEB58920D7CFC3DF6BD21B0BC8FB75EDFE
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___255F6A73A6E636371F66D82AAE4B3DAEB58920D7CFC3DF6BD21B0BC8FB75EDFE_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::25FA2D49BF8F75F41CD89C29BDA5156E28CBC531FE4BADD44984F087B0443B34
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___25FA2D49BF8F75F41CD89C29BDA5156E28CBC531FE4BADD44984F087B0443B34_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::26C545B95F17016F053F61ED58396AB398DCC938541BF821A58F9A3172FA6D85
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___26C545B95F17016F053F61ED58396AB398DCC938541BF821A58F9A3172FA6D85_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::26FB6702A18E7D0957DABD387ADF16224EE29E7621C382DBD80ADC87A54C2A87
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___26FB6702A18E7D0957DABD387ADF16224EE29E7621C382DBD80ADC87A54C2A87_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::275480D553DA165EBE66E43A97468CA4CB9F11726F5F7C32C0B5FBE7F33940A1
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___275480D553DA165EBE66E43A97468CA4CB9F11726F5F7C32C0B5FBE7F33940A1_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::27A9AA74316728E24981CD3CA2DA4A7E9C847C3EF43796D6C1B2FE4067D65913
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___27A9AA74316728E24981CD3CA2DA4A7E9C847C3EF43796D6C1B2FE4067D65913_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::27CC37683116A321F4C03B0D7015ACE1FD3B8F258E30AC673D40FBD6D27142C5
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___27CC37683116A321F4C03B0D7015ACE1FD3B8F258E30AC673D40FBD6D27142C5_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::289A0E07707B4302E361AB3B2CAEF696AF373B8ED2042761D3338A6F1FBAE5A6
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___289A0E07707B4302E361AB3B2CAEF696AF373B8ED2042761D3338A6F1FBAE5A6_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::29A05F6D876C04FC16B06D636BCFE9BDFD13ADBE58379648F5E56F2544979BC1
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___29A05F6D876C04FC16B06D636BCFE9BDFD13ADBE58379648F5E56F2544979BC1_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::2A59B4E5B0B951A4D482BB2F7EB19895CA52774D9EE40ACB52368E92562FE353
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___2A59B4E5B0B951A4D482BB2F7EB19895CA52774D9EE40ACB52368E92562FE353_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::2A723B9FCB382FDF7554955D78CDD6EB2F045105ABEEF9053AF538AB954F50A2
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___2A723B9FCB382FDF7554955D78CDD6EB2F045105ABEEF9053AF538AB954F50A2_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2DBDEBA00B1457645CBE9B424870A130245DFACFE7ED475D9B75F139F6657F9B
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___2DBDEBA00B1457645CBE9B424870A130245DFACFE7ED475D9B75F139F6657F9B_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3716 <PrivateImplementationDetails>::2FD9F61496C31BB58FD6C416932CBE892EAC01B45F793F108E72E508E1D7275F
	__StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E ___2FD9F61496C31BB58FD6C416932CBE892EAC01B45F793F108E72E508E1D7275F_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3025292A422A82F39DF287AE586AA96C66B426EBC885D0DB9F375307B700CF26
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3025292A422A82F39DF287AE586AA96C66B426EBC885D0DB9F375307B700CF26_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::3184A6E5EC4D9DBB4FD240E5D105E90FEC211DC6DAEC4CE88EE0E943487B9049
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___3184A6E5EC4D9DBB4FD240E5D105E90FEC211DC6DAEC4CE88EE0E943487B9049_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::31BC1949C696C3EA72B1C8971B890B4ACD30B64C2243DA6D15F8D4B29B2BE63E
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___31BC1949C696C3EA72B1C8971B890B4ACD30B64C2243DA6D15F8D4B29B2BE63E_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584
	__StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D ___31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::326A8CA97825794CBE04EB7E9AC623ED0335ADA08FEC52DF0140973F3C11BF48
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___326A8CA97825794CBE04EB7E9AC623ED0335ADA08FEC52DF0140973F3C11BF48_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::333EEBA4755BA5655F1E167AC9A194B7A31FD702D0C906EA0C7653BA64F64AC3
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___333EEBA4755BA5655F1E167AC9A194B7A31FD702D0C906EA0C7653BA64F64AC3_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::34EDBD138605A3D78925D5D15761E45ECC6C14EBFBEF655552AD8203B19EFED5
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___34EDBD138605A3D78925D5D15761E45ECC6C14EBFBEF655552AD8203B19EFED5_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::34FE7523D761357A8A0DE3DA82E1C7DDF71B8514A2FAAE4E4987BA78EFFDC42B
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___34FE7523D761357A8A0DE3DA82E1C7DDF71B8514A2FAAE4E4987BA78EFFDC42B_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::35E3962D353487BAC8C20382B68B16D946F11EF9D1652B924C17828EB66B8987
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___35E3962D353487BAC8C20382B68B16D946F11EF9D1652B924C17828EB66B8987_85;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::376FEC89C1DDFBDC7A11B73B88081D866CCD5482393C738AA1CDF96698A7E63C
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___376FEC89C1DDFBDC7A11B73B88081D866CCD5482393C738AA1CDF96698A7E63C_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::37E293668894EFC2772598381869A68625AA8E88DF1BAF5A5B4D8CA610B82A7A
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___37E293668894EFC2772598381869A68625AA8E88DF1BAF5A5B4D8CA610B82A7A_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::3986C22E68642385C1AD4952D2CAAA099E7AEAD5D256CF29AB70FFEB2AF7B90D
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___3986C22E68642385C1AD4952D2CAAA099E7AEAD5D256CF29AB70FFEB2AF7B90D_88;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3996041EA52DBFCA6404987AF2F578A31BEE64AFA72F6A37068C1A4F4F3C74F7
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3996041EA52DBFCA6404987AF2F578A31BEE64AFA72F6A37068C1A4F4F3C74F7_89;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::39E265F2471EC546352DFF702DAB30438EDB4EC16476177FFDE70686A10D7BA4
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___39E265F2471EC546352DFF702DAB30438EDB4EC16476177FFDE70686A10D7BA4_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3A74D57482BD905DA0DBEF3CF35E1B89409A1FD7E186D2471D0D29823C193AE7
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___3A74D57482BD905DA0DBEF3CF35E1B89409A1FD7E186D2471D0D29823C193AE7_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::3A9BB11520249C4F2B1BCA94DCB2D9205720C9398D1A65D64160B02F289703D8
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___3A9BB11520249C4F2B1BCA94DCB2D9205720C9398D1A65D64160B02F289703D8_92;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3C2488D83E1226EAFB83751D49CCD75EA105FC327A5484557DF8E24E4AA188BF
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3C2488D83E1226EAFB83751D49CCD75EA105FC327A5484557DF8E24E4AA188BF_93;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_94;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3C8EA24643709757EB8109CF5AB8FEED8AB1C216672478D85BDEFE8A6133CCA2
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3C8EA24643709757EB8109CF5AB8FEED8AB1C216672478D85BDEFE8A6133CCA2_95;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3CAE317EBA02EF12600199FA2D78DFE083C54BE83893BA7E395E36F69EAF8541
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3CAE317EBA02EF12600199FA2D78DFE083C54BE83893BA7E395E36F69EAF8541_96;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::3CF59A29A6F8B44D23BBEC6DACCD8965E5220C2D4781780A30220CB6A92C0C70
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___3CF59A29A6F8B44D23BBEC6DACCD8965E5220C2D4781780A30220CB6A92C0C70_97;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3E3D5EAB67047C0BA6007007F9B33E31AD46F89A1491E9F92D1A0C8BF84B7E1E
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3E3D5EAB67047C0BA6007007F9B33E31AD46F89A1491E9F92D1A0C8BF84B7E1E_98;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::3E5AB8662435C65FDA6C470D1EF424A9ED92BE8554B7E0727AD7234EC057CAF7
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___3E5AB8662435C65FDA6C470D1EF424A9ED92BE8554B7E0727AD7234EC057CAF7_99;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::3E953A068B94D3C5FDD4B4CA444ACD27C20A432E12AC560D96696F34EA796C50
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___3E953A068B94D3C5FDD4B4CA444ACD27C20A432E12AC560D96696F34EA796C50_100;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::3EA16D2E0B5C77637B787240CD802F6D80AF9AC974F4B7C3E83D0A10862BD7E6
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___3EA16D2E0B5C77637B787240CD802F6D80AF9AC974F4B7C3E83D0A10862BD7E6_101;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3EA2A3529D013F512CCD072CD2F78803EE57FD82A15521EA680135C0872AD98C
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___3EA2A3529D013F512CCD072CD2F78803EE57FD82A15521EA680135C0872AD98C_102;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::3FCAC1F7CEEA810B8D6EE6F7D8F017856284B055AB5C6F06B64A6B2968F581F1
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___3FCAC1F7CEEA810B8D6EE6F7D8F017856284B055AB5C6F06B64A6B2968F581F1_103;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::400C0E18231705F4F9C7BA6F6E8817FD739DFC494E04EC17313B4271B1859934
	__StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF ___400C0E18231705F4F9C7BA6F6E8817FD739DFC494E04EC17313B4271B1859934_104;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::40BD59C08A0A7B004FF75DB64D2029BF358D13E46614A4A4ACE5967D74A314DC
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___40BD59C08A0A7B004FF75DB64D2029BF358D13E46614A4A4ACE5967D74A314DC_105;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::42206C420CA0A7A3713C06FC9890A566B99B2883F1AB9F6C30CA3A43BEDE1FE5
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___42206C420CA0A7A3713C06FC9890A566B99B2883F1AB9F6C30CA3A43BEDE1FE5_106;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=148 <PrivateImplementationDetails>::426936B76072711955E414068F02B9E3F1417C4588DB2C0F07573059826975EC
	__StaticArrayInitTypeSizeU3D148_tB9B7F92C7973454BB2C36DDDB445FABCE8E4B7FA ___426936B76072711955E414068F02B9E3F1417C4588DB2C0F07573059826975EC_107;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::42C10A7950523CCE6B9382EAEB102B25C1454BF1F82A5C866E437FAD5C2E8FA2
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___42C10A7950523CCE6B9382EAEB102B25C1454BF1F82A5C866E437FAD5C2E8FA2_108;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::437620127E191BEBC6C17EFF361BAC59416FF983AFB4C3C9984779E8529A3AF0
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___437620127E191BEBC6C17EFF361BAC59416FF983AFB4C3C9984779E8529A3AF0_109;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::44093EEA40371522F7004E547716814C46F14668FA3301246EFD1C8F1AB50D7C
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___44093EEA40371522F7004E547716814C46F14668FA3301246EFD1C8F1AB50D7C_110;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::441CAB64D4900D5EBD01E8C095BC38383C3924C53D5D2BFF6E49B560F2BC13B4
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___441CAB64D4900D5EBD01E8C095BC38383C3924C53D5D2BFF6E49B560F2BC13B4_111;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::443172DD7286929E10A2BFA422F4CD412C05EF05A99F4924ED2031F9B3DCE722
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___443172DD7286929E10A2BFA422F4CD412C05EF05A99F4924ED2031F9B3DCE722_112;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::443AFE4C7F441BCF1F04D8A8D4147688B72043B95EC79150E40D3DC7ECB8A8BB
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___443AFE4C7F441BCF1F04D8A8D4147688B72043B95EC79150E40D3DC7ECB8A8BB_113;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::457C3EE1F912D05B2088A38762AF1C4DE10BDE0E6E68F56019F14FDD8052E284
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___457C3EE1F912D05B2088A38762AF1C4DE10BDE0E6E68F56019F14FDD8052E284_114;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::459738E68BE1F8C9C40E0AB786DE5DD9B05E2ECEA47D4B1E02A678CC789A71E1
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___459738E68BE1F8C9C40E0AB786DE5DD9B05E2ECEA47D4B1E02A678CC789A71E1_115;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::45D261060F92FEA257731D4533BA1B6D378854391DF58BFEB8C1FB1778D40CDC
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___45D261060F92FEA257731D4533BA1B6D378854391DF58BFEB8C1FB1778D40CDC_116;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_117;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::46194B677BFC5FF2B7D69B1590995222B63D20D9F68A63DC84B77477C521AB5C
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___46194B677BFC5FF2B7D69B1590995222B63D20D9F68A63DC84B77477C521AB5C_118;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::461D85ED33B25F3E0E5504D52E29569C2749FC5CEAC373977AD3CFDBA98E1EE7
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___461D85ED33B25F3E0E5504D52E29569C2749FC5CEAC373977AD3CFDBA98E1EE7_119;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::46909D84EC9AF5DBF9113432593C4E89CCE8D2F54253B62FA0EA71FC3727D888
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___46909D84EC9AF5DBF9113432593C4E89CCE8D2F54253B62FA0EA71FC3727D888_120;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::46C94F35DD2C4334C746C03A7010D02F23EE380918C065F451C019E49404648A
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___46C94F35DD2C4334C746C03A7010D02F23EE380918C065F451C019E49404648A_121;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::46F121972539C3A215848630FBD7785316566B2DC48BD8F0A5BAF3FC53109E65
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___46F121972539C3A215848630FBD7785316566B2DC48BD8F0A5BAF3FC53109E65_122;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::47068B7F118B7E435FFB84E669EE2035A7DCBFF9F370B71AFF1010D8F86FD97E
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___47068B7F118B7E435FFB84E669EE2035A7DCBFF9F370B71AFF1010D8F86FD97E_123;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::48BC48E50F59739E776A473E658720BC6D9433EE1B18922E9C2073AE677EC054
	__StaticArrayInitTypeSizeU3D192_t2AC98CA4C20A542AFC875CA106D5FB26658E16AF ___48BC48E50F59739E776A473E658720BC6D9433EE1B18922E9C2073AE677EC054_124;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::4966BE15486C330627518445E374AD3B77A4C753713F34E90832D2637A33EC7D
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___4966BE15486C330627518445E374AD3B77A4C753713F34E90832D2637A33EC7D_125;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::4982C8E15D86BEDB33F39799B5FF5EDEC05852D0693802FCE8E0E69710D0F0F6
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4982C8E15D86BEDB33F39799B5FF5EDEC05852D0693802FCE8E0E69710D0F0F6_126;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::49DA175B59DD524F60B4588AA0543382B4CE84AC0EDC7952502C7603F8A32766
	__StaticArrayInitTypeSizeU3D72_t708588A5E342FEDE2E7BBDA6EEAC365EE84CFEE2 ___49DA175B59DD524F60B4588AA0543382B4CE84AC0EDC7952502C7603F8A32766_127;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::4AC88F2CF7036F6D1F43EBA474C18C54DD90B6BFE11EC2CFCBC8998F18CCDD97
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4AC88F2CF7036F6D1F43EBA474C18C54DD90B6BFE11EC2CFCBC8998F18CCDD97_128;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::4B8D717CC775EDA73AA604D52E42BDF7F28E2460E4EDB24E04B38BA01C6069E6
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___4B8D717CC775EDA73AA604D52E42BDF7F28E2460E4EDB24E04B38BA01C6069E6_129;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=224 <PrivateImplementationDetails>::4C2817831C601A9BBB49CE6749056395F47322DCB7FF38D100CF0F6E8D3DFC41
	__StaticArrayInitTypeSizeU3D224_t5755492DB7BFC8BEE69DDA8A67082319B835C4E2 ___4C2817831C601A9BBB49CE6749056395F47322DCB7FF38D100CF0F6E8D3DFC41_130;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::4D9EEEEC738149F07A06103E0E4B6E75099471DFD8F5EB7C4E2400FFEF064C2F
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___4D9EEEEC738149F07A06103E0E4B6E75099471DFD8F5EB7C4E2400FFEF064C2F_131;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::4E64D848E7E810CA70815A7E5E17D793C19920F2B4E480485C947DD72C5E5E30
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___4E64D848E7E810CA70815A7E5E17D793C19920F2B4E480485C947DD72C5E5E30_132;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::4E84EFE399128EEF84D52B47F979C9BF1FA238CB86F5E44A2A7CD20FD17E2A97
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4E84EFE399128EEF84D52B47F979C9BF1FA238CB86F5E44A2A7CD20FD17E2A97_133;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::4F46B1E848BF6A3FB8F3AED91D0D8E800F708969D1525ADECD4B4C09FE363183
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___4F46B1E848BF6A3FB8F3AED91D0D8E800F708969D1525ADECD4B4C09FE363183_134;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::4FBEA9B841346FAFF684EC88811CBDF95A2C479284DBB8D7FF76B00741808C68
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___4FBEA9B841346FAFF684EC88811CBDF95A2C479284DBB8D7FF76B00741808C68_135;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::500405D96FA46FC9F1034A6F706DD3938860BD66339432A6BCBB3FCF5C786318
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___500405D96FA46FC9F1034A6F706DD3938860BD66339432A6BCBB3FCF5C786318_136;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::503DE4A84834C731CDA8AA9413EF5C1064BF558521B019045531268E6E2FF36F
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___503DE4A84834C731CDA8AA9413EF5C1064BF558521B019045531268E6E2FF36F_137;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::506570EFE367152953FDD1D14D773AF80749A7A79395213C803A3E3A701EE194
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___506570EFE367152953FDD1D14D773AF80749A7A79395213C803A3E3A701EE194_138;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::5171207C29B6B87B86B65B604A0F4874284DE01E326D1077F8D4D224C62B8EE1
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___5171207C29B6B87B86B65B604A0F4874284DE01E326D1077F8D4D224C62B8EE1_139;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::51D73E882CADE033AC8DE08370EC96FCEABDFA458A02E6A7ADD0A2D5137DEEA4
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___51D73E882CADE033AC8DE08370EC96FCEABDFA458A02E6A7ADD0A2D5137DEEA4_140;
	// System.Int64 <PrivateImplementationDetails>::523F04FF5F245FA953AD94E355ADAD2F2984DCDFBDBA048386221A679BD4550C
	int64_t ___523F04FF5F245FA953AD94E355ADAD2F2984DCDFBDBA048386221A679BD4550C_141;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::529F8D7E4FA0B173CD588B1BC9BA588E03827B844303D219AC18396353D68BD6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___529F8D7E4FA0B173CD588B1BC9BA588E03827B844303D219AC18396353D68BD6_142;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::5315ECE4BC5C350C100C417E0C5C2E479EF80E8904507D2869D7FD1CDF1D1D14
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5315ECE4BC5C350C100C417E0C5C2E479EF80E8904507D2869D7FD1CDF1D1D14_143;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::5355534C824BF0CAEE4451882811E9C0948E18DF5D7E686E024DBB4E8ED5CDD2
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5355534C824BF0CAEE4451882811E9C0948E18DF5D7E686E024DBB4E8ED5CDD2_144;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::53C8D809975CEC5C320BC40E1590AD53660F48899C241D2EC8160F9069855075
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___53C8D809975CEC5C320BC40E1590AD53660F48899C241D2EC8160F9069855075_145;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::53E045D5B31086C47540542B72EE1B6903167A663E1B49DBD8CA10BCBD6FD2C3
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___53E045D5B31086C47540542B72EE1B6903167A663E1B49DBD8CA10BCBD6FD2C3_146;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::54221FD7F79821CDEC2743C128F5B42C700B61BAEE70B77D85629EF174985FFE
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___54221FD7F79821CDEC2743C128F5B42C700B61BAEE70B77D85629EF174985FFE_147;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::54AEC9D816A2049C6D5B1B50D53ED28970F7856DF9D4E633186E25E8EEADD2F2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___54AEC9D816A2049C6D5B1B50D53ED28970F7856DF9D4E633186E25E8EEADD2F2_148;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::54C9639E6CD79D36B9F30418CD5E3E597717992C749A52735BB65E4498449444
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___54C9639E6CD79D36B9F30418CD5E3E597717992C749A52735BB65E4498449444_149;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::54CC3130C99E4F12595E1184BD1AAE62D20D43FC6138ED4644FD79A1A2E51D33
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___54CC3130C99E4F12595E1184BD1AAE62D20D43FC6138ED4644FD79A1A2E51D33_150;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::55477E719FF85B833DE5527EC0B316C4DBBE336790D3BF49447F60D82B087CC4
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___55477E719FF85B833DE5527EC0B316C4DBBE336790D3BF49447F60D82B087CC4_151;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::55794D1F460959F1E8325B213DBCADF6C0DD7CEB4C69F297BBBF65C7B16F515E
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___55794D1F460959F1E8325B213DBCADF6C0DD7CEB4C69F297BBBF65C7B16F515E_152;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::557CA8779C711B333E63BDB32CF9ED72E6C5C5A01115DF80CD7BFAB15E0BDE2A
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___557CA8779C711B333E63BDB32CF9ED72E6C5C5A01115DF80CD7BFAB15E0BDE2A_153;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::561F14598835BA7E3999D1611F0C4DDAC9F28310267DE2FD1E69B82019968929
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___561F14598835BA7E3999D1611F0C4DDAC9F28310267DE2FD1E69B82019968929_154;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::567040487C6F18CBB8D5E5E4B173E703D178168DAD3AC10943F3557251C58623
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___567040487C6F18CBB8D5E5E4B173E703D178168DAD3AC10943F3557251C58623_155;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::56B2BFE53C008A4B62C97009BE32F6CF9CBB910933B6ABDCA3AE4314423E2BEC
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___56B2BFE53C008A4B62C97009BE32F6CF9CBB910933B6ABDCA3AE4314423E2BEC_156;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::579AED0AC63FF69DAC1BC21BCD1FDDA973007C765FB1E3178829088798846DEB
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___579AED0AC63FF69DAC1BC21BCD1FDDA973007C765FB1E3178829088798846DEB_157;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::57C421A369852444CB9B4AD65840A75F199B433457EF19682DEC6760F206D384
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___57C421A369852444CB9B4AD65840A75F199B433457EF19682DEC6760F206D384_158;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::585BC7A636D142652A8ED9100F0940502AFB849EAE508433D2930FB61AD61F36
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___585BC7A636D142652A8ED9100F0940502AFB849EAE508433D2930FB61AD61F36_159;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::58E8142CDDE695FFE119E16D03B99D32AFA9CEF767F293D16F9C8D527DCE4519
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___58E8142CDDE695FFE119E16D03B99D32AFA9CEF767F293D16F9C8D527DCE4519_160;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::5A26869671F415C7CAC00A7BA28071F68D4D13884E815F88F519A51F68242A2D
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___5A26869671F415C7CAC00A7BA28071F68D4D13884E815F88F519A51F68242A2D_161;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::5A62A202412C312108D20942EB0D3461C2B622D0F7489ACED8BCA40FDD25A220
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5A62A202412C312108D20942EB0D3461C2B622D0F7489ACED8BCA40FDD25A220_162;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B3338E2FC111228503FBC18BD44C466D47ABF56A089F83E272B2EF7890B8438
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___5B3338E2FC111228503FBC18BD44C466D47ABF56A089F83E272B2EF7890B8438_163;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::5B6F85B8869E38A165A961AF5A2B9046FF1DB878FA266659D539F16C3F96635F
	__StaticArrayInitTypeSizeU3D96_t9CD906CB1D7B605081EDC2DE3DF5BF2ECBF5272C ___5B6F85B8869E38A165A961AF5A2B9046FF1DB878FA266659D539F16C3F96635F_164;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::5B9D549107093388BC926FEA04B9A3A2DC67AC8CF071E86BD19A61861866E08A
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___5B9D549107093388BC926FEA04B9A3A2DC67AC8CF071E86BD19A61861866E08A_165;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::5BBA2042E3C1022B2636E3AD2DA3A2189A212BCA10B897E49D1F13ECBC6236ED
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___5BBA2042E3C1022B2636E3AD2DA3A2189A212BCA10B897E49D1F13ECBC6236ED_166;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5BDADD0B152323C10011CC7204303994D6647F495946C4ED80FADE49DCA4A786
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___5BDADD0B152323C10011CC7204303994D6647F495946C4ED80FADE49DCA4A786_167;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::5BE085A820D9056AA7FABDA1EBE6E33A209795E4198532B69C9EB3E681CE7C73
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5BE085A820D9056AA7FABDA1EBE6E33A209795E4198532B69C9EB3E681CE7C73_168;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::5ECD5993D00FBBE04B032B6779F4B2B102D77DE937884FA161FC5228A81E53E6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5ECD5993D00FBBE04B032B6779F4B2B102D77DE937884FA161FC5228A81E53E6_169;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5EE85A1ECED9BE0350F258BC6847BBDECD3CACFB0304338AA1E09958B876097E
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___5EE85A1ECED9BE0350F258BC6847BBDECD3CACFB0304338AA1E09958B876097E_170;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::5F101F2897521FF049B822F92CD7B53A80F9FB4914D4CBC57EF546B65B7E6839
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___5F101F2897521FF049B822F92CD7B53A80F9FB4914D4CBC57EF546B65B7E6839_171;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::600AC5C1423B779A4C99AE7DA84D1B1933C6D718C96B7561819FF39D757CE0F6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___600AC5C1423B779A4C99AE7DA84D1B1933C6D718C96B7561819FF39D757CE0F6_172;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::6163542BEDC9F741378F5E8DD94972C8B4400A62D3FE9AF8567897E54BBA76D2
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___6163542BEDC9F741378F5E8DD94972C8B4400A62D3FE9AF8567897E54BBA76D2_173;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::61E3C6F89C765AA79F4705C5B6FB5ED942BDB2608A53E2DE1FF6AEEB734CC061
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___61E3C6F89C765AA79F4705C5B6FB5ED942BDB2608A53E2DE1FF6AEEB734CC061_174;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=384 <PrivateImplementationDetails>::6209A6AC37E99A6466A972FB4A148367EB001A7EB55C30EBFA216ED4366F06D5
	__StaticArrayInitTypeSizeU3D384_t1A1F076C04E5220ED1284BA358D4D0B5A803E3B5 ___6209A6AC37E99A6466A972FB4A148367EB001A7EB55C30EBFA216ED4366F06D5_175;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::62485F3A7B1400F4F6CCC1898E2270F4198463F9B5D184CD50B58AF56D397F4B
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___62485F3A7B1400F4F6CCC1898E2270F4198463F9B5D184CD50B58AF56D397F4B_176;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::6262C97B9D5012BB62ACB236D2F7BC008E5A44085B357D45671B93DC7D573670
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___6262C97B9D5012BB62ACB236D2F7BC008E5A44085B357D45671B93DC7D573670_177;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::62BDDA37EA0223B1A9DDF568724B8E6ECC01B3CD2FC385C180F4CFF3D965AB04
	__StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF ___62BDDA37EA0223B1A9DDF568724B8E6ECC01B3CD2FC385C180F4CFF3D965AB04_178;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::62FEAB611DAA84030B232E7DD216F1BDE075AEDFD08DBCBA8E003D5ECB0F0367
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___62FEAB611DAA84030B232E7DD216F1BDE075AEDFD08DBCBA8E003D5ECB0F0367_179;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::631B971BF7A9D6D79FC9C7BE52F3716771B77B02D5522E093D93CD4B73D73831
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___631B971BF7A9D6D79FC9C7BE52F3716771B77B02D5522E093D93CD4B73D73831_180;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::642DD7F7203A2E843E095175CFB7A065EBB3D187342591A43AFE864E930CF266
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___642DD7F7203A2E843E095175CFB7A065EBB3D187342591A43AFE864E930CF266_181;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::643B781D27A00AA328CF5C5823D9FA11E7B6262EFC8008B26C5F77AF11CF65A9
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___643B781D27A00AA328CF5C5823D9FA11E7B6262EFC8008B26C5F77AF11CF65A9_182;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::64B1A06FA33725266DB34F8BF34BE202C9B17AAD7AF978D1CFBA2C84E5F65F6D
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___64B1A06FA33725266DB34F8BF34BE202C9B17AAD7AF978D1CFBA2C84E5F65F6D_183;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::64CBA3F00AE73B633361F6F08153C7604C706E9DC3A4B49D5B1141E1C5E8974B
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___64CBA3F00AE73B633361F6F08153C7604C706E9DC3A4B49D5B1141E1C5E8974B_184;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::6533A1867F4BC99243B3A3404316609ABAC85E9C1F7E6CA85C8797855500615F
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___6533A1867F4BC99243B3A3404316609ABAC85E9C1F7E6CA85C8797855500615F_185;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::658F5748D813B4E437FD01EB363922CBAA7DA29D083B650477365BABC15547EA
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___658F5748D813B4E437FD01EB363922CBAA7DA29D083B650477365BABC15547EA_186;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::66AA9E76039D3A06244CC7E2F954A1E68113129A35620FD6E589D841F90EB1AA
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___66AA9E76039D3A06244CC7E2F954A1E68113129A35620FD6E589D841F90EB1AA_187;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::66E2AE5DC56EA19EB250B63843C02B03E69292CF68BE9BF94A695DB5BF39C33C
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___66E2AE5DC56EA19EB250B63843C02B03E69292CF68BE9BF94A695DB5BF39C33C_188;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::6853876EE0DC6D2CF1608B0E44AC2C0E0A559A10652A17DFC1CDD5A20B924CCA
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___6853876EE0DC6D2CF1608B0E44AC2C0E0A559A10652A17DFC1CDD5A20B924CCA_189;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::689EB3A9AA00BA7C2C6B9EFF3B6F2CBBD9671BC1F8C4B426B88CFAF213947030
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___689EB3A9AA00BA7C2C6B9EFF3B6F2CBBD9671BC1F8C4B426B88CFAF213947030_190;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6A204E32397EA674B30C93C5BEB7C18BED0CAB135010047DB933C933AA668E12
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6A204E32397EA674B30C93C5BEB7C18BED0CAB135010047DB933C933AA668E12_191;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6A8F9E996F931BF7B6F181E0575CE25D4A9E7BC932A6857937E65E0ED29373E0
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___6A8F9E996F931BF7B6F181E0575CE25D4A9E7BC932A6857937E65E0ED29373E0_192;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6AE24B485B347F50CDDEA7FFEE54B5BD62D20834ADC93046B5F7BC57CF9060B0
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6AE24B485B347F50CDDEA7FFEE54B5BD62D20834ADC93046B5F7BC57CF9060B0_193;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6E03C9336138F77C7CE70FDF8F46C5BC25F7D4CC6B588A52ED21376966FA5CE6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6E03C9336138F77C7CE70FDF8F46C5BC25F7D4CC6B588A52ED21376966FA5CE6_194;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6E55BC1411E596DF70CA77A520A57B363E3D71419561280A04D122820B4B8CB3
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6E55BC1411E596DF70CA77A520A57B363E3D71419561280A04D122820B4B8CB3_195;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::6E8A84CA24C0EEA9E88B84F0E6B29D72F1D3FA2C1C98194D4DA1D9FBCED0BBA0
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___6E8A84CA24C0EEA9E88B84F0E6B29D72F1D3FA2C1C98194D4DA1D9FBCED0BBA0_196;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6E9AE95ACA02DF626FA33A9741718E9A2C4E3B2FCEFBBBD19323E7F8C82C99E5
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___6E9AE95ACA02DF626FA33A9741718E9A2C4E3B2FCEFBBBD19323E7F8C82C99E5_197;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::6EAD47B68EA871CE5BC138EF9521E54E2DD5F9041ED3693236E3E0A05E07431D
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___6EAD47B68EA871CE5BC138EF9521E54E2DD5F9041ED3693236E3E0A05E07431D_198;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::7002DE627BC471A98A7A5632AE6C2EB53AB1701A1E0B7795AFA4375ED06ABBB4
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___7002DE627BC471A98A7A5632AE6C2EB53AB1701A1E0B7795AFA4375ED06ABBB4_199;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::7043EE766EA3F235BB890D428D4EC34A72E1B1EDC0FEDEE752BBA827D16E0CBD
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___7043EE766EA3F235BB890D428D4EC34A72E1B1EDC0FEDEE752BBA827D16E0CBD_200;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::70FEE9D32A08A1392FE88751836582F4138FC99A50A5074354BE850FE954EAA2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___70FEE9D32A08A1392FE88751836582F4138FC99A50A5074354BE850FE954EAA2_201;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7315F44964957B6A4D34B2C68297EDE39FA0733AD1F128770FBB57A7C9FBD4A4
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___7315F44964957B6A4D34B2C68297EDE39FA0733AD1F128770FBB57A7C9FBD4A4_202;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::73414863041C7E9B6AA38694511E37AAF7F5D3DEE1DF825693CD213DDF875837
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___73414863041C7E9B6AA38694511E37AAF7F5D3DEE1DF825693CD213DDF875837_203;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::741138C155628CD30B6C81C066C1CA769470357D728F6C7DD0F447E3C1B7FFBE
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___741138C155628CD30B6C81C066C1CA769470357D728F6C7DD0F447E3C1B7FFBE_204;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::741831DC3E09005B36AA2DBC67BE80CF0D2F3021B56BA57B16C2C9C62F3C2959
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___741831DC3E09005B36AA2DBC67BE80CF0D2F3021B56BA57B16C2C9C62F3C2959_205;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136 <PrivateImplementationDetails>::747B650D6F668311F4AB3B7CF94372C72A493756EB4AE7E06E1BAC045E2D10B9
	__StaticArrayInitTypeSizeU3D136_t90CF912B9341DF136CE5AF373B04F41182A5AC50 ___747B650D6F668311F4AB3B7CF94372C72A493756EB4AE7E06E1BAC045E2D10B9_206;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::750DDBE67AE485B234E897FED9A00B8E83BA9100D33AA4D7CD9F3B879969A0AD
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___750DDBE67AE485B234E897FED9A00B8E83BA9100D33AA4D7CD9F3B879969A0AD_207;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::757E6461DCD89E6D070B806E44A51A08B97920A457933D992CF8C4A24791B2EE
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___757E6461DCD89E6D070B806E44A51A08B97920A457933D992CF8C4A24791B2EE_208;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::76BE198D5251CD0E14A098EAD22BB8CECE4A64C385FEE85631584E162874CD11
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___76BE198D5251CD0E14A098EAD22BB8CECE4A64C385FEE85631584E162874CD11_209;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7742950BE05BECE6E8CA77BE0660E044BF69561055E99E34DD743703114144D1
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___7742950BE05BECE6E8CA77BE0660E044BF69561055E99E34DD743703114144D1_210;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11148 <PrivateImplementationDetails>::77A49BD1409C8FFC6F52BAD393E00B54E8D02CF6A9792C695B24234DEE82164B
	__StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39 ___77A49BD1409C8FFC6F52BAD393E00B54E8D02CF6A9792C695B24234DEE82164B_211;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::77E8A5EC90916CF9C8870B3073868F207E4B47E3D29F4FDD9A425796D343DC01
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___77E8A5EC90916CF9C8870B3073868F207E4B47E3D29F4FDD9A425796D343DC01_212;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::783707DEB573CE35EA8ED5733E56C1EB36B6490168A9C3BD6BAC000D7D5BE0E9
	__StaticArrayInitTypeSizeU3D144_t88DBA1A06BA52C64551CAA28CF6A700C7276E4CC ___783707DEB573CE35EA8ED5733E56C1EB36B6490168A9C3BD6BAC000D7D5BE0E9_213;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::78719695241A885A134CB1B0DE1C6AB3BFBEFCC154A81A261067CC988CA308AF
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___78719695241A885A134CB1B0DE1C6AB3BFBEFCC154A81A261067CC988CA308AF_214;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::79A3929AD7981948AA75A38412BE3500D5618D0FB288518918E8C7CDF9F44DF6
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___79A3929AD7981948AA75A38412BE3500D5618D0FB288518918E8C7CDF9F44DF6_215;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::7C5EFAD50018D440E7CCC2F9FD8E0876436D233BE74A69AB853DD23C9B28618A
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___7C5EFAD50018D440E7CCC2F9FD8E0876436D233BE74A69AB853DD23C9B28618A_216;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=156 <PrivateImplementationDetails>::7D3F517A0A69021F0A7982BBC5E45D3232F8C2A9128E524706BD805C0F1E0546
	__StaticArrayInitTypeSizeU3D156_tD70DAAACCD53BB9AB46DD56868095A2D44F7BEF0 ___7D3F517A0A69021F0A7982BBC5E45D3232F8C2A9128E524706BD805C0F1E0546_217;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::7D6072048AF62D374C35066E5A55EC50722E525C80B18231BBF1C28693F49B63
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___7D6072048AF62D374C35066E5A55EC50722E525C80B18231BBF1C28693F49B63_218;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::7DDA5451B10D19F1E2B821131A5FEA0D8CC3B93CD37CBED3F609E77ECA4B6A90
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___7DDA5451B10D19F1E2B821131A5FEA0D8CC3B93CD37CBED3F609E77ECA4B6A90_219;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7E5064A5D5B3E32AEF200544615BA57B26BDD213EEB9A4E67CB27C90B7780709
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___7E5064A5D5B3E32AEF200544615BA57B26BDD213EEB9A4E67CB27C90B7780709_220;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::7EEE0A0CFFBC006C874032DE232E6CD3CD7A0151631B023E9CE67731198B3F05
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___7EEE0A0CFFBC006C874032DE232E6CD3CD7A0151631B023E9CE67731198B3F05_221;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7F2594D9703B7AD658198D94EBC8D100DC59C8A6F2C0738087355FE79B9608CC
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___7F2594D9703B7AD658198D94EBC8D100DC59C8A6F2C0738087355FE79B9608CC_222;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::7F379C159024C3171F2888C8E2E9D87641E4344CF1E6959A500AD635BAA782B2
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___7F379C159024C3171F2888C8E2E9D87641E4344CF1E6959A500AD635BAA782B2_223;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::7F9F285BDE6257FD7F84ECED557EB570BD7EAF576192E8C33B7F80871F448515
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___7F9F285BDE6257FD7F84ECED557EB570BD7EAF576192E8C33B7F80871F448515_224;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7FC14D64A500FEE702DA3A8AD7BB0B27515463E25E53EE60A7BD44295431AD05
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___7FC14D64A500FEE702DA3A8AD7BB0B27515463E25E53EE60A7BD44295431AD05_225;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::812EB43FE6430D68CCA61919BE9E158DC69EA9D5FBA247A60BA9B5C39FB3619E
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___812EB43FE6430D68CCA61919BE9E158DC69EA9D5FBA247A60BA9B5C39FB3619E_226;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3716 <PrivateImplementationDetails>::81512AF6BA6ACE8BD43DC44B1A304AF63820CD97EE9FC3BCCC40E59C50FEDD23
	__StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E ___81512AF6BA6ACE8BD43DC44B1A304AF63820CD97EE9FC3BCCC40E59C50FEDD23_227;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::81A7FE95471927E1E79CC01C8D4BB688FA366E28CB5DC58B92634B474FE22B82
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___81A7FE95471927E1E79CC01C8D4BB688FA366E28CB5DC58B92634B474FE22B82_228;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::82780DF78F509F95EE94AF8DC252B925D47B58905E2FFA6496F36968A2363C07
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___82780DF78F509F95EE94AF8DC252B925D47B58905E2FFA6496F36968A2363C07_229;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::8288302BAEB1A953FAD17BAB09C75451FEAEC39C5656870E803178CE4CBA4066
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8288302BAEB1A953FAD17BAB09C75451FEAEC39C5656870E803178CE4CBA4066_230;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::82F183D9F2A00259AC055474F99A4BDE23BC8A77E59BB671B8564015AD073156
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___82F183D9F2A00259AC055474F99A4BDE23BC8A77E59BB671B8564015AD073156_231;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::83DAAB365843C739D4E5F86FD73833FA5422CAE5E07005B8CCBF261620ECF39E
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___83DAAB365843C739D4E5F86FD73833FA5422CAE5E07005B8CCBF261620ECF39E_232;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::844C87A358C6AF886A861C14991CC22D422D45B3BFA75AA4E332C690401F49ED
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___844C87A358C6AF886A861C14991CC22D422D45B3BFA75AA4E332C690401F49ED_233;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::84A29533CD28AA379618E8B5FCA42CEA74BE3BD0BD75DE950A4F82CB05BA1AE2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___84A29533CD28AA379618E8B5FCA42CEA74BE3BD0BD75DE950A4F82CB05BA1AE2_234;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::850EE833EB693A978D2B35F598EC6EC66F873F8E433E0DFE3C55DC2248BF697E
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___850EE833EB693A978D2B35F598EC6EC66F873F8E433E0DFE3C55DC2248BF697E_235;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::858E7991DEE7525CF7CFCFAFDFC56FD6A023A69ED9564520F72D5B3188D3053D
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___858E7991DEE7525CF7CFCFAFDFC56FD6A023A69ED9564520F72D5B3188D3053D_236;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::86CF0DF831FB1324BD0429DE875AEE8B8CAB9B5196128B09C13C78E757A3F9CF
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___86CF0DF831FB1324BD0429DE875AEE8B8CAB9B5196128B09C13C78E757A3F9CF_237;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::870E1A1CCA1540913B709AA4783674D5E440E0CA4E05AF915FB90A9EBEE159C3
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___870E1A1CCA1540913B709AA4783674D5E440E0CA4E05AF915FB90A9EBEE159C3_238;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8728427AC2E609E58E24D84F1581F1C8BC53386AC64C85D23A1DCEEBC44560DC
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___8728427AC2E609E58E24D84F1581F1C8BC53386AC64C85D23A1DCEEBC44560DC_239;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::88BA10E90EFA4621FA25BC36C710D1658574C29C959990030A1727EC5358DD8E
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___88BA10E90EFA4621FA25BC36C710D1658574C29C959990030A1727EC5358DD8E_240;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::8914DCBE85C664DB76FAD57914C5FA3D44EB61413118B1B095148B1C23047D25
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8914DCBE85C664DB76FAD57914C5FA3D44EB61413118B1B095148B1C23047D25_241;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::892DE88D549D0D3CE77CE6B429A83073E507E61E990DD63F74264E8CF5D1612D
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___892DE88D549D0D3CE77CE6B429A83073E507E61E990DD63F74264E8CF5D1612D_242;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=132 <PrivateImplementationDetails>::8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC
	__StaticArrayInitTypeSizeU3D132_t17CA2427A8420E48002298798ADF94E69DA8DC9C ___8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_243;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8A1992FF7BE7D7A25FD976B3A876092F634B75B2F1A14F3DF22937712F2677F8
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___8A1992FF7BE7D7A25FD976B3A876092F634B75B2F1A14F3DF22937712F2677F8_244;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8B49C497C23B987F166BB1FE82C2D06413B7FBB66E7569B5A32494DFE29A9A02
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___8B49C497C23B987F166BB1FE82C2D06413B7FBB66E7569B5A32494DFE29A9A02_245;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::8CC11E14C2AF163BE625C6B583E8BF7A165EBEFB3D1644D7D296799B642610F6
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___8CC11E14C2AF163BE625C6B583E8BF7A165EBEFB3D1644D7D296799B642610F6_246;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::8D48571A73F0976ABEB07869D8733CF12C7D654F1405F32896DB7696ACC2C9B2
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8D48571A73F0976ABEB07869D8733CF12C7D654F1405F32896DB7696ACC2C9B2_247;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8E118657ECA03534C0496C6DD6E6F89813594CF00835AC3998384D6D2227574A
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___8E118657ECA03534C0496C6DD6E6F89813594CF00835AC3998384D6D2227574A_248;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::8ED03B7FA2243D579904305B548B8E88B29DB7E2FF47D8F657A797D4488958EB
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8ED03B7FA2243D579904305B548B8E88B29DB7E2FF47D8F657A797D4488958EB_249;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::8F95B01B770EC99709C821F2393DA10B10313ED37AE9B31E8D1EBCF23796232B
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___8F95B01B770EC99709C821F2393DA10B10313ED37AE9B31E8D1EBCF23796232B_250;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700_251;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9053C6EE1BA4FE5CEE59A5A7CC5AA00B07D2A49A10CB55ACE30DC02C51AAB4C1
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___9053C6EE1BA4FE5CEE59A5A7CC5AA00B07D2A49A10CB55ACE30DC02C51AAB4C1_252;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::9174B971D0D8B34ECB569D2CD19CF540783AD868EFCC3617D3457FE1363A064E
	__StaticArrayInitTypeSizeU3D256_tD597FA54545AF0CB15679AB3C10F2858019C8919 ___9174B971D0D8B34ECB569D2CD19CF540783AD868EFCC3617D3457FE1363A064E_253;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::92EA6942A51A0D5A69C8A0CA5F78BE7703A72A8DFAA8CF7ACAED65BF5304B032
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___92EA6942A51A0D5A69C8A0CA5F78BE7703A72A8DFAA8CF7ACAED65BF5304B032_254;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::941E37964F65B528719E7CFA0238A49E0F3BA86CF187C71927C13640856D8EC7
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___941E37964F65B528719E7CFA0238A49E0F3BA86CF187C71927C13640856D8EC7_255;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::9638834D1F629557D9B80FA7EEB64409E238C0EF2E3149A55A39C3796F66E19A
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9638834D1F629557D9B80FA7EEB64409E238C0EF2E3149A55A39C3796F66E19A_256;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::968ADBA3E2ECE472C636EFA80FBFD03AA2924C57FA4A71DDFDBFEB83B9287FED
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___968ADBA3E2ECE472C636EFA80FBFD03AA2924C57FA4A71DDFDBFEB83B9287FED_257;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::973678ECC720192FEE8B3CB7E6348E351A6520B5620D4DBFFD123DF9F4A822CF
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___973678ECC720192FEE8B3CB7E6348E351A6520B5620D4DBFFD123DF9F4A822CF_258;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::97A6B3C64392CF429855F27D9D5C55EBE4A173C832772C415A50E8EF27ECE351
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___97A6B3C64392CF429855F27D9D5C55EBE4A173C832772C415A50E8EF27ECE351_259;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::98E061174085DD0369B46477B0A3CE3DE9ED7A1D531D3101DB28DF308F050BA3
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___98E061174085DD0369B46477B0A3CE3DE9ED7A1D531D3101DB28DF308F050BA3_260;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::991F035EDCC9B77FD5E3C27DE5B12975B8AAB39E5439FD3FA3BB3FE9A336F6B8
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___991F035EDCC9B77FD5E3C27DE5B12975B8AAB39E5439FD3FA3BB3FE9A336F6B8_261;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::992544026A60CA20D417D5E77B10AE8FC892183DF6793F296DBA40F689076816
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___992544026A60CA20D417D5E77B10AE8FC892183DF6793F296DBA40F689076816_262;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9925F176AF8C92E389E6E75CE745A418ECB941709C07332D23E5EB9ABBB5291F
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___9925F176AF8C92E389E6E75CE745A418ECB941709C07332D23E5EB9ABBB5291F_263;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9939539B7D2265E62D73A20F44037369659C9583B1D928A74F2229F02E46013E
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___9939539B7D2265E62D73A20F44037369659C9583B1D928A74F2229F02E46013E_264;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::9A3288E7C15922FAD2897996070560AAD59F004E1507EAEC2B1B942CDFB584C6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9A3288E7C15922FAD2897996070560AAD59F004E1507EAEC2B1B942CDFB584C6_265;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::9A73C02D329D9E8F0AC3D817C986AC86E68D188FDC268B162F09D651FA7A423B
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___9A73C02D329D9E8F0AC3D817C986AC86E68D188FDC268B162F09D651FA7A423B_266;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::9B9D059B2D4058BF13D630725D29D4B3F6BD42B35826850288283DB18AC19FAB
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___9B9D059B2D4058BF13D630725D29D4B3F6BD42B35826850288283DB18AC19FAB_267;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::9BD6123DF2D6A8DDEC9AA06E102070BF1DA9DE4809978C625745D7C2DF5CCCAE
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9BD6123DF2D6A8DDEC9AA06E102070BF1DA9DE4809978C625745D7C2DF5CCCAE_268;
	// System.Int64 <PrivateImplementationDetails>::9C7FE09A60ABDE16D8C26D51026AC838249356A34E3139650AC306D10D63360E
	int64_t ___9C7FE09A60ABDE16D8C26D51026AC838249356A34E3139650AC306D10D63360E_269;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::9CAB136E66A010D8F93F2D20AC6EE292015B95226E34124B00E500F8C064CFA5
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9CAB136E66A010D8F93F2D20AC6EE292015B95226E34124B00E500F8C064CFA5_270;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::9CEF436DFAEC5D0FF26734AA2AE76EBFAC739240E0A4607387D14F8263B197FA
	__StaticArrayInitTypeSizeU3D112_t08E002F629547C1B13AC215259A3DE2782AD030D ___9CEF436DFAEC5D0FF26734AA2AE76EBFAC739240E0A4607387D14F8263B197FA_271;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::9E86EB930ECA317B383C2B5017E37E7CC6FB409FB834204D4018E8F375F9705D
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___9E86EB930ECA317B383C2B5017E37E7CC6FB409FB834204D4018E8F375F9705D_272;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::9EDC508BAD545AA9EEFBF2E03886D1110E9B823F0A79A8CD3E270AB8D5E9E647
	__StaticArrayInitTypeSizeU3D36_tD0A59E81D3E66EAA0DEFA5F2717B8BBF2D14E549 ___9EDC508BAD545AA9EEFBF2E03886D1110E9B823F0A79A8CD3E270AB8D5E9E647_273;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9F1134ABC0AA5A88AEE4AA4E02E3EA79E178DB4ED9C0B3533D28DC6CE3EE0D87
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___9F1134ABC0AA5A88AEE4AA4E02E3EA79E178DB4ED9C0B3533D28DC6CE3EE0D87_274;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9F35DF4FD6A5C75EC8D76DA2D9B0F4154E2950B3359F9564CFEAB70DE8A637BF
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___9F35DF4FD6A5C75EC8D76DA2D9B0F4154E2950B3359F9564CFEAB70DE8A637BF_275;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9F95BE23B2795CB3E32C1CC97154AB9E86EDF3A5AE9674F8A1F3C88D2096FAC3
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___9F95BE23B2795CB3E32C1CC97154AB9E86EDF3A5AE9674F8A1F3C88D2096FAC3_276;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::A0241A6EC484A8C85C2B2E0E1240E8132BE93CC6A126E4F2DE5FF06D4796209E
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___A0241A6EC484A8C85C2B2E0E1240E8132BE93CC6A126E4F2DE5FF06D4796209E_277;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::A0E9EC9F05F3226BB12272E84A311ECE3EFD8C1D2F05D3C8ED4633ACC3BE12A8
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A0E9EC9F05F3226BB12272E84A311ECE3EFD8C1D2F05D3C8ED4633ACC3BE12A8_278;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::A1D0A8BD8B25A6D3FA0716D2FD850CB7ECAD8987B70DA9820C4914041D8DCC29
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___A1D0A8BD8B25A6D3FA0716D2FD850CB7ECAD8987B70DA9820C4914041D8DCC29_279;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::A27ADE353E6FFD0D1CBEF68ED136F69430DF6F353D141C8478DA43BC88C14255
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A27ADE353E6FFD0D1CBEF68ED136F69430DF6F353D141C8478DA43BC88C14255_280;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::A40E136CBB0ED5DE2266982B66DD4CB738B3500C6C9EF2896E6BA0448B6917C9
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___A40E136CBB0ED5DE2266982B66DD4CB738B3500C6C9EF2896E6BA0448B6917C9_281;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::A4DAF1972AE41230119FB2BF4D7F392CB5D9E0C90271F0C6EC1299800EF182F1
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___A4DAF1972AE41230119FB2BF4D7F392CB5D9E0C90271F0C6EC1299800EF182F1_282;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::A5C9909CB0CD1030CB389F4A504B5B88B4328CAC093EAD285EBBAEB027EA3309
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___A5C9909CB0CD1030CB389F4A504B5B88B4328CAC093EAD285EBBAEB027EA3309_283;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::A5FF20B6647CF687A002662C48875C654228DDF753EB1A4381BF7A628B42EF69
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A5FF20B6647CF687A002662C48875C654228DDF753EB1A4381BF7A628B42EF69_284;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A675196C67C8F3F0B7B2868FBEEBAE7881746376063EB86967185B0F9FCD5381
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___A675196C67C8F3F0B7B2868FBEEBAE7881746376063EB86967185B0F9FCD5381_285;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A6A5A205BE67F420BD02E97F4D2BA0E900A3C51A28202C583CD40FD8F1E618B8
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___A6A5A205BE67F420BD02E97F4D2BA0E900A3C51A28202C583CD40FD8F1E618B8_286;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::A70CA7E552008F98C0671CC2D24418B2FC74D2DC2CFBBDB9CC2540ED28193EF6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A70CA7E552008F98C0671CC2D24418B2FC74D2DC2CFBBDB9CC2540ED28193EF6_287;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::A76A68190FFE19EB6D3559CC880038EBA8A75223B3F02FECF74ED33A2E5CA6AE
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A76A68190FFE19EB6D3559CC880038EBA8A75223B3F02FECF74ED33A2E5CA6AE_288;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::A7CA3A34A7A5B72DE31AD5B26342092F03732E3B50C650BA42FC41064B21802D
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___A7CA3A34A7A5B72DE31AD5B26342092F03732E3B50C650BA42FC41064B21802D_289;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::A7E864C294E56992D029558C6558C7A6A685CCBAE308A471EBBA29C7D3D461B0
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___A7E864C294E56992D029558C6558C7A6A685CCBAE308A471EBBA29C7D3D461B0_290;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::A8C3A1EECF88D0D654D8DDA84C4EF2873C1BCE7CA570B1B62B756E03A3A6A985
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___A8C3A1EECF88D0D654D8DDA84C4EF2873C1BCE7CA570B1B62B756E03A3A6A985_291;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=168 <PrivateImplementationDetails>::AA75373A0609E9AD0D3F416A48CE4BB81EC06A3171698F7D131B1E5B6BCB2912
	__StaticArrayInitTypeSizeU3D168_t8E80F36BC1B7BE7B01D5651DE7C69C38C8CA6DCB ___AA75373A0609E9AD0D3F416A48CE4BB81EC06A3171698F7D131B1E5B6BCB2912_292;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::AD0CF721AFA5964008CADE69C7C70DCDC667E9BB28759A953013A371AD811665
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___AD0CF721AFA5964008CADE69C7C70DCDC667E9BB28759A953013A371AD811665_293;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::AD15284DD337FFA32661178D3C6F80F692595D3257A9495D155C99B50FC8ECB2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___AD15284DD337FFA32661178D3C6F80F692595D3257A9495D155C99B50FC8ECB2_294;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::AD21EC3956C2E559DB1A9C8F3B27A76DC1C70758A124D994376E1B0A31A184D2
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___AD21EC3956C2E559DB1A9C8F3B27A76DC1C70758A124D994376E1B0A31A184D2_295;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::AE2F60AE81DCC052A7540D7806FA343591D115242E7EFB824982CCCAE284157F
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___AE2F60AE81DCC052A7540D7806FA343591D115242E7EFB824982CCCAE284157F_296;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::AF011DE7B2D9B312193BA7E541A9990C19B209BD9336B2BC9C53987D2CC3B2F5
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___AF011DE7B2D9B312193BA7E541A9990C19B209BD9336B2BC9C53987D2CC3B2F5_297;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B04739121B6AB0E4911BBE21B6DD9F0572EE0B5F08EF57E898AA8320F2A0F377
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___B04739121B6AB0E4911BBE21B6DD9F0572EE0B5F08EF57E898AA8320F2A0F377_298;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::B07453F8F8AAFA940E2C6A8B6165F3650C6C877D812604196E8D86273B729619
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___B07453F8F8AAFA940E2C6A8B6165F3650C6C877D812604196E8D86273B729619_299;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::B08B8258982F0B04483D36814D79E9CED6EAE9AA9EE627FFE9988EDF24E0518D
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___B08B8258982F0B04483D36814D79E9CED6EAE9AA9EE627FFE9988EDF24E0518D_300;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::B2954FFD2DDEC335D6190CB5CFBCB66E602EC593EEDB74C0545639A93C368F7B
	__StaticArrayInitTypeSizeU3D1024_t6EC6A3E7E7DB0A7072248FCD7228161BB33DB0D5 ___B2954FFD2DDEC335D6190CB5CFBCB66E602EC593EEDB74C0545639A93C368F7B_301;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B3E9E7062C9641F142F31775269CC963115C0AEB17D83EDD7E98E26C2EAAA5AD
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___B3E9E7062C9641F142F31775269CC963115C0AEB17D83EDD7E98E26C2EAAA5AD_302;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::B3FB30E6CE096761CC4E57F2733960D987A26D0134E856BB7FDC5D0745F0EA16
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B3FB30E6CE096761CC4E57F2733960D987A26D0134E856BB7FDC5D0745F0EA16_303;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::B4181D82DAC1FFDE3CFFCA6639D56290F4DC5B23D15C24C9522FC131DB8911B6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B4181D82DAC1FFDE3CFFCA6639D56290F4DC5B23D15C24C9522FC131DB8911B6_304;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B48F50B40234EE3E34270EDC4A811DC3C3063ADF681578D4FCC4E4F57FD402F8
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___B48F50B40234EE3E34270EDC4A811DC3C3063ADF681578D4FCC4E4F57FD402F8_305;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::B4E0F4B6127C4BE48F24A33634A3D7D375E4EC22E6AF7493F1EF2E2F40710F63
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___B4E0F4B6127C4BE48F24A33634A3D7D375E4EC22E6AF7493F1EF2E2F40710F63_306;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::B507BA66C95A60706EC089F80F46572640788389E51DEB981DB759D0716082ED
	__StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331 ___B507BA66C95A60706EC089F80F46572640788389E51DEB981DB759D0716082ED_307;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B5C581E896007ECE4F2F517C390DB9F3847E64B65F69571B08FB9857FC220104
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___B5C581E896007ECE4F2F517C390DB9F3847E64B65F69571B08FB9857FC220104_308;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30 <PrivateImplementationDetails>::B65996EF162F905BBE56993DD85D591048C0855FC3DCBEBD8DDE79268379DFDF
	__StaticArrayInitTypeSizeU3D30_t3EA034A6F637FDA88A9044A38BA22934CD5DE0DE ___B65996EF162F905BBE56993DD85D591048C0855FC3DCBEBD8DDE79268379DFDF_309;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::B6B4E363E4A386012A49F11497D4A553EF87735AFA9DA242BC36D37A6BDBCA6B
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B6B4E363E4A386012A49F11497D4A553EF87735AFA9DA242BC36D37A6BDBCA6B_310;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::B737652425D7BB826CA8363DA5748CDAA2A62E143C7D827C2E4797DF13B5C3E0
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B737652425D7BB826CA8363DA5748CDAA2A62E143C7D827C2E4797DF13B5C3E0_311;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::B84DF409355E849ECDDA893E2C57705C1FFE1B8B5386B1F29F1F54F16E0A5FF8
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___B84DF409355E849ECDDA893E2C57705C1FFE1B8B5386B1F29F1F54F16E0A5FF8_312;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B858762AC0E821FE317ABFE5B4D5FE4E8BDC8724A5867C1A5022A3C2AA934BDF
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___B858762AC0E821FE317ABFE5B4D5FE4E8BDC8724A5867C1A5022A3C2AA934BDF_313;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::B8F82C601B16E9D90512C383806249EFEB720506EA0A14DC3204A9E66FED2D8C
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___B8F82C601B16E9D90512C383806249EFEB720506EA0A14DC3204A9E66FED2D8C_314;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B9DEDACEA8A8027DA835F48280C2306804CB0975F426C39E922650D1F6CE92DC
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___B9DEDACEA8A8027DA835F48280C2306804CB0975F426C39E922650D1F6CE92DC_315;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::BA7907623B7B7D0577BFC2F94C91F2879D650B83DD8E39A8FC4D5B4337BCB09C
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___BA7907623B7B7D0577BFC2F94C91F2879D650B83DD8E39A8FC4D5B4337BCB09C_316;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::BADCCB26B3DDE3E09938F26E859A035FD564824881248FD50A914D04B3D59DD1
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___BADCCB26B3DDE3E09938F26E859A035FD564824881248FD50A914D04B3D59DD1_317;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BAE7577F4468E897CC8C308F10CB40E8AEF92CBF75AD6F6DD774DBBC2F1AE655
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___BAE7577F4468E897CC8C308F10CB40E8AEF92CBF75AD6F6DD774DBBC2F1AE655_318;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::BAEF3D21CCA3501CA0930391C229D888D7A1481EDA3B2E7CAC0521FFB0D31C66
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___BAEF3D21CCA3501CA0930391C229D888D7A1481EDA3B2E7CAC0521FFB0D31C66_319;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BCA60071BC8236861037DB9B18BC84E80E50DDCCE148DBD3A3BDF66618F6F915
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___BCA60071BC8236861037DB9B18BC84E80E50DDCCE148DBD3A3BDF66618F6F915_320;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::BD5D6B9728DF12362F896749937287D68BB6409DBDDFABD7B68623C4E39F0CD2
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___BD5D6B9728DF12362F896749937287D68BB6409DBDDFABD7B68623C4E39F0CD2_321;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BDF5C5CACF2F7267BC69169665D69CFBAB6B0DFD73B98FA4386F878E188522D1
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___BDF5C5CACF2F7267BC69169665D69CFBAB6B0DFD73B98FA4386F878E188522D1_322;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::C19C60191EB3B9603C3D7045EEC943E3D9E7776A87CCD82B44BBBF08357B31E6
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___C19C60191EB3B9603C3D7045EEC943E3D9E7776A87CCD82B44BBBF08357B31E6_323;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C2A5DAC5C8C5553A8275C880987450886DF24E677D38257FBD23FD4A1B30F08D
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C2A5DAC5C8C5553A8275C880987450886DF24E677D38257FBD23FD4A1B30F08D_324;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C30498C67D69A4F46123429F014B2A05EF7DA1683E4FCD249BDEA7FF9B51A869
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___C30498C67D69A4F46123429F014B2A05EF7DA1683E4FCD249BDEA7FF9B51A869_325;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::C4909DCCF3D7C100F34206B39B6010C7A91DEA72D6AAE0705104AA1239272460
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___C4909DCCF3D7C100F34206B39B6010C7A91DEA72D6AAE0705104AA1239272460_326;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C4BDA8D1A189704101D7C0F3FFA9C49619948C46898B814F643C8B5A35AA47CC
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___C4BDA8D1A189704101D7C0F3FFA9C49619948C46898B814F643C8B5A35AA47CC_327;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C60B8B2173CA19D54F1981AD9BBF9A432732580774471068E1BD5210AF9E272B
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C60B8B2173CA19D54F1981AD9BBF9A432732580774471068E1BD5210AF9E272B_328;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C7258DC7B8BB950E4F6426BD5CF2530E0C5F37BA06914B36894D8B9DEBDD45CF
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C7258DC7B8BB950E4F6426BD5CF2530E0C5F37BA06914B36894D8B9DEBDD45CF_329;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::C738CE6D29606328EA27ABEB83C9A91DEC90E1A7C4B5CC08356C14A2434EA694
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___C738CE6D29606328EA27ABEB83C9A91DEC90E1A7C4B5CC08356C14A2434EA694_330;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C7A5958727276CDEE4286492253978D00E716955FD04834EA62DFEB962A95291
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C7A5958727276CDEE4286492253978D00E716955FD04834EA62DFEB962A95291_331;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::C7D12A90C94D52A40E5239FA8BD51C1C7D033B17222A15FD2E50F7CC45C5C18A
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___C7D12A90C94D52A40E5239FA8BD51C1C7D033B17222A15FD2E50F7CC45C5C18A_332;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::C7E368D1295B382E7637268C99F9F18D4A7864166F631AE31DEEDEDECDC70653
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___C7E368D1295B382E7637268C99F9F18D4A7864166F631AE31DEEDEDECDC70653_333;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::C8631CE9D04A94EB20C3A753884AD774A70D740CC5434F9749CA5D7E8A4702A9
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___C8631CE9D04A94EB20C3A753884AD774A70D740CC5434F9749CA5D7E8A4702A9_334;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033_335;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C8E24BDFAF525FD736DFB45E23240F23B7ED7F09A96BF28CAED0CF94F51BA468
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___C8E24BDFAF525FD736DFB45E23240F23B7ED7F09A96BF28CAED0CF94F51BA468_336;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C8F88D6E82AA05B0F32EEEA351167F0EAEA23981C1E1F80305F3D75EB4C339DF
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___C8F88D6E82AA05B0F32EEEA351167F0EAEA23981C1E1F80305F3D75EB4C339DF_337;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::C9E1CFD4A0D59131F8AC7D3DA5911AF13135548E2C92FC062AFDDA77FA8994FC
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___C9E1CFD4A0D59131F8AC7D3DA5911AF13135548E2C92FC062AFDDA77FA8994FC_338;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2574 <PrivateImplementationDetails>::C9F8AAA45DBC75D815807C58A934D50E56FEB7947355E48F977431ED92249D64
	__StaticArrayInitTypeSizeU3D2574_tB3189D28577694B158C7062CAE14923548B1B29B ___C9F8AAA45DBC75D815807C58A934D50E56FEB7947355E48F977431ED92249D64_339;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CA7CF7FA6ED304E35369A8E06948BD82528C9AC1F74CF71207DD723ECD416160
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___CA7CF7FA6ED304E35369A8E06948BD82528C9AC1F74CF71207DD723ECD416160_340;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::CBB4999C365FA0ABE5E75FA63E432602C40CD00CB6A10792AF8496C09576AE4D
	__StaticArrayInitTypeSizeU3D6_tA42D55DB7F0B302C8C27220E4859C80EAA92B9C2 ___CBB4999C365FA0ABE5E75FA63E432602C40CD00CB6A10792AF8496C09576AE4D_341;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::CBE5AF6AC24E31D566328745DEBCD411DC1E0FE827EAEFA2901D966C02E8A2BA
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___CBE5AF6AC24E31D566328745DEBCD411DC1E0FE827EAEFA2901D966C02E8A2BA_342;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CC0CEFD9E9B2AA59018C4A2CF62D831AD45D404EA5B75E5F53A073CFB92C0F7C
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___CC0CEFD9E9B2AA59018C4A2CF62D831AD45D404EA5B75E5F53A073CFB92C0F7C_343;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CC216089DA4A5F29CEE27180664BD91B6C87991677EF06F97D8103937BB2F47E
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___CC216089DA4A5F29CEE27180664BD91B6C87991677EF06F97D8103937BB2F47E_344;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140
	__StaticArrayInitTypeSizeU3D124_tF2056A147B3FEE8FC6D079B531D5E005E0BF000B ___CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_345;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CC9ADB462C05913E6352A852E49FC045370634571080CA1ECF95841B06E63021
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___CC9ADB462C05913E6352A852E49FC045370634571080CA1ECF95841B06E63021_346;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::CDC467024FA6B34C7E9CA501AD1A30225036CC96F6992AA0506C39C17B7F0A43
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___CDC467024FA6B34C7E9CA501AD1A30225036CC96F6992AA0506C39C17B7F0A43_347;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CF922F404DB827EA91F8C423C0621C677B464641FE0B6C6A7AEEB755FA19758B
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___CF922F404DB827EA91F8C423C0621C677B464641FE0B6C6A7AEEB755FA19758B_348;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CFCCE641455683949ABEF89889F39B5D4C21229C1C7FB15E1EB59BB0166BA855
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___CFCCE641455683949ABEF89889F39B5D4C21229C1C7FB15E1EB59BB0166BA855_349;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::D00A28AC5285007D566C113AA8E3F52E314F13DCC0F6A6BE6441461F7AB39F0D
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___D00A28AC5285007D566C113AA8E3F52E314F13DCC0F6A6BE6441461F7AB39F0D_350;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D00D91AF4D0715FA4CD9DE25815E484FE263BF975E96FD4F27CC3B1EC3CF4B8F
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___D00D91AF4D0715FA4CD9DE25815E484FE263BF975E96FD4F27CC3B1EC3CF4B8F_351;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D028BC86965900EA524F37873E408FFED261A6D493C2E16F53CA9D9B7EA9106B
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D028BC86965900EA524F37873E408FFED261A6D493C2E16F53CA9D9B7EA9106B_352;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D04468D46671F8BB09408F2DC16A4A4C0F9562BEEBF8835D408317ADCF3A7528
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___D04468D46671F8BB09408F2DC16A4A4C0F9562BEEBF8835D408317ADCF3A7528_353;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::D31860D2AAC8572719923B2CDF9405F28404159067F7E6D326F13FBECCCD6F1B
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D31860D2AAC8572719923B2CDF9405F28404159067F7E6D326F13FBECCCD6F1B_354;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D36081EEA47A16BEB470962DA026BC43E7F2C8F877D1D7DE9F012090EBAD2E8E
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___D36081EEA47A16BEB470962DA026BC43E7F2C8F877D1D7DE9F012090EBAD2E8E_355;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D3626DAA08967C0BB98D7DA1C6CA404EC8F747199195DDBD0EBFF1AC09B3DBE2
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D3626DAA08967C0BB98D7DA1C6CA404EC8F747199195DDBD0EBFF1AC09B3DBE2_356;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D3C1F935901A3BA8AFC8EB475DE9FC61D4DEC55251E6B385760D1D705D7C172F
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D3C1F935901A3BA8AFC8EB475DE9FC61D4DEC55251E6B385760D1D705D7C172F_357;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172 <PrivateImplementationDetails>::D4E32EE12FA99FD74B5A6D561026D709AA3F6121B3F0BE0089E1A126032EE430
	__StaticArrayInitTypeSizeU3D172_t6232E17501516CEC94D373BE7830856ADC7BBBE3 ___D4E32EE12FA99FD74B5A6D561026D709AA3F6121B3F0BE0089E1A126032EE430_358;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D5C5159832DE340CACF18939A1F8BCB4B919226576A4A5B397827CC59717DB8B
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D5C5159832DE340CACF18939A1F8BCB4B919226576A4A5B397827CC59717DB8B_359;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D607394C3FB9CF576A4321D4EFB9C4F4531EFD539CFCCBEB9C2ACE986CDA0F4F
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D607394C3FB9CF576A4321D4EFB9C4F4531EFD539CFCCBEB9C2ACE986CDA0F4F_360;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::D66912A3DEFDE847CE0A094C2C665979574EF1CB3F2A708E08BC9D364DE61BE8
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D66912A3DEFDE847CE0A094C2C665979574EF1CB3F2A708E08BC9D364DE61BE8_361;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::D7E91A101F74AA998AB891860D33BF3D41616076011A9C0FA9272E4A0EEBB0CA
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D7E91A101F74AA998AB891860D33BF3D41616076011A9C0FA9272E4A0EEBB0CA_362;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D83EA65830337CF1E9B54F5BB2E519ADAF4468E1955A9424A92B6F88F5AEC7BF
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D83EA65830337CF1E9B54F5BB2E519ADAF4468E1955A9424A92B6F88F5AEC7BF_363;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::D886B98E4F5ADFB2F1A5723F2E14DD4D01D04A2E36FA62749034A4FBCA662CD0
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___D886B98E4F5ADFB2F1A5723F2E14DD4D01D04A2E36FA62749034A4FBCA662CD0_364;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::D8C1259490BED6A503CB038B8335940093EC88F912BD3E5A02600C43C011740A
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___D8C1259490BED6A503CB038B8335940093EC88F912BD3E5A02600C43C011740A_365;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D99B48D838464100EAC00292244245885B37909438B9B4AD22C06F18E9F4A888
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___D99B48D838464100EAC00292244245885B37909438B9B4AD22C06F18E9F4A888_366;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::D9A7E16619B0E4535F822EAA39A5F9AC239D36012705F0F83CD0C09B2B987F24
	__StaticArrayInitTypeSizeU3D56_t66702F042D53810B18AD6DD1A9A0C566EB2EE696 ___D9A7E16619B0E4535F822EAA39A5F9AC239D36012705F0F83CD0C09B2B987F24_367;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::DA3E1F9CEF73071793FCA1A5C3FE2B750F875615F7890BB676A908B8E8FFF853
	__StaticArrayInitTypeSizeU3D10_t3A80AC478454019A748956229C2284D48202BABF ___DA3E1F9CEF73071793FCA1A5C3FE2B750F875615F7890BB676A908B8E8FFF853_368;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::DAA961C1C1D1AA3CBC2455ED421C8868E2EF5DBAB325F2BC403F6F2DB66C398C
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___DAA961C1C1D1AA3CBC2455ED421C8868E2EF5DBAB325F2BC403F6F2DB66C398C_369;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::DBC2134BF2E99C031606EAF07E57D04C6E19A1515B0DAEB497C32101D7080AA5
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___DBC2134BF2E99C031606EAF07E57D04C6E19A1515B0DAEB497C32101D7080AA5_370;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::DD531B41B38534C045D3405CDFB24986F8707992BD6BEC210174A8826C348231
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___DD531B41B38534C045D3405CDFB24986F8707992BD6BEC210174A8826C348231_371;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::DDAD1F1767B72E04B9420DEA0EF16AE383925385908E56C69BCEB06E8635D7B0
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___DDAD1F1767B72E04B9420DEA0EF16AE383925385908E56C69BCEB06E8635D7B0_372;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=248 <PrivateImplementationDetails>::DE64651006CFFFAC311C4370FD15C4D6EB76ACEBEA906C43C3997BFA28EB52B3
	__StaticArrayInitTypeSizeU3D248_t285FA6A194E9054B5B7F2B34D8F1125D3AE13F12 ___DE64651006CFFFAC311C4370FD15C4D6EB76ACEBEA906C43C3997BFA28EB52B3_373;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::DF25E2B8991E258E2716505524C09F19368125912A47F4936D0225D417D705DE
	__StaticArrayInitTypeSizeU3D44_t77759323ECAE5CC41EE3A7CC9D0E80B216875331 ___DF25E2B8991E258E2716505524C09F19368125912A47F4936D0225D417D705DE_374;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::DFB2E525833EF871960BD2D70DFFFBA4945898C2BFFDCE8C2757DECD84BB6C03
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___DFB2E525833EF871960BD2D70DFFFBA4945898C2BFFDCE8C2757DECD84BB6C03_375;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E01AA2133C0C420D16B81E39FCF4F90012ABCB742AD0E97354B0CC478951B396
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E01AA2133C0C420D16B81E39FCF4F90012ABCB742AD0E97354B0CC478951B396_376;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::E0653D05CAD1F0DAF3713147FA239CBF43A4BD648420176043D81CB757AB3B85
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___E0653D05CAD1F0DAF3713147FA239CBF43A4BD648420176043D81CB757AB3B85_377;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E0D8A42856EEF19927055C9DA5BF93CC3462BD15BAA5344E425784071C4A624E
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E0D8A42856EEF19927055C9DA5BF93CC3462BD15BAA5344E425784071C4A624E_378;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E132B2FF4D61C28380E68729D93CD753F51EC02FB3713E0CCD2D30D1A67C798D
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E132B2FF4D61C28380E68729D93CD753F51EC02FB3713E0CCD2D30D1A67C798D_379;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E1D901CCDF12B1DF0D7A4FA7AD82911B2B146D844AF4C3FC07CE5847E8AFBBDC
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___E1D901CCDF12B1DF0D7A4FA7AD82911B2B146D844AF4C3FC07CE5847E8AFBBDC_380;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::E23B166C4896519A59519AF204DD9025F07F20EB0E7F68F139E455669155303D
	__StaticArrayInitTypeSizeU3D128_t68BAA10EC835232A7650BF2054DB502B0ECFFFCD ___E23B166C4896519A59519AF204DD9025F07F20EB0E7F68F139E455669155303D_381;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::E300F02750E3D7D01E3F4641FE37B90D20E5102C717E1F8946E4600727E517C6
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___E300F02750E3D7D01E3F4641FE37B90D20E5102C717E1F8946E4600727E517C6_382;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E372C8A58D0F580D5F63C47000D08E7A144D38B1527D24B19B7DA15DAF4D913C
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E372C8A58D0F580D5F63C47000D08E7A144D38B1527D24B19B7DA15DAF4D913C_383;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E44DA7A1A8B6B6593EE50FBFAD6DCA4E6A2C1A7D87FA62CCD77FF0E7DC4532CC
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E44DA7A1A8B6B6593EE50FBFAD6DCA4E6A2C1A7D87FA62CCD77FF0E7DC4532CC_384;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E4AC02EB8FFE5ADB3F4DBD1CF4E351F0699C3EB19D1FD48FF297B62688774D32
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E4AC02EB8FFE5ADB3F4DBD1CF4E351F0699C3EB19D1FD48FF297B62688774D32_385;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E5136409EBFF600915DA0604934267F437779EEE9A9AF6B4D0001B6B7160DAB0
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___E5136409EBFF600915DA0604934267F437779EEE9A9AF6B4D0001B6B7160DAB0_386;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::E5138C133342AE7ABCEE10CA327CE3768D65AA469C407D468D01F6A146E644D5
	__StaticArrayInitTypeSizeU3D2048_tE25931E1FFD4C943523B4FB281CBCB2EEBE2779C ___E5138C133342AE7ABCEE10CA327CE3768D65AA469C407D468D01F6A146E644D5_387;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11148 <PrivateImplementationDetails>::E6158B3DB5ECF885C21279F9A4ECC65456BE79D326F38443499A3C1C808ABB7F
	__StaticArrayInitTypeSizeU3D11148_t06B1CCC26155D364A3BFD9E3AFE4BA730F14BF39 ___E6158B3DB5ECF885C21279F9A4ECC65456BE79D326F38443499A3C1C808ABB7F_388;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E78BBF6E2001D9293C521DC5CC81D45587C9BC129C2A020CF8B9C62A90B3C38C
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E78BBF6E2001D9293C521DC5CC81D45587C9BC129C2A020CF8B9C62A90B3C38C_389;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E7DDCEFF47FEB3B9E49C207D4AB1E960F393B75FF2FE51441E6BA56880DBAE65
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___E7DDCEFF47FEB3B9E49C207D4AB1E960F393B75FF2FE51441E6BA56880DBAE65_390;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E8C65E4BD080058C3D32617A1DD410386970CD471821AE1EFB9BEB5AE82A3EDC
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___E8C65E4BD080058C3D32617A1DD410386970CD471821AE1EFB9BEB5AE82A3EDC_391;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E8C83B5B87239548D39723CD1DB34E4EA679F1FC01E4ABC7DBBD865E19A3F470
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___E8C83B5B87239548D39723CD1DB34E4EA679F1FC01E4ABC7DBBD865E19A3F470_392;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::E996F539ED1C91B7C8CF4051B9441635B9601656501661D84941C15A1169B7C1
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___E996F539ED1C91B7C8CF4051B9441635B9601656501661D84941C15A1169B7C1_393;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EAD673C0741C8D152B725DFDE4754C5099BB1584865A42B8DE3DBEE1FBBB2D89
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___EAD673C0741C8D152B725DFDE4754C5099BB1584865A42B8DE3DBEE1FBBB2D89_394;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::EBA6656A254CBA2E98364ED3AD3C577828CB73B2F40E80329519A11D37E7922B
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___EBA6656A254CBA2E98364ED3AD3C577828CB73B2F40E80329519A11D37E7922B_395;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::EC3CAB4F9004BB9DC57CC5A27BB6B096B3A434A2B359AAB26F9F5BE703904466
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___EC3CAB4F9004BB9DC57CC5A27BB6B096B3A434A2B359AAB26F9F5BE703904466_396;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::EC44F3AFBF5578C70F8EA0B3CDD13B8CD9BE56FD07511987C10DE985AB7C77F2
	__StaticArrayInitTypeSizeU3D26_t09B4F52EEDCFB03A4ED16ED5210E8FDDF43835DA ___EC44F3AFBF5578C70F8EA0B3CDD13B8CD9BE56FD07511987C10DE985AB7C77F2_397;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::EC9C6EF0275BDFAB1A7050B556C0CC6A44DBA4F8F9B57BA3C5EAF75FF9B24DA2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___EC9C6EF0275BDFAB1A7050B556C0CC6A44DBA4F8F9B57BA3C5EAF75FF9B24DA2_398;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::ED2B39AC00852C1ED845A17AB05473D2E4BCF8EF7A04F76777675E856A559B60
	__StaticArrayInitTypeSizeU3D9_tA9EA4D9A3345D9A71FF7DC176D791EC5F1C3740E ___ED2B39AC00852C1ED845A17AB05473D2E4BCF8EF7A04F76777675E856A559B60_399;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::ED7E370DFD0BF976F8669790B470A09CF0FF309DC9B1E2B3186CE4F0F9FA7D5A
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___ED7E370DFD0BF976F8669790B470A09CF0FF309DC9B1E2B3186CE4F0F9FA7D5A_400;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::EE1614CFCB93EA38F3C262F47F0A403BDF5F1133150072C1928C5F0E6DF646E4
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___EE1614CFCB93EA38F3C262F47F0A403BDF5F1133150072C1928C5F0E6DF646E4_401;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::EF201E7067F97E67468C3F485A180A0EF3572D9AFF24671EFDEB9A08644A3177
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___EF201E7067F97E67468C3F485A180A0EF3572D9AFF24671EFDEB9A08644A3177_402;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::EF63E97002775A666DB9DBC340F0BA4CBFDE3967E7B9748A008B69F0AFFE8BE4
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___EF63E97002775A666DB9DBC340F0BA4CBFDE3967E7B9748A008B69F0AFFE8BE4_403;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::F0322FA35D36E5CA22C27848E69224DB4F774AF2F258B4E05CD36A18CCE1E55B
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F0322FA35D36E5CA22C27848E69224DB4F774AF2F258B4E05CD36A18CCE1E55B_404;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F0389978E6D16536767C3E8C4B08F2AC5C800798C828BBF4F1D721D7DDFA8775
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___F0389978E6D16536767C3E8C4B08F2AC5C800798C828BBF4F1D721D7DDFA8775_405;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::F0B77F223AF396342A941058490B4217A319F40FFFADA0CB74A70338A10A751D
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___F0B77F223AF396342A941058490B4217A319F40FFFADA0CB74A70338A10A751D_406;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::F0D2E24777179E1D479F7183A3E4544F9C3CCCE4CBF993BC7EC1AF55B687156F
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F0D2E24777179E1D479F7183A3E4544F9C3CCCE4CBF993BC7EC1AF55B687156F_407;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F10EB800F205B09A732C0E1EB94A9D53194237405ABA783F698D7D11C18CFB89
	__StaticArrayInitTypeSizeU3D16_tC4B0E5F1DEA8E1A7F1224D3265C1E9320EC61F80 ___F10EB800F205B09A732C0E1EB94A9D53194237405ABA783F698D7D11C18CFB89_408;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F1B64B21C00EB0FD1DF2FAB433EF6C0D8C79B51F83840B7B8CA14C63369F6616
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___F1B64B21C00EB0FD1DF2FAB433EF6C0D8C79B51F83840B7B8CA14C63369F6616_409;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::F4543B9A7A6A578164DE4769CFE967EC6D9EA12B5D90076E36DB4DD71DE88938
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___F4543B9A7A6A578164DE4769CFE967EC6D9EA12B5D90076E36DB4DD71DE88938_410;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::F4605E50276D9BDC4D9496DC8DC35AF8084E8CD3A69D550B706B6E8B4DA0B0A3
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F4605E50276D9BDC4D9496DC8DC35AF8084E8CD3A69D550B706B6E8B4DA0B0A3_411;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::F500D20090AD6E636B0D0E537458FD41B869C7A7AF499F743A95118464B9C9B7
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___F500D20090AD6E636B0D0E537458FD41B869C7A7AF499F743A95118464B9C9B7_412;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::F5BC6E1EE55ADFAAE875C15542C9BEE5FBA074B29E56A0D5016AC70D04BD53D7
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___F5BC6E1EE55ADFAAE875C15542C9BEE5FBA074B29E56A0D5016AC70D04BD53D7_413;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::F5DCC62363F3F4B53CFED2264390F57D2115F5BED397414B73A48893BF2033D2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___F5DCC62363F3F4B53CFED2264390F57D2115F5BED397414B73A48893BF2033D2_414;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3716 <PrivateImplementationDetails>::F6146FBD47A9D255913B392A5A265681489D9E0F6544DEE7AD6714120705CAD7
	__StaticArrayInitTypeSizeU3D3716_tE272F754833B2DA81A2BAF5EDD2CB30C63CD089E ___F6146FBD47A9D255913B392A5A265681489D9E0F6544DEE7AD6714120705CAD7_415;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::F6163685634824034CBB1450836111E3FC38C54FC623E60878EC7F9352F32B72
	__StaticArrayInitTypeSizeU3D20_t56897D8757015EC507F73C487FB3C72D7AA1BD22 ___F6163685634824034CBB1450836111E3FC38C54FC623E60878EC7F9352F32B72_416;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::F6FA3D57BC1703BDFF2CD1D7A4D2347C659064FD80F9319974F58D2437C8FDDD
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___F6FA3D57BC1703BDFF2CD1D7A4D2347C659064FD80F9319974F58D2437C8FDDD_417;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::F92FF6B3C8A668F4EE5A00A9C9728E432B407910BDB5C8518F092785F964C1DB
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___F92FF6B3C8A668F4EE5A00A9C9728E432B407910BDB5C8518F092785F964C1DB_418;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::F93FB973C99E7583EB3A16A636DA67B7ADE950FA21624F7EBB766DC9E2062CB1
	__StaticArrayInitTypeSizeU3D64_tB36AA7DEECCDE509AD8E129D91B108BEBB2938D9 ___F93FB973C99E7583EB3A16A636DA67B7ADE950FA21624F7EBB766DC9E2062CB1_419;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::F989FC1A32987AA0550D1B9B512571F86F33CDDD0D4932A8C5E2921851D35A20
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___F989FC1A32987AA0550D1B9B512571F86F33CDDD0D4932A8C5E2921851D35A20_420;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::FA679997A61BF1A27D5B90BD1C746443BFA7979761F27D63F49058FE27938F2A
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___FA679997A61BF1A27D5B90BD1C746443BFA7979761F27D63F49058FE27938F2A_421;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::FA6A147DB836123BA519E5C5A8A1AD2C85A252878EE51EA2529B00F1231E4A04
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___FA6A147DB836123BA519E5C5A8A1AD2C85A252878EE51EA2529B00F1231E4A04_422;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FB0A68F50C83F6DAF95A2B4C97639231BC3B9250C09BD0B8AADA492BCB4BA617
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FB0A68F50C83F6DAF95A2B4C97639231BC3B9250C09BD0B8AADA492BCB4BA617_423;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::FB53FDE75D6FDED4EF44145A308EDE3DB612293C01A6E170C102980A9F6121A2
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___FB53FDE75D6FDED4EF44145A308EDE3DB612293C01A6E170C102980A9F6121A2_424;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FBD4E957EA38F201724E795ED74940339ABCF92AD55B6596018CF982F4376215
	__StaticArrayInitTypeSizeU3D120_t6FCA4AAC46A11879C0A665ACE8D6E8C1DA3D948C ___FBD4E957EA38F201724E795ED74940339ABCF92AD55B6596018CF982F4376215_425;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::FC26CF118BC276877FD6A8A545629A099A6EBA3481CDA11FAEBEB3089F5E2452
	__StaticArrayInitTypeSizeU3D28_t36DCD814C657FA7E08A274BA24ACF57D5998ADF9 ___FC26CF118BC276877FD6A8A545629A099A6EBA3481CDA11FAEBEB3089F5E2452_426;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FC8B60908EDD854C5710A554C6F9425131E81BD1E646323084C109FBA99B9190
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FC8B60908EDD854C5710A554C6F9425131E81BD1E646323084C109FBA99B9190_427;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FCC16E4D9D2FD1D5DEAF1DC575CE1ECBF7C5FF3D410A9444630B1B2D54931AB0
	__StaticArrayInitTypeSizeU3D12_t1478D1A0E5B34DB1D0B7A0556E979B05A030408F ___FCC16E4D9D2FD1D5DEAF1DC575CE1ECBF7C5FF3D410A9444630B1B2D54931AB0_428;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FCD4372EF6300C83F6533AB9DDF6114828B3051745BB352908A0E4010DE0364B
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FCD4372EF6300C83F6533AB9DDF6114828B3051745BB352908A0E4010DE0364B_429;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::FD0B7AE474CE390E446204EF2A7F3156444FA93BC0A0121EF7211A74D373F745
	__StaticArrayInitTypeSizeU3D80_t7D8CE215BC3C73CA96CE12287304D5232720B984 ___FD0B7AE474CE390E446204EF2A7F3156444FA93BC0A0121EF7211A74D373F745_430;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FD87A8CB026B07ABE41F06D4401365899D180024614BF41E0ACDDF878092E435
	__StaticArrayInitTypeSizeU3D52_t82B0C89B0900221A7C6F0BFF630F5CF2C547C05B ___FD87A8CB026B07ABE41F06D4401365899D180024614BF41E0ACDDF878092E435_431;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FDD4E3F255AC7426DF6A725F8BECA3BAA0952885CA56FC52B8E981CE8F0C58ED
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___FDD4E3F255AC7426DF6A725F8BECA3BAA0952885CA56FC52B8E981CE8F0C58ED_432;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::FDFAE9EBBF7515FB0D6B40D919FF7047DDD7B1FFDCFF8757935846C7B084CDE4
	__StaticArrayInitTypeSizeU3D40_tCE3F4509D6100C356C9111EA66EFDBAFED1EA248 ___FDFAE9EBBF7515FB0D6B40D919FF7047DDD7B1FFDCFF8757935846C7B084CDE4_433;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FECE7D38FE2EF8C58A118369B2BEDDDF41C13D19A8992AFCC4FC3A5092E975C0
	__StaticArrayInitTypeSizeU3D32_t7E00D05EB89B49A04883767021A1D232C230DC42 ___FECE7D38FE2EF8C58A118369B2BEDDDF41C13D19A8992AFCC4FC3A5092E975C0_434;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FF4BCA7CDC06ECF2C289EE0700D92982F25562CA730AE4AB5EFFDF02349440B6
	__StaticArrayInitTypeSizeU3D24_tFDDEB8AFD068211E8A1ABB7234067E2950977AFE ___FF4BCA7CDC06ECF2C289EE0700D92982F25562CA730AE4AB5EFFDF02349440B6_435;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void ZXing.SupportClass::Fill<System.Int32>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddFirst(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_AddFirst_m8AAD292E14E5ED400CA509F740E09CB2C4DE0D60_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) ;
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) ;
// System.Void ZXing.ResultPoint::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint__ctor_m79866B07DD071E8125F003F1A53CEDE675F3213D (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.Detector/Point::set_X(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.Detector/Point::set_Y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.Token::.ctor(ZXing.Aztec.Internal.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_mFDE0BE419E2FC1E770C533C60F8DEEC691D87517 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous0, const RuntimeMethod* method) ;
// System.Void ZXing.Common.BitArray::appendBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, int32_t ___value0, int32_t ___numBits1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mA8A82D1BFF5517CB6F21D51E6871DD10BE1CD457 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.String,System.Int32,System.Int32,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mAC0B0576BA748FF4FB34F0349C763C4262D304A8 (String_t* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding3, bool ___disableEci4, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding3, bool ___disableEci4, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::.ctor(System.Byte[],System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m441599F8B6033F1BFE15EFB66192DBC39024885E (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___disableEci2, const RuntimeMethod* method) ;
// ZXing.Common.BitArray ZXing.Aztec.Internal.HighLevelEncoder::encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, const RuntimeMethod* method) ;
// System.Int32 ZXing.Common.BitArray::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 ZXing.Aztec.Internal.Encoder::TotalBitsInLayer(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90 (int32_t ___layers0, bool ___compact1, const RuntimeMethod* method) ;
// ZXing.Common.BitArray ZXing.Aztec.Internal.Encoder::stuffBits(ZXing.Common.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___bits0, int32_t ___wordSize1, const RuntimeMethod* method) ;
// ZXing.Common.BitArray ZXing.Aztec.Internal.Encoder::generateCheckWords(ZXing.Common.BitArray,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___bitArray0, int32_t ___totalBits1, int32_t ___wordSize2, const RuntimeMethod* method) ;
// ZXing.Common.BitArray ZXing.Aztec.Internal.Encoder::generateModeMessage(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateModeMessage_m6B5EAFDC92048DFA0E5716055990FF0A92367694 (bool ___compact0, int32_t ___layers1, int32_t ___messageSizeInWords2, const RuntimeMethod* method) ;
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix__ctor_m43029CCB30F012A15D327BE473B515F6BDAEED68 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Boolean ZXing.Common.BitArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void ZXing.Common.BitMatrix::set_Item(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___x0, int32_t ___y1, bool ___value2, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.Encoder::drawModeMessage(ZXing.Common.BitMatrix,System.Boolean,System.Int32,ZXing.Common.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawModeMessage_m344B010B37DF49C3F7121D4724B29B0AAFCCD410 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___matrix0, bool ___compact1, int32_t ___matrixSize2, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___modeMessage3, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.Encoder::drawBullsEye(ZXing.Common.BitMatrix,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___matrix0, int32_t ___center1, int32_t ___size2, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.AztecCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode__ctor_mE6C895A9008C285C9375AFBCF5F41800DD0BFC79 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.AztecCode::set_isCompact(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mEA109DBE1E4632CCABC8FE6CA701948C6794AD01_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.AztecCode::set_Size(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Size_m0CA46D7572CEE88A5AFD5D3D0F1EEF7C96EEC646_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.AztecCode::set_Layers(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m93A7FD4EC1C095E5B2D09718205E25F0D2A5E1B2_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.AztecCode::set_CodeWords(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m67A81A3769CEA2C80EEE65C2268E9D61547F4250_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.AztecCode::set_Matrix(ZXing.Common.BitMatrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_mF2BCFE42A0D554A00944953AE84748491372E558_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.Common.BitArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// ZXing.Common.ReedSolomon.GenericGF ZXing.Aztec.Internal.Encoder::getGF(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939 (int32_t ___wordSize0, const RuntimeMethod* method) ;
// System.Void ZXing.Common.ReedSolomon.ReedSolomonEncoder::.ctor(ZXing.Common.ReedSolomon.GenericGF)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReedSolomonEncoder__ctor_m2A4083C8A626B06DFCD3577920083345EEFC0ECB (ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636* __this, GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* ___field0, const RuntimeMethod* method) ;
// System.Int32[] ZXing.Aztec.Internal.Encoder::bitsToWords(ZXing.Common.BitArray,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Encoder_bitsToWords_m8C33CB301119283D80BBEBC75C27DAB639D6CFC3 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___stuffedBits0, int32_t ___wordSize1, int32_t ___totalWords2, const RuntimeMethod* method) ;
// System.Void ZXing.Common.ReedSolomon.ReedSolomonEncoder::encode(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReedSolomonEncoder_encode_mC912E0589BCE6FCFB4B24C6AE27DC980840178BD (ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___toEncode0, int32_t ___ecBytes1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void ZXing.SupportClass::Fill<System.Int32>(T[],T)
inline void SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_gshared)(___array0, ___value1, method);
}
// ZXing.Common.CharacterSetECI ZXing.Common.CharacterSetECI::getCharacterSetECI(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56* CharacterSetECI_getCharacterSetECI_m83D6960F8B9B50A1C27C7B88CB397E0F250567CD (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding0, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::appendFLGn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_appendFLGn_m7D1B2210FA421C493DE5BC8FBEE8C37E4968AEC0 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___eci0, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.Collection`1<ZXing.Aztec.Internal.State>::.ctor()
inline void Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9 (Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3*, const RuntimeMethod*))Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared)(__this, method);
}
// System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State> ZXing.Aztec.Internal.HighLevelEncoder::updateStateListForPair(System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForPair_m8628AD1B6BDA02E6D62146D55DC7001745D5C03E (RuntimeObject* ___states0, int32_t ___index1, int32_t ___pairCode2, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State> ZXing.Aztec.Internal.HighLevelEncoder::updateStateListForChar(System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForChar_m02F5DE3465C2DC403F16E26DFA954AC446374E6D (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, RuntimeObject* ___states0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 ZXing.Aztec.Internal.State::get_BitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) ;
// ZXing.Common.BitArray ZXing.Aztec.Internal.State::toBitArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* State_toBitArray_m460830AE00C7651A6157FA35640FA51B827A10D6 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<ZXing.Aztec.Internal.State>::.ctor()
inline void LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::updateStateForChar(ZXing.Aztec.Internal.State,System.Int32,System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForChar_mB0639E6B699D70BC04E9CB7A02D7A34F7558C0DA (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___state0, int32_t ___index1, RuntimeObject* ___result2, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State> ZXing.Aztec.Internal.HighLevelEncoder::simplifyStates(System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B (RuntimeObject* ___states0, const RuntimeMethod* method) ;
// System.Int32 ZXing.Aztec.Internal.State::get_Mode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::endBinaryShift(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::latchAndAppend(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___mode0, int32_t ___value1, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::shiftAndAppend(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___mode0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 ZXing.Aztec.Internal.State::get_BinaryShiftByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::addBinaryShiftChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::updateStateForPair(ZXing.Aztec.Internal.State,System.Int32,System.Int32,System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForPair_mD9DA25C1DD807D847C415C35D29A1A8618EDDF3C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___state0, int32_t ___index1, int32_t ___pairCode2, RuntimeObject* ___result3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ZXing.Aztec.Internal.State>::.ctor()
inline void List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ZXing.Aztec.Internal.State>::Clear()
inline void List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_inline (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<ZXing.Aztec.Internal.State>::GetEnumerator()
inline Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5 (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<ZXing.Aztec.Internal.State>::Dispose()
inline void Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8 (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
// T System.Collections.Generic.LinkedList`1/Enumerator<ZXing.Aztec.Internal.State>::get_Current()
inline State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_inline (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D* __this, const RuntimeMethod* method)
{
	return ((  State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* (*) (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
// System.Boolean ZXing.Aztec.Internal.State::isBetterThanOrEqualTo(ZXing.Aztec.Internal.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___other0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ZXing.Aztec.Internal.State>::Add(T)
inline void List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_inline (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<ZXing.Aztec.Internal.State>::MoveNext()
inline bool Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1 (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ZXing.Aztec.Internal.State>::AddFirst(T)
inline LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* LinkedList_1_AddFirst_m1991E1ABD2C38EEF91EAB3729074317A31017A52 (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*, const RuntimeMethod*))LinkedList_1_AddFirst_m8AAD292E14E5ED400CA509F740E09CB2C4DE0D60_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ZXing.Aztec.Internal.State>::GetEnumerator()
inline Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479 (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC (*) (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ZXing.Aztec.Internal.State>::Dispose()
inline void Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ZXing.Aztec.Internal.State>::get_Current()
inline State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_inline (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC* __this, const RuntimeMethod* method)
{
	return ((  State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* (*) (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.LinkedList`1<ZXing.Aztec.Internal.State>::Remove(T)
inline bool LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*, const RuntimeMethod*))LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared)(__this, ___value0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ZXing.Aztec.Internal.State>::MoveNext()
inline bool Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4 (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String ZXing.SupportClass::ToBinaryString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ToBinaryString_m6286E8FF516C5C02AAF1F713E215B1073079FFD3 (int32_t ___x0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 ZXing.Aztec.Internal.State::calculateBinaryShiftCost(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_calculateBinaryShiftCost_mB2A0B27B8824FA85E69EB47CEEB29D89DF305793 (int32_t ___binaryShiftByteCount0, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::add(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___value0, int32_t ___bitCount1, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.State::.ctor(ZXing.Aztec.Internal.Token,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___token0, int32_t ___mode1, int32_t ___binaryBytes2, int32_t ___bitCount3, const RuntimeMethod* method) ;
// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::addBinaryShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_addBinaryShift_mC69E5C1F383C76DF19B9D993F453370ED8F68EC7 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___start0, int32_t ___byteCount1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ZXing.Aztec.Internal.Token>::.ctor()
inline void List_1__ctor_mC0783EF65F5CE032B578CD6D6B6E89FCA7B3E2D9 (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ZXing.Aztec.Internal.Token>::Add(T)
inline void List_1_Add_m5711235BA91B72A61B3F921E50A6F613E79856D0_inline (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924*, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::get_Previous()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D_inline (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ZXing.Aztec.Internal.Token>::get_Count()
inline int32_t List_1_get_Count_m54D2DC498BD296098BCCE83FC87F5AF6B3FD03D2_inline (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<ZXing.Aztec.Internal.Token>::get_Item(System.Int32)
inline Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* List_1_get_Item_m56DE0B297592490F29C1FB89324822D51FFC11AE (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* (*) (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.SimpleToken::.ctor(ZXing.Aztec.Internal.Token,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7 (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous0, int32_t ___value1, int32_t ___bitCount2, const RuntimeMethod* method) ;
// System.Void ZXing.Aztec.Internal.BinaryShiftToken::.ctor(ZXing.Aztec.Internal.Token,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryShiftToken__ctor_mF0B49C7EEB62FE53EFBEA25C6A20C81C1BE41339 (BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous0, int32_t ___binaryShiftStart1, int32_t ___binaryShiftByteCount2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.Detector/Point::set_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CXU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.Detector/Point::set_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CYU3Ek__BackingField_1 = L_0;
		return;
	}
}
// ZXing.ResultPoint ZXing.Aztec.Internal.Detector/Point::toResultPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* Point_toResultPoint_m9D8E4D378CE37E5D2D0CF9CFB39659FE6ED64AD4 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline(__this, NULL);
		int32_t L_1;
		L_1 = Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline(__this, NULL);
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_2 = (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*)il2cpp_codegen_object_new(ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResultPoint__ctor_m79866B07DD071E8125F003F1A53CEDE675F3213D(L_2, ((float)L_0), ((float)L_1), NULL);
		return L_2;
	}
}
// System.Void ZXing.Aztec.Internal.Detector/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mF652AF4FBE054715A1A2CDBC7443C3A0D8677273 (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___x0;
		Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B_inline(__this, L_0, NULL);
		int32_t L_1 = ___y1;
		Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8_inline(__this, L_1, NULL);
		return;
	}
}
// System.String ZXing.Aztec.Internal.Detector/Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mC98432BE50EE60E5BD6EE3BD113CEC6665EF9EBE (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3;
		L_3 = Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline(__this, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7;
		L_7 = Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ZXing.Aztec.Internal.AztecCode::get_isCompact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AztecCode_get_isCompact_m013259433B90A0F7FAA14D7E9A0A31A12D5B5DB2 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisCompactU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.AztecCode::set_isCompact(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mEA109DBE1E4632CCABC8FE6CA701948C6794AD01 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CisCompactU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 ZXing.Aztec.Internal.AztecCode::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AztecCode_get_Size_mC76133A71B8F04780EEB2AB8DE712F48B8A327B6 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.AztecCode::set_Size(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_Size_m0CA46D7572CEE88A5AFD5D3D0F1EEF7C96EEC646 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 ZXing.Aztec.Internal.AztecCode::get_Layers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AztecCode_get_Layers_m2E9E7FA955459AF5C39834C409FB771E670F5760 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLayersU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.AztecCode::set_Layers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m93A7FD4EC1C095E5B2D09718205E25F0D2A5E1B2 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLayersU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 ZXing.Aztec.Internal.AztecCode::get_CodeWords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AztecCode_get_CodeWords_m4E2A4E97F36B93D812A71FC680D2EF27DF24BE19 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeWordsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.AztecCode::set_CodeWords(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m67A81A3769CEA2C80EEE65C2268E9D61547F4250 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeWordsU3Ek__BackingField_3 = L_0;
		return;
	}
}
// ZXing.Common.BitMatrix ZXing.Aztec.Internal.AztecCode::get_Matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* AztecCode_get_Matrix_m7CAA728783B38E8DD9B634DADDFDF0DBEF28EB5E (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) 
{
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = __this->___U3CMatrixU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.AztecCode::set_Matrix(ZXing.Common.BitMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_mF2BCFE42A0D554A00944953AE84748491372E558 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___value0, const RuntimeMethod* method) 
{
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___value0;
		__this->___U3CMatrixU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatrixU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void ZXing.Aztec.Internal.AztecCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode__ctor_mE6C895A9008C285C9375AFBCF5F41800DD0BFC79 (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Aztec.Internal.BinaryShiftToken::.ctor(ZXing.Aztec.Internal.Token,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryShiftToken__ctor_mF0B49C7EEB62FE53EFBEA25C6A20C81C1BE41339 (BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous0, int32_t ___binaryShiftStart1, int32_t ___binaryShiftByteCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ___previous0;
		il2cpp_codegen_runtime_class_init_inline(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		Token__ctor_mFDE0BE419E2FC1E770C533C60F8DEEC691D87517(__this, L_0, NULL);
		int32_t L_1 = ___binaryShiftStart1;
		__this->___binaryShiftStart_2 = L_1;
		int32_t L_2 = ___binaryShiftByteCount2;
		__this->___binaryShiftByteCount_3 = L_2;
		return;
	}
}
// System.Void ZXing.Aztec.Internal.BinaryShiftToken::appendTo(ZXing.Common.BitArray,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryShiftToken_appendTo_m63E24AE72FCB48754CEB45A153C25A2A0810DD37 (BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110* __this, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___bitArray0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___binaryShiftByteCount_3;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)62))))
		{
			goto IL_0053;
		}
	}

IL_0018:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4 = ___bitArray0;
		NullCheck(L_4);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_4, ((int32_t)31), 5, NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)62))))
		{
			goto IL_0034;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_6 = ___bitArray0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)31))), ((int32_t)16), NULL);
		goto IL_0053;
	}

IL_0034:
	{
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_9 = ___bitArray0;
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_10, ((int32_t)31), NULL);
		NullCheck(L_9);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_9, L_11, 5, NULL);
		goto IL_0053;
	}

IL_0048:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_12 = ___bitArray0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_12, ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)31))), 5, NULL);
	}

IL_0053:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_14 = ___bitArray0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___text1;
		int32_t L_16 = __this->___binaryShiftStart_2;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_14, L_19, 8, NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0068:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.String ZXing.Aztec.Internal.BinaryShiftToken::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryShiftToken_ToString_mD1257CEB919DC42F9D0652D90D4B2EF10C9E5B81 (BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3 = __this->___binaryShiftStart_2;
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7 = __this->___binaryShiftStart_2;
		int32_t L_8 = __this->___binaryShiftByteCount_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_7, L_8)), 1));
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mB9FEFB426200E5040C1B38985E567293CF6016A0 (String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ((AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_StaticFields*)il2cpp_codegen_static_fields_for(AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var))->___DEFAULT_CHARSET_0;
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_3;
		L_3 = Encoder_encode_mA8A82D1BFF5517CB6F21D51E6871DD10BE1CD457(L_2, NULL);
		return L_3;
	}
}
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mB0EFC38341A2BB858328F99BC07404FE04DF9235 (String_t* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___data0;
		int32_t L_1 = ___minECCPercent1;
		int32_t L_2 = ___userSpecifiedLayers2;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_3;
		L_3 = Encoder_encode_mAC0B0576BA748FF4FB34F0349C763C4262D304A8(L_0, L_1, L_2, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, (bool)0, NULL);
		return L_3;
	}
}
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.String,System.Int32,System.Int32,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mCC374EE4D445117BF6D877CFD49A68C1398EDC04 (String_t* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___data0;
		int32_t L_1 = ___minECCPercent1;
		int32_t L_2 = ___userSpecifiedLayers2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_4;
		L_4 = Encoder_encode_mAC0B0576BA748FF4FB34F0349C763C4262D304A8(L_0, L_1, L_2, L_3, (bool)0, NULL);
		return L_4;
	}
}
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.String,System.Int32,System.Int32,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mAC0B0576BA748FF4FB34F0349C763C4262D304A8 (String_t* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding3, bool ___disableEci4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B3_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___encoding3;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ((AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_StaticFields*)il2cpp_codegen_static_fields_for(AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var))->___DEFAULT_CHARSET_0;
		G_B3_0 = L_1;
		goto IL_000b;
	}

IL_000a:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding3;
		G_B3_0 = L_2;
	}

IL_000b:
	{
		String_t* L_3 = ___data0;
		NullCheck(G_B3_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, G_B3_0, L_3);
		int32_t L_5 = ___minECCPercent1;
		int32_t L_6 = ___userSpecifiedLayers2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___encoding3;
		bool L_8 = ___disableEci4;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_9;
		L_9 = Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942(L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mA8A82D1BFF5517CB6F21D51E6871DD10BE1CD457 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_1;
		L_1 = Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942(L_0, ((int32_t)33), 0, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, (bool)0, NULL);
		return L_1;
	}
}
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_mD2CA9E51692636988CF9F3069FB8D0251C2785BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		int32_t L_1 = ___minECCPercent1;
		int32_t L_2 = ___userSpecifiedLayers2;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_3;
		L_3 = Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942(L_0, L_1, L_2, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, (bool)0, NULL);
		return L_3;
	}
}
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_m64BA0F8163F789CF5FD35388E86A166E250CE6CF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		int32_t L_1 = ___minECCPercent1;
		int32_t L_2 = ___userSpecifiedLayers2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___encoding3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_4;
		L_4 = Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942(L_0, L_1, L_2, L_3, (bool)0, NULL);
		return L_4;
	}
}
// ZXing.Aztec.Internal.AztecCode ZXing.Aztec.Internal.Encoder::encode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___minECCPercent1, int32_t ___userSpecifiedLayers2, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding3, bool ___disableEci4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_7 = NULL;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_8 = NULL;
	int32_t V_9 = 0;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_10 = NULL;
	int32_t V_11 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_12 = NULL;
	int32_t V_13 = 0;
	BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___encoding3;
		bool L_2 = ___disableEci4;
		HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* L_3 = (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE*)il2cpp_codegen_object_new(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HighLevelEncoder__ctor_m441599F8B6033F1BFE15EFB66192DBC39024885E(L_3, L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4;
		L_4 = HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C(L_3, NULL);
		V_0 = L_4;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_5, NULL);
		int32_t L_7 = ___minECCPercent1;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_6, L_7))/((int32_t)100))), ((int32_t)11)));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_8, NULL);
		int32_t L_10 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = ___userSpecifiedLayers2;
		if (!L_11)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_12 = ___userSpecifiedLayers2;
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		int32_t L_13 = ___userSpecifiedLayers2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = il2cpp_codegen_abs(L_13);
		V_4 = L_14;
		int32_t L_15 = V_4;
		bool L_16 = V_3;
		G_B2_0 = L_15;
		if (L_16)
		{
			G_B3_0 = L_15;
			goto IL_0043;
		}
	}
	{
		G_B4_0 = ((int32_t)32);
		G_B4_1 = G_B2_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 4;
		G_B4_1 = G_B3_0;
	}

IL_0044:
	{
		if ((((int32_t)G_B4_1) <= ((int32_t)G_B4_0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_17 = ___userSpecifiedLayers2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE2BF525BE84B3D6B88D844591311E684F7987A3)), L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942_RuntimeMethod_var)));
	}

IL_005c:
	{
		int32_t L_22 = V_4;
		bool L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90(L_22, L_23, NULL);
		V_5 = L_24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE_4;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		int32_t L_29 = V_5;
		int32_t L_30 = V_5;
		int32_t L_31 = V_6;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)(L_30%L_31))));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_32 = V_0;
		int32_t L_33 = V_6;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_34;
		L_34 = Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06(L_32, L_33, NULL);
		V_7 = L_34;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_35 = V_7;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_35, NULL);
		int32_t L_37 = V_1;
		int32_t L_38 = V_15;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_36, L_37))) <= ((int32_t)L_38)))
		{
			goto IL_009c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942_RuntimeMethod_var)));
	}

IL_009c:
	{
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_41 = V_7;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_41, NULL);
		int32_t L_43 = V_6;
		if ((((int32_t)L_42) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)64))))))
		{
			goto IL_0154;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_44);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942_RuntimeMethod_var)));
	}

IL_00be:
	{
		V_6 = 0;
		V_7 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)NULL;
		V_16 = 0;
	}

IL_00c7:
	{
		int32_t L_45 = V_16;
		if ((((int32_t)L_45) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d8;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_46 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_46);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4E73755B7B3ABC61F614B6B3404904BDC750906)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_m8FE9D8D06EC276D8BE62EBA2E67976CCF6072942_RuntimeMethod_var)));
	}

IL_00d8:
	{
		int32_t L_47 = V_16;
		V_3 = (bool)((((int32_t)((((int32_t)L_47) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_3;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_49 = V_16;
		G_B17_0 = L_49;
		goto IL_00ec;
	}

IL_00e8:
	{
		int32_t L_50 = V_16;
		G_B17_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00ec:
	{
		V_4 = G_B17_0;
		int32_t L_51 = V_4;
		bool L_52 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		int32_t L_53;
		L_53 = Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90(L_51, L_52, NULL);
		V_5 = L_53;
		int32_t L_54 = V_2;
		int32_t L_55 = V_5;
		if ((((int32_t)L_54) > ((int32_t)L_55)))
		{
			goto IL_0149;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_56 = V_7;
		if (!L_56)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_57 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE_4;
		int32_t L_59 = V_4;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_57) == ((int32_t)L_61)))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE_4;
		int32_t L_63 = V_4;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_6 = L_65;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_66 = V_0;
		int32_t L_67 = V_6;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_68;
		L_68 = Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06(L_66, L_67, NULL);
		V_7 = L_68;
	}

IL_0121:
	{
		int32_t L_69 = V_5;
		int32_t L_70 = V_5;
		int32_t L_71 = V_6;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_69, ((int32_t)(L_70%L_71))));
		bool L_72 = V_3;
		if (!L_72)
		{
			goto IL_013c;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_73 = V_7;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_73, NULL);
		int32_t L_75 = V_6;
		if ((((int32_t)L_74) > ((int32_t)((int32_t)il2cpp_codegen_multiply(L_75, ((int32_t)64))))))
		{
			goto IL_0149;
		}
	}

IL_013c:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_76 = V_7;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_76, NULL);
		int32_t L_78 = V_1;
		int32_t L_79 = V_17;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_77, L_78))) <= ((int32_t)L_79)))
		{
			goto IL_0154;
		}
	}

IL_0149:
	{
		int32_t L_80 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		goto IL_00c7;
	}

IL_0154:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_81 = V_7;
		int32_t L_82 = V_5;
		int32_t L_83 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_84;
		L_84 = Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362(L_81, L_82, L_83, NULL);
		V_8 = L_84;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_85 = V_7;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_85, NULL);
		int32_t L_87 = V_6;
		V_9 = ((int32_t)(L_86/L_87));
		bool L_88 = V_3;
		int32_t L_89 = V_4;
		int32_t L_90 = V_9;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_91;
		L_91 = Encoder_generateModeMessage_m6B5EAFDC92048DFA0E5716055990FF0A92367694(L_88, L_89, L_90, NULL);
		V_10 = L_91;
		bool L_92 = V_3;
		if (L_92)
		{
			goto IL_0180;
		}
	}
	{
		G_B28_0 = ((int32_t)14);
		goto IL_0182;
	}

IL_0180:
	{
		G_B28_0 = ((int32_t)11);
	}

IL_0182:
	{
		int32_t L_93 = V_4;
		V_11 = ((int32_t)il2cpp_codegen_add(G_B28_0, ((int32_t)il2cpp_codegen_multiply(L_93, 4))));
		int32_t L_94 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_94);
		V_12 = L_95;
		bool L_96 = V_3;
		if (!L_96)
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_97 = V_11;
		V_13 = L_97;
		V_18 = 0;
		goto IL_01ab;
	}

IL_019e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_12;
		int32_t L_99 = V_18;
		int32_t L_100 = V_18;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_100);
		int32_t L_101 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01ab:
	{
		int32_t L_102 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_12;
		NullCheck(L_103);
		if ((((int32_t)L_102) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_020e;
	}

IL_01b5:
	{
		int32_t L_104 = V_11;
		int32_t L_105 = V_11;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_104, 1)), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_105/2)), 1))/((int32_t)15)))))));
		int32_t L_106 = V_11;
		V_19 = ((int32_t)(L_106/2));
		int32_t L_107 = V_13;
		V_20 = ((int32_t)(L_107/2));
		V_21 = 0;
		goto IL_0208;
	}

IL_01d8:
	{
		int32_t L_108 = V_21;
		int32_t L_109 = V_21;
		V_22 = ((int32_t)il2cpp_codegen_add(L_108, ((int32_t)(L_109/((int32_t)15)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_12;
		int32_t L_111 = V_19;
		int32_t L_112 = V_21;
		int32_t L_113 = V_20;
		int32_t L_114 = V_22;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_111, L_112)), 1))), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_113, L_114)), 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_12;
		int32_t L_116 = V_19;
		int32_t L_117 = V_21;
		int32_t L_118 = V_20;
		int32_t L_119 = V_22;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_116, L_117))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_118, L_119)), 1)));
		int32_t L_120 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_0208:
	{
		int32_t L_121 = V_21;
		int32_t L_122 = V_19;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_01d8;
		}
	}

IL_020e:
	{
		int32_t L_123 = V_13;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_124 = (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91*)il2cpp_codegen_object_new(BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		NullCheck(L_124);
		BitMatrix__ctor_m43029CCB30F012A15D327BE473B515F6BDAEED68(L_124, L_123, NULL);
		V_14 = L_124;
		V_23 = 0;
		V_24 = 0;
		goto IL_034e;
	}

IL_0222:
	{
		int32_t L_125 = V_4;
		int32_t L_126 = V_23;
		bool L_127 = V_3;
		G_B38_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_125, L_126)), 4));
		if (L_127)
		{
			G_B39_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_125, L_126)), 4));
			goto IL_0230;
		}
	}
	{
		G_B40_0 = ((int32_t)12);
		G_B40_1 = G_B38_0;
		goto IL_0232;
	}

IL_0230:
	{
		G_B40_0 = ((int32_t)9);
		G_B40_1 = G_B39_0;
	}

IL_0232:
	{
		V_25 = ((int32_t)il2cpp_codegen_add(G_B40_1, G_B40_0));
		V_26 = 0;
		goto IL_0336;
	}

IL_023d:
	{
		int32_t L_128 = V_26;
		V_27 = ((int32_t)il2cpp_codegen_multiply(L_128, 2));
		V_28 = 0;
		goto IL_0328;
	}

IL_024b:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_129 = V_8;
		int32_t L_130 = V_24;
		int32_t L_131 = V_27;
		int32_t L_132 = V_28;
		NullCheck(L_129);
		bool L_133;
		L_133 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_129, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_130, L_131)), L_132)), NULL);
		if (!L_133)
		{
			goto IL_0278;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_134 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_12;
		int32_t L_136 = V_23;
		int32_t L_137 = V_28;
		NullCheck(L_135);
		int32_t L_138 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_136, 2)), L_137));
		int32_t L_139 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = V_12;
		int32_t L_141 = V_23;
		int32_t L_142 = V_26;
		NullCheck(L_140);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_141, 2)), L_142));
		int32_t L_144 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_134);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_134, L_139, L_144, (bool)1, NULL);
	}

IL_0278:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_145 = V_8;
		int32_t L_146 = V_24;
		int32_t L_147 = V_25;
		int32_t L_148 = V_27;
		int32_t L_149 = V_28;
		NullCheck(L_145);
		bool L_150;
		L_150 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_145, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_146, ((int32_t)il2cpp_codegen_multiply(L_147, 2)))), L_148)), L_149)), NULL);
		if (!L_150)
		{
			goto IL_02af;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_151 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_12;
		int32_t L_153 = V_23;
		int32_t L_154 = V_26;
		NullCheck(L_152);
		int32_t L_155 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_153, 2)), L_154));
		int32_t L_156 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = V_12;
		int32_t L_158 = V_11;
		int32_t L_159 = V_23;
		int32_t L_160 = V_28;
		NullCheck(L_157);
		int32_t L_161 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_158, 1)), ((int32_t)il2cpp_codegen_multiply(L_159, 2)))), L_160));
		int32_t L_162 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_151);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_151, L_156, L_162, (bool)1, NULL);
	}

IL_02af:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_163 = V_8;
		int32_t L_164 = V_24;
		int32_t L_165 = V_25;
		int32_t L_166 = V_27;
		int32_t L_167 = V_28;
		NullCheck(L_163);
		bool L_168;
		L_168 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_163, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_164, ((int32_t)il2cpp_codegen_multiply(L_165, 4)))), L_166)), L_167)), NULL);
		if (!L_168)
		{
			goto IL_02eb;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_169 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = V_12;
		int32_t L_171 = V_11;
		int32_t L_172 = V_23;
		int32_t L_173 = V_28;
		NullCheck(L_170);
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_171, 1)), ((int32_t)il2cpp_codegen_multiply(L_172, 2)))), L_173));
		int32_t L_175 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = V_12;
		int32_t L_177 = V_11;
		int32_t L_178 = V_23;
		int32_t L_179 = V_26;
		NullCheck(L_176);
		int32_t L_180 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_177, 1)), ((int32_t)il2cpp_codegen_multiply(L_178, 2)))), L_179));
		int32_t L_181 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_169);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_169, L_175, L_181, (bool)1, NULL);
	}

IL_02eb:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_182 = V_8;
		int32_t L_183 = V_24;
		int32_t L_184 = V_25;
		int32_t L_185 = V_27;
		int32_t L_186 = V_28;
		NullCheck(L_182);
		bool L_187;
		L_187 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_182, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_183, ((int32_t)il2cpp_codegen_multiply(L_184, 6)))), L_185)), L_186)), NULL);
		if (!L_187)
		{
			goto IL_0322;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_188 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = V_12;
		int32_t L_190 = V_11;
		int32_t L_191 = V_23;
		int32_t L_192 = V_26;
		NullCheck(L_189);
		int32_t L_193 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_190, 1)), ((int32_t)il2cpp_codegen_multiply(L_191, 2)))), L_192));
		int32_t L_194 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_12;
		int32_t L_196 = V_23;
		int32_t L_197 = V_28;
		NullCheck(L_195);
		int32_t L_198 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_196, 2)), L_197));
		int32_t L_199 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		NullCheck(L_188);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_188, L_194, L_199, (bool)1, NULL);
	}

IL_0322:
	{
		int32_t L_200 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_0328:
	{
		int32_t L_201 = V_28;
		if ((((int32_t)L_201) < ((int32_t)2)))
		{
			goto IL_024b;
		}
	}
	{
		int32_t L_202 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_202, 1));
	}

IL_0336:
	{
		int32_t L_203 = V_26;
		int32_t L_204 = V_25;
		if ((((int32_t)L_203) < ((int32_t)L_204)))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_205 = V_24;
		int32_t L_206 = V_25;
		V_24 = ((int32_t)il2cpp_codegen_add(L_205, ((int32_t)il2cpp_codegen_multiply(L_206, 8))));
		int32_t L_207 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_207, 1));
	}

IL_034e:
	{
		int32_t L_208 = V_23;
		int32_t L_209 = V_4;
		if ((((int32_t)L_208) < ((int32_t)L_209)))
		{
			goto IL_0222;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_210 = V_14;
		bool L_211 = V_3;
		int32_t L_212 = V_13;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_213 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Encoder_drawModeMessage_m344B010B37DF49C3F7121D4724B29B0AAFCCD410(L_210, L_211, L_212, L_213, NULL);
		bool L_214 = V_3;
		if (!L_214)
		{
			goto IL_0377;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_215 = V_14;
		int32_t L_216 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC(L_215, ((int32_t)(L_216/2)), 5, NULL);
		goto IL_03fd;
	}

IL_0377:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_217 = V_14;
		int32_t L_218 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC(L_217, ((int32_t)(L_218/2)), 7, NULL);
		V_29 = 0;
		V_30 = 0;
		goto IL_03f3;
	}

IL_038b:
	{
		int32_t L_219 = V_13;
		V_31 = ((int32_t)(((int32_t)(L_219/2))&1));
		goto IL_03df;
	}

IL_0395:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_220 = V_14;
		int32_t L_221 = V_13;
		int32_t L_222 = V_30;
		int32_t L_223 = V_31;
		NullCheck(L_220);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_220, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_221/2)), L_222)), L_223, (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_224 = V_14;
		int32_t L_225 = V_13;
		int32_t L_226 = V_30;
		int32_t L_227 = V_31;
		NullCheck(L_224);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_224, ((int32_t)il2cpp_codegen_add(((int32_t)(L_225/2)), L_226)), L_227, (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_228 = V_14;
		int32_t L_229 = V_31;
		int32_t L_230 = V_13;
		int32_t L_231 = V_30;
		NullCheck(L_228);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_228, L_229, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_230/2)), L_231)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_232 = V_14;
		int32_t L_233 = V_31;
		int32_t L_234 = V_13;
		int32_t L_235 = V_30;
		NullCheck(L_232);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_232, L_233, ((int32_t)il2cpp_codegen_add(((int32_t)(L_234/2)), L_235)), (bool)1, NULL);
		int32_t L_236 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_236, 2));
	}

IL_03df:
	{
		int32_t L_237 = V_31;
		int32_t L_238 = V_13;
		if ((((int32_t)L_237) < ((int32_t)L_238)))
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_239 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_239, ((int32_t)15)));
		int32_t L_240 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_240, ((int32_t)16)));
	}

IL_03f3:
	{
		int32_t L_241 = V_29;
		int32_t L_242 = V_11;
		if ((((int32_t)L_241) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_242/2)), 1)))))
		{
			goto IL_038b;
		}
	}

IL_03fd:
	{
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_243 = (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366*)il2cpp_codegen_object_new(AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366_il2cpp_TypeInfo_var);
		NullCheck(L_243);
		AztecCode__ctor_mE6C895A9008C285C9375AFBCF5F41800DD0BFC79(L_243, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_244 = L_243;
		bool L_245 = V_3;
		NullCheck(L_244);
		AztecCode_set_isCompact_mEA109DBE1E4632CCABC8FE6CA701948C6794AD01_inline(L_244, L_245, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_246 = L_244;
		int32_t L_247 = V_13;
		NullCheck(L_246);
		AztecCode_set_Size_m0CA46D7572CEE88A5AFD5D3D0F1EEF7C96EEC646_inline(L_246, L_247, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_248 = L_246;
		int32_t L_249 = V_4;
		NullCheck(L_248);
		AztecCode_set_Layers_m93A7FD4EC1C095E5B2D09718205E25F0D2A5E1B2_inline(L_248, L_249, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_250 = L_248;
		int32_t L_251 = V_9;
		NullCheck(L_250);
		AztecCode_set_CodeWords_m67A81A3769CEA2C80EEE65C2268E9D61547F4250_inline(L_250, L_251, NULL);
		AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* L_252 = L_250;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_253 = V_14;
		NullCheck(L_252);
		AztecCode_set_Matrix_mF2BCFE42A0D554A00944953AE84748491372E558_inline(L_252, L_253, NULL);
		return L_252;
	}
}
// System.Void ZXing.Aztec.Internal.Encoder::drawBullsEye(ZXing.Common.BitMatrix,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawBullsEye_m9DB0322DDB42D393872E62E6092E813159FA75EC (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___matrix0, int32_t ___center1, int32_t ___size2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		int32_t L_0 = ___center1;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_003a;
	}

IL_000a:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_2 = ___matrix0;
		int32_t L_3 = V_1;
		int32_t L_4 = ___center1;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_6 = ___matrix0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___center1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_10 = ___matrix0;
		int32_t L_11 = ___center1;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), L_13, (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_14 = ___matrix0;
		int32_t L_15 = ___center1;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_14);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), L_17, (bool)1, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003a:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___center1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21)))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 2));
	}

IL_0044:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___size2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_25 = ___matrix0;
		int32_t L_26 = ___center1;
		int32_t L_27 = ___size2;
		int32_t L_28 = ___center1;
		int32_t L_29 = ___size2;
		NullCheck(L_25);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_30 = ___matrix0;
		int32_t L_31 = ___center1;
		int32_t L_32 = ___size2;
		int32_t L_33 = ___center1;
		int32_t L_34 = ___size2;
		NullCheck(L_30);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_30, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_31, L_32)), 1)), ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_35 = ___matrix0;
		int32_t L_36 = ___center1;
		int32_t L_37 = ___size2;
		int32_t L_38 = ___center1;
		int32_t L_39 = ___size2;
		NullCheck(L_35);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_38, L_39)), 1)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_40 = ___matrix0;
		int32_t L_41 = ___center1;
		int32_t L_42 = ___size2;
		int32_t L_43 = ___center1;
		int32_t L_44 = ___size2;
		NullCheck(L_40);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_40, ((int32_t)il2cpp_codegen_add(L_41, L_42)), ((int32_t)il2cpp_codegen_subtract(L_43, L_44)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_45 = ___matrix0;
		int32_t L_46 = ___center1;
		int32_t L_47 = ___size2;
		int32_t L_48 = ___center1;
		int32_t L_49 = ___size2;
		NullCheck(L_45);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_48, L_49)), 1)), (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_50 = ___matrix0;
		int32_t L_51 = ___center1;
		int32_t L_52 = ___size2;
		int32_t L_53 = ___center1;
		int32_t L_54 = ___size2;
		NullCheck(L_50);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_50, ((int32_t)il2cpp_codegen_add(L_51, L_52)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_53, L_54)), 1)), (bool)1, NULL);
		return;
	}
}
// ZXing.Common.BitArray ZXing.Aztec.Internal.Encoder::generateModeMessage(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateModeMessage_m6B5EAFDC92048DFA0E5716055990FF0A92367694 (bool ___compact0, int32_t ___layers1, int32_t ___messageSizeInWords2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_0 = NULL;
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_0, NULL);
		V_0 = L_0;
		bool L_1 = ___compact0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_2 = V_0;
		int32_t L_3 = ___layers1;
		NullCheck(L_2);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), 2, NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4 = V_0;
		int32_t L_5 = ___messageSizeInWords2;
		NullCheck(L_4);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), 6, NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_7;
		L_7 = Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362(L_6, ((int32_t)28), 4, NULL);
		V_0 = L_7;
		goto IL_0048;
	}

IL_0029:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_8 = V_0;
		int32_t L_9 = ___layers1;
		NullCheck(L_8);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), 5, NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_10 = V_0;
		int32_t L_11 = ___messageSizeInWords2;
		NullCheck(L_10);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), ((int32_t)11), NULL);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_13;
		L_13 = Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362(L_12, ((int32_t)40), 4, NULL);
		V_0 = L_13;
	}

IL_0048:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_14 = V_0;
		return L_14;
	}
}
// System.Void ZXing.Aztec.Internal.Encoder::drawModeMessage(ZXing.Common.BitMatrix,System.Boolean,System.Int32,ZXing.Common.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawModeMessage_m344B010B37DF49C3F7121D4724B29B0AAFCCD410 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___matrix0, bool ___compact1, int32_t ___matrixSize2, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___modeMessage3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___matrixSize2;
		V_0 = ((int32_t)(L_0/2));
		bool L_1 = ___compact1;
		if (!L_1)
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, 3)), L_3));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4 = ___modeMessage3;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_7 = ___matrix0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 5)), (bool)1, NULL);
	}

IL_0025:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_10 = ___modeMessage3;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_10, ((int32_t)il2cpp_codegen_add(L_11, 7)), NULL);
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_13 = ___matrix0;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_13);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_13, ((int32_t)il2cpp_codegen_add(L_14, 5)), L_15, (bool)1, NULL);
	}

IL_003b:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_16 = ___modeMessage3;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)20), L_17)), NULL);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_19 = ___matrix0;
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_19, L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), (bool)1, NULL);
	}

IL_0052:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_22 = ___modeMessage3;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24;
		L_24 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_22, ((int32_t)il2cpp_codegen_subtract(((int32_t)27), L_23)), NULL);
		if (!L_24)
		{
			goto IL_0069;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_25 = ___matrix0;
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		NullCheck(L_25);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, 5)), L_27, (bool)1, NULL);
	}

IL_0069:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006d:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)7)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_0072:
	{
		V_3 = 0;
		goto IL_00e2;
	}

IL_0076:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_30, 5)), L_31)), ((int32_t)(L_32/5))));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_33 = ___modeMessage3;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		bool L_35;
		L_35 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_0096;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_36 = ___matrix0;
		int32_t L_37 = V_4;
		int32_t L_38 = V_0;
		NullCheck(L_36);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_36, L_37, ((int32_t)il2cpp_codegen_subtract(L_38, 7)), (bool)1, NULL);
	}

IL_0096:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_39 = ___modeMessage3;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		bool L_41;
		L_41 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)10))), NULL);
		if (!L_41)
		{
			goto IL_00ae;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_42 = ___matrix0;
		int32_t L_43 = V_0;
		int32_t L_44 = V_4;
		NullCheck(L_42);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_42, ((int32_t)il2cpp_codegen_add(L_43, 7)), L_44, (bool)1, NULL);
	}

IL_00ae:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_45 = ___modeMessage3;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		bool L_47;
		L_47 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)29), L_46)), NULL);
		if (!L_47)
		{
			goto IL_00c6;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_48 = ___matrix0;
		int32_t L_49 = V_4;
		int32_t L_50 = V_0;
		NullCheck(L_48);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_48, L_49, ((int32_t)il2cpp_codegen_add(L_50, 7)), (bool)1, NULL);
	}

IL_00c6:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_51 = ___modeMessage3;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		bool L_53;
		L_53 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_51, ((int32_t)il2cpp_codegen_subtract(((int32_t)39), L_52)), NULL);
		if (!L_53)
		{
			goto IL_00de;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_54 = ___matrix0;
		int32_t L_55 = V_0;
		int32_t L_56 = V_4;
		NullCheck(L_54);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 7)), L_56, (bool)1, NULL);
	}

IL_00de:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e2:
	{
		int32_t L_58 = V_3;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)10))))
		{
			goto IL_0076;
		}
	}
	{
		return;
	}
}
// ZXing.Common.BitArray ZXing.Aztec.Internal.Encoder::generateCheckWords(ZXing.Common.BitArray,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___bitArray0, int32_t ___totalBits1, int32_t ___wordSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = ___bitArray0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_0, NULL);
		int32_t L_2 = ___wordSize2;
		if (!((int32_t)(L_1%L_2)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32725D282232F05FFA02D73D5E41117CB098398B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_generateCheckWords_m699F960DE13CB54F711722BE15E9D9E76A42E362_RuntimeMethod_var)));
	}

IL_0015:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_4 = ___bitArray0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_4, NULL);
		int32_t L_6 = ___wordSize2;
		V_0 = ((int32_t)(L_5/L_6));
		int32_t L_7 = ___wordSize2;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_8;
		L_8 = Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939(L_7, NULL);
		ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636* L_9 = (ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636*)il2cpp_codegen_object_new(ReedSolomonEncoder_t5ED408EEA7EA79FC18CF460256E404FD88DBD636_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ReedSolomonEncoder__ctor_m2A4083C8A626B06DFCD3577920083345EEFC0ECB(L_9, L_8, NULL);
		int32_t L_10 = ___totalBits1;
		int32_t L_11 = ___wordSize2;
		V_1 = ((int32_t)(L_10/L_11));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_12 = ___bitArray0;
		int32_t L_13 = ___wordSize2;
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = Encoder_bitsToWords_m8C33CB301119283D80BBEBC75C27DAB639D6CFC3(L_12, L_13, L_14, NULL);
		V_2 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_9);
		ReedSolomonEncoder_encode_mC912E0589BCE6FCFB4B24C6AE27DC980840178BD(L_9, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		int32_t L_19 = ___totalBits1;
		int32_t L_20 = ___wordSize2;
		V_3 = ((int32_t)(L_19%L_20));
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_21 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_21, NULL);
		V_4 = L_21;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_22 = V_4;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_22, 0, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_2;
		V_5 = L_24;
		V_6 = 0;
		goto IL_0072;
	}

IL_005b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_5;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_29 = V_4;
		int32_t L_30 = V_7;
		int32_t L_31 = ___wordSize2;
		NullCheck(L_29);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_29, L_30, L_31, NULL);
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0072:
	{
		int32_t L_33 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_5;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_35 = V_4;
		return L_35;
	}
}
// System.Int32[] ZXing.Aztec.Internal.Encoder::bitsToWords(ZXing.Common.BitArray,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Encoder_bitsToWords_m8C33CB301119283D80BBEBC75C27DAB639D6CFC3 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___stuffedBits0, int32_t ___wordSize1, int32_t ___totalWords2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		int32_t L_0 = ___totalWords2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_2 = ___stuffedBits0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_2, NULL);
		int32_t L_4 = ___wordSize1;
		V_2 = ((int32_t)(L_3/L_4));
		goto IL_004d;
	}

IL_0014:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_0040;
	}

IL_001b:
	{
		int32_t L_5 = V_3;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_6 = ___stuffedBits0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___wordSize1;
		int32_t L_9 = V_4;
		NullCheck(L_6);
		bool L_10;
		L_10 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, L_8)), L_9)), NULL);
		G_B3_0 = L_5;
		if (L_10)
		{
			G_B4_0 = L_5;
			goto IL_002d;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_002d:
	{
		int32_t L_11 = ___wordSize1;
		int32_t L_12 = V_4;
		G_B5_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), 1))&((int32_t)31)))));
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		V_3 = ((int32_t)(G_B5_1|G_B5_0));
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = ___wordSize1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_18);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004d:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		return L_22;
	}
}
// ZXing.Common.ReedSolomon.GenericGF ZXing.Aztec.Internal.Encoder::getGF(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939 (int32_t ___wordSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___wordSize0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 4)))
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_004c;
			}
			case 4:
			{
				goto IL_003a;
			}
			case 5:
			{
				goto IL_004c;
			}
			case 6:
			{
				goto IL_0040;
			}
			case 7:
			{
				goto IL_004c;
			}
			case 8:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_002e:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_1 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_PARAM_3;
		return L_1;
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_2 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_6_2;
		return L_2;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_3 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_8_6;
		return L_3;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_4 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_10_1;
		return L_4;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var);
		GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0* L_5 = ((GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_tC1D3778419A01F96902AA135CFAC8BBB7DAE8FE0_il2cpp_TypeInfo_var))->___AZTEC_DATA_12_0;
		return L_5;
	}

IL_004c:
	{
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___wordSize0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A6D141CD0B036C4E5A7B645E678A13005A9E0B7)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_getGF_m7810BB7858110F0120526691D09D6BB35CCCA939_RuntimeMethod_var)));
	}
}
// ZXing.Common.BitArray ZXing.Aztec.Internal.Encoder::stuffBits(ZXing.Common.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* Encoder_stuffBits_m2916FB84497706133ADE5BCE5EE151C0C6B53E06 (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___bits0, int32_t ___wordSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_0, NULL);
		V_0 = L_0;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_1 = ___bits0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = ___wordSize1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))), 2));
		V_3 = 0;
		goto IL_008c;
	}

IL_001a:
	{
		V_4 = 0;
		V_5 = 0;
		goto IL_004b;
	}

IL_0022:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_5;
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_7 = ___bits0;
		int32_t L_8 = V_3;
		int32_t L_9 = V_5;
		NullCheck(L_7);
		bool L_10;
		L_10 = BitArray_get_Item_m764F254169945ED18DD5495F05C791F5F985494A(L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0035:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = ___wordSize1;
		int32_t L_13 = V_5;
		V_4 = ((int32_t)(L_11|((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13))&((int32_t)31)))))));
	}

IL_0045:
	{
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004b:
	{
		int32_t L_15 = V_5;
		int32_t L_16 = ___wordSize1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)((int32_t)(L_17&L_18))) == ((uint32_t)L_19))))
		{
			goto IL_0068;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_20 = V_0;
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		int32_t L_23 = ___wordSize1;
		NullCheck(L_20);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_20, ((int32_t)(L_21&L_22)), L_23, NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_0088;
	}

IL_0068:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		if (((int32_t)(L_25&L_26)))
		{
			goto IL_007f;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_27 = V_0;
		int32_t L_28 = V_4;
		int32_t L_29 = ___wordSize1;
		NullCheck(L_27);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_27, ((int32_t)(L_28|1)), L_29, NULL);
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0088;
	}

IL_007f:
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_31 = V_0;
		int32_t L_32 = V_4;
		int32_t L_33 = ___wordSize1;
		NullCheck(L_31);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_31, L_32, L_33, NULL);
	}

IL_0088:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = ___wordSize1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_008c:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_001a;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_38 = V_0;
		return L_38;
	}
}
// System.Int32 ZXing.Aztec.Internal.Encoder::TotalBitsInLayer(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_TotalBitsInLayer_mE318C9C6A22D489BFA27D57B172F0D90EE4C0A90 (int32_t ___layers0, bool ___compact1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___compact1;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((int32_t)112);
		goto IL_0009;
	}

IL_0007:
	{
		G_B3_0 = ((int32_t)88);
	}

IL_0009:
	{
		int32_t L_1 = ___layers0;
		int32_t L_2 = ___layers0;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(G_B3_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), L_1)))), L_2));
	}
}
// System.Void ZXing.Aztec.Internal.Encoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__cctor_mE5A7AA7413722F76E2DF2346BF3C09C20EC424F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_243_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_243_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_tF8CF3658A0CAAFE9FF02FDDD59BF0F4B333ABAF5_il2cpp_TypeInfo_var))->___WORD_SIZE_4), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__cctor_m2D13A027FE9CB5856027F48B0A39977F1204496A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_49_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_56_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_63_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_79_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_82_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_117_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_345_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_7 = NULL;
	int32_t V_8 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___MODE_NAMES_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___MODE_NAMES_0), (void*)L_5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_6 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_49_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_9);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_11 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_82_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_13);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_15 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_117_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_17, L_18, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_17);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_19 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_56_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_21, L_22, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_21);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_23 = L_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_63_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_25, L_26, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_25);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE_6), (void*)L_23);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_27 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)5);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7), (void*)L_27);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_28 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)6);
		((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8), (void*)L_28);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_29 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_30);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_31 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_32);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_33 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_34);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_35 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_36);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_37 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_38);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_39 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_40);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_41 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_42);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_43 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_44);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_45 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_46);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_47 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_48);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_49 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(5), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_50);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_51 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_51);
		int32_t L_52 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_2 = ((int32_t)65);
		goto IL_017e;
	}

IL_016b:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_54 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_54);
		int32_t L_55 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		int32_t L_57 = V_2;
		int32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_58, ((int32_t)65))), 2)));
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_017e:
	{
		int32_t L_60 = V_2;
		if ((((int32_t)L_60) <= ((int32_t)((int32_t)90))))
		{
			goto IL_016b;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_61 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_61);
		int32_t L_62 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_3 = ((int32_t)97);
		goto IL_01a6;
	}

IL_0193:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_64 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_64);
		int32_t L_65 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_3;
		int32_t L_68 = V_3;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_68, ((int32_t)97))), 2)));
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01a6:
	{
		int32_t L_70 = V_3;
		if ((((int32_t)L_70) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0193;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_71 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_71);
		int32_t L_72 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_4 = ((int32_t)48);
		goto IL_01d3;
	}

IL_01bc:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_74 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_74);
		int32_t L_75 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = V_4;
		int32_t L_78 = V_4;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_78, ((int32_t)48))), 2)));
		int32_t L_79 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_01d3:
	{
		int32_t L_80 = V_4;
		if ((((int32_t)L_80) <= ((int32_t)((int32_t)57))))
		{
			goto IL_01bc;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_81 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_81);
		int32_t L_82 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)((int32_t)12));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_84 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_84);
		int32_t L_85 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)((int32_t)13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = L_87;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_89 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_79_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_88, L_89, NULL);
		V_0 = L_88;
		V_5 = 0;
		goto IL_021d;
	}

IL_0209:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_90 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_90);
		int32_t L_91 = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_0;
		int32_t L_94 = V_5;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		int32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		int32_t L_97 = V_5;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (int32_t)L_97);
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_021d:
	{
		int32_t L_99 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length)))))
		{
			goto IL_0209;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = L_101;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_103 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_345_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_102, L_103, NULL);
		V_1 = L_102;
		V_6 = 0;
		goto IL_0257;
	}

IL_023c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_1;
		int32_t L_105 = V_6;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_0251;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_108 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		NullCheck(L_108);
		int32_t L_109 = 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = V_1;
		int32_t L_112 = V_6;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = V_6;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (int32_t)L_115);
	}

IL_0251:
	{
		int32_t L_116 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_0257:
	{
		int32_t L_117 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_1;
		NullCheck(L_118);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
		{
			goto IL_023c;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_119 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		V_7 = L_119;
		V_8 = 0;
		goto IL_027b;
	}

IL_026a:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_120 = V_7;
		int32_t L_121 = V_8;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3(L_123, (-1), SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE4DDA7B2AD1A207562E44CF7F1952CA8CB8583B3_RuntimeMethod_var);
		int32_t L_124 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_027b:
	{
		int32_t L_125 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_126 = V_7;
		NullCheck(L_126);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)(((RuntimeArray*)L_126)->max_length)))))
		{
			goto IL_026a;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_127 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		NullCheck(L_127);
		int32_t L_128 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_130 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		NullCheck(L_130);
		int32_t L_131 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_133 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		NullCheck(L_133);
		int32_t L_134 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)28));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_136 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		NullCheck(L_136);
		int32_t L_137 = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_139 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		NullCheck(L_139);
		int32_t L_140 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_142 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		NullCheck(L_142);
		int32_t L_143 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)15));
		return;
	}
}
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m5D76513D10748A7055A27AFF6F123E5087088A08 (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___text0;
		__this->___text_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_9), (void*)L_0);
		__this->___encoding_10 = (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding_10), (void*)(Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL);
		__this->___disableEci_11 = (bool)0;
		return;
	}
}
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::.ctor(System.Byte[],System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m2CA74C9DAE3882C92342BE86DDFD1D3420827BED (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___text0;
		__this->___text_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_9), (void*)L_0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___encoding1;
		__this->___encoding_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding_10), (void*)L_1);
		__this->___disableEci_11 = (bool)0;
		return;
	}
}
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::.ctor(System.Byte[],System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m441599F8B6033F1BFE15EFB66192DBC39024885E (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___disableEci2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___text0;
		__this->___text_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_9), (void*)L_0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___encoding1;
		__this->___encoding_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding_10), (void*)L_1);
		bool L_2 = ___disableEci2;
		__this->___disableEci_11 = L_2;
		return;
	}
}
// ZXing.Common.BitArray ZXing.Aztec.Internal.HighLevelEncoder::encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_2 = NULL;
	CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	RuntimeObject* V_8 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_9 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B31_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_0 = ((State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields*)il2cpp_codegen_static_fields_for(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var))->___INITIAL_STATE_0;
		V_0 = L_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = __this->___encoding_10;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		bool L_2 = __this->___disableEci_11;
		if (L_2)
		{
			goto IL_004d;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = __this->___encoding_10;
		il2cpp_codegen_runtime_class_init_inline(CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56_il2cpp_TypeInfo_var);
		CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56* L_4;
		L_4 = CharacterSetECI_getCharacterSetECI_m83D6960F8B9B50A1C27C7B88CB397E0F250567CD(L_3, NULL);
		V_3 = L_4;
		CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56* L_5 = V_3;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = __this->___encoding_10;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Text.Encoding::get_WebName() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C040BFFD29AC6C9CD22396AB3049E61EABB1887)), L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HighLevelEncoder_encode_mA3BA7ECA8AEDD744D40C6136258D6253BF84F94C_RuntimeMethod_var)));
	}

IL_0040:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_10 = V_0;
		CharacterSetECI_t647220630FD1A94853404CEF31BCE8DF13F1CA56* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 ZXing.Common.ECI::get_Value() */, L_11);
		NullCheck(L_10);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_13;
		L_13 = State_appendFLGn_m7D1B2210FA421C493DE5BC8FBEE8C37E4968AEC0(L_10, L_12, NULL);
		V_0 = L_13;
	}

IL_004d:
	{
		Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3* L_14 = (Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3*)il2cpp_codegen_object_new(Collection_1_tFB81C33033CEC7A7360AD74DC190F6801446A9F3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9(L_14, Collection_1__ctor_mEFCFA9C3A001B40ACCD3A98FA215D51582A818F9_RuntimeMethod_var);
		V_1 = L_14;
		RuntimeObject* L_15 = V_1;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_16 = V_0;
		NullCheck(L_15);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_15, L_16);
		V_4 = 0;
		goto IL_0110;
	}

IL_0062:
	{
		int32_t L_17 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___text_9;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0073;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_007e;
	}

IL_0073:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___text_9;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		G_B9_0 = ((int32_t)(L_22));
	}

IL_007e:
	{
		V_6 = G_B9_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___text_9;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		uint8_t L_27 = V_7;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)44)))))
		{
			goto IL_009f;
		}
	}
	{
		uint8_t L_28 = V_7;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)13))))
		{
			goto IL_00ad;
		}
	}
	{
		uint8_t L_29 = V_7;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)44))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00e5;
	}

IL_009f:
	{
		uint8_t L_30 = V_7;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)46))))
		{
			goto IL_00bb;
		}
	}
	{
		uint8_t L_31 = V_7;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00e5;
	}

IL_00ad:
	{
		int32_t L_32 = V_6;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)10))))
		{
			goto IL_00b6;
		}
	}
	{
		G_B19_0 = 0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B19_0 = 2;
	}

IL_00b7:
	{
		V_5 = G_B19_0;
		goto IL_00e8;
	}

IL_00bb:
	{
		int32_t L_33 = V_6;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)32))))
		{
			goto IL_00c4;
		}
	}
	{
		G_B23_0 = 0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B23_0 = 3;
	}

IL_00c5:
	{
		V_5 = G_B23_0;
		goto IL_00e8;
	}

IL_00c9:
	{
		int32_t L_34 = V_6;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)32))))
		{
			goto IL_00d2;
		}
	}
	{
		G_B27_0 = 0;
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B27_0 = 4;
	}

IL_00d3:
	{
		V_5 = G_B27_0;
		goto IL_00e8;
	}

IL_00d7:
	{
		int32_t L_35 = V_6;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e0;
		}
	}
	{
		G_B31_0 = 0;
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B31_0 = 5;
	}

IL_00e1:
	{
		V_5 = G_B31_0;
		goto IL_00e8;
	}

IL_00e5:
	{
		V_5 = 0;
	}

IL_00e8:
	{
		int32_t L_36 = V_5;
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		RuntimeObject* L_37 = V_1;
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = HighLevelEncoder_updateStateListForPair_m8628AD1B6BDA02E6D62146D55DC7001745D5C03E(L_37, L_38, L_39, NULL);
		V_1 = L_40;
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_010a;
	}

IL_0100:
	{
		RuntimeObject* L_42 = V_1;
		int32_t L_43 = V_4;
		RuntimeObject* L_44;
		L_44 = HighLevelEncoder_updateStateListForChar_m02F5DE3465C2DC403F16E26DFA954AC446374E6D(__this, L_42, L_43, NULL);
		V_1 = L_44;
	}

IL_010a:
	{
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0110:
	{
		int32_t L_46 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___text_9;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		V_2 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)NULL;
		RuntimeObject* L_48 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>::GetEnumerator() */, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_48);
		V_8 = L_49;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0159:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_50 = V_8;
					if (!L_50)
					{
						goto IL_0164;
					}
				}
				{
					RuntimeObject* L_51 = V_8;
					NullCheck(L_51);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_51);
				}

IL_0164:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014e_1;
			}

IL_012b_1:
			{
				RuntimeObject* L_52 = V_8;
				NullCheck(L_52);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_53;
				L_53 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<ZXing.Aztec.Internal.State>::get_Current() */, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_52);
				V_9 = L_53;
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_54 = V_2;
				if (L_54)
				{
					goto IL_013c_1;
				}
			}
			{
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_55 = V_9;
				V_2 = L_55;
				goto IL_014e_1;
			}

IL_013c_1:
			{
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_56 = V_9;
				NullCheck(L_56);
				int32_t L_57;
				L_57 = State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline(L_56, NULL);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_58 = V_2;
				NullCheck(L_58);
				int32_t L_59;
				L_59 = State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline(L_58, NULL);
				if ((((int32_t)L_57) >= ((int32_t)L_59)))
				{
					goto IL_014e_1;
				}
			}
			{
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_60 = V_9;
				V_2 = L_60;
			}

IL_014e_1:
			{
				RuntimeObject* L_61 = V_8;
				NullCheck(L_61);
				bool L_62;
				L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_61);
				if (L_62)
				{
					goto IL_012b_1;
				}
			}
			{
				goto IL_0165;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0165:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_63 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___text_9;
		NullCheck(L_63);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_65;
		L_65 = State_toBitArray_m460830AE00C7651A6157FA35640FA51B827A10D6(L_63, L_64, NULL);
		return L_65;
	}
}
// System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State> ZXing.Aztec.Internal.HighLevelEncoder::updateStateListForChar(System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForChar_m02F5DE3465C2DC403F16E26DFA954AC446374E6D (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, RuntimeObject* ___states0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_2 = NULL;
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_0 = (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*)il2cpp_codegen_object_new(LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E(L_0, LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___states0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>::GetEnumerator() */, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_6;
				L_6 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<ZXing.Aztec.Internal.State>::get_Current() */, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_7 = V_2;
				int32_t L_8 = ___index1;
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_9 = V_0;
				HighLevelEncoder_updateStateForChar_mB0639E6B699D70BC04E9CB7A02D7A34F7558C0DA(__this, L_7, L_8, L_9, NULL);
			}

IL_001f_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B(L_12, NULL);
		return L_13;
	}
}
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::updateStateForChar(ZXing.Aztec.Internal.State,System.Int32,System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForChar_mB0639E6B699D70BC04E9CB7A02D7A34F7558C0DA (HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___state0, int32_t ___index1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_5 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_6 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___text_9;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int32_t)(uint16_t)((int32_t)((int32_t)L_3&((int32_t)255))));
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_5 = ___state0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_5, NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Il2CppChar L_9 = V_0;
		NullCheck(L_8);
		Il2CppChar L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		V_2 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)NULL;
		V_3 = 0;
		goto IL_0091;
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_12 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Il2CppChar L_16 = V_0;
		NullCheck(L_15);
		Il2CppChar L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_20 = V_2;
		if (L_20)
		{
			goto IL_0043;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_21 = ___state0;
		int32_t L_22 = ___index1;
		NullCheck(L_21);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_23;
		L_23 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_0043:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_25 = V_3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_26 = ___state0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_26, NULL);
		if ((((int32_t)L_25) == ((int32_t)L_27)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0066;
		}
	}

IL_0053:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		NullCheck(L_29);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_32;
		L_32 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_29, L_30, L_31, NULL);
		V_5 = L_32;
		RuntimeObject* L_33 = ___result2;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_34 = V_5;
		NullCheck(L_33);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_33, L_34);
	}

IL_0066:
	{
		bool L_35 = V_1;
		if (L_35)
		{
			goto IL_008d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_36 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_37 = ___state0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_37, NULL);
		NullCheck(L_36);
		int32_t L_39 = L_38;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_44 = V_2;
		int32_t L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_44);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_47;
		L_47 = State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503(L_44, L_45, L_46, NULL);
		V_6 = L_47;
		RuntimeObject* L_48 = ___result2;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_49 = V_6;
		NullCheck(L_48);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_48, L_49);
	}

IL_008d:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) <= ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_52 = ___state0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline(L_52, NULL);
		if ((((int32_t)L_53) > ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_54 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___CHAR_MAP_7;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_55 = ___state0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_55, NULL);
		NullCheck(L_54);
		int32_t L_57 = L_56;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Il2CppChar L_59 = V_0;
		NullCheck(L_58);
		Il2CppChar L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if (L_61)
		{
			goto IL_00bf;
		}
	}

IL_00ae:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_62 = ___state0;
		int32_t L_63 = ___index1;
		NullCheck(L_62);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_64;
		L_64 = State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4(L_62, L_63, NULL);
		V_7 = L_64;
		RuntimeObject* L_65 = ___result2;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_66 = V_7;
		NullCheck(L_65);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_65, L_66);
	}

IL_00bf:
	{
		return;
	}
}
// System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State> ZXing.Aztec.Internal.HighLevelEncoder::updateStateListForPair(System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForPair_m8628AD1B6BDA02E6D62146D55DC7001745D5C03E (RuntimeObject* ___states0, int32_t ___index1, int32_t ___pairCode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_0 = (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*)il2cpp_codegen_object_new(LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E(L_0, LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___states0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>::GetEnumerator() */, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001d_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_6;
				L_6 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<ZXing.Aztec.Internal.State>::get_Current() */, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_5);
				int32_t L_7 = ___index1;
				int32_t L_8 = ___pairCode2;
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_9 = V_0;
				il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
				HighLevelEncoder_updateStateForPair_mD9DA25C1DD807D847C415C35D29A1A8618EDDF3C(L_6, L_7, L_8, L_9, NULL);
			}

IL_001d_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0031;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B(L_12, NULL);
		return L_13;
	}
}
// System.Void ZXing.Aztec.Internal.HighLevelEncoder::updateStateForPair(ZXing.Aztec.Internal.State,System.Int32,System.Int32,System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForPair_mD9DA25C1DD807D847C415C35D29A1A8618EDDF3C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___state0, int32_t ___index1, int32_t ___pairCode2, RuntimeObject* ___result3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_0 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_1 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_2 = NULL;
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_0 = ___state0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_2;
		L_2 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(L_0, L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___result3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_4 = V_0;
		int32_t L_5 = ___pairCode2;
		NullCheck(L_4);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_6;
		L_6 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_4, 4, L_5, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_3, L_6);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_7 = ___state0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_9 = ___result3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_10 = V_0;
		int32_t L_11 = ___pairCode2;
		NullCheck(L_10);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_12;
		L_12 = State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503(L_10, 4, L_11, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_9, L_12);
	}

IL_002d:
	{
		int32_t L_13 = ___pairCode2;
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_14 = ___pairCode2;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_004f;
		}
	}

IL_0035:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_15 = V_0;
		int32_t L_16 = ___pairCode2;
		NullCheck(L_15);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_17;
		L_17 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_15, 2, ((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_16)), NULL);
		NullCheck(L_17);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_18;
		L_18 = State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C(L_17, 2, 1, NULL);
		V_1 = L_18;
		RuntimeObject* L_19 = ___result3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_20 = V_1;
		NullCheck(L_19);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_004f:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_21 = ___state0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_23 = ___state0;
		int32_t L_24 = ___index1;
		NullCheck(L_23);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_25;
		L_25 = State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4(L_23, L_24, NULL);
		int32_t L_26 = ___index1;
		NullCheck(L_25);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_27;
		L_27 = State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		V_2 = L_27;
		RuntimeObject* L_28 = ___result3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_29 = V_2;
		NullCheck(L_28);
		InterfaceActionInvoker1< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State>::Add(T) */, ICollection_1_tC7DD35484E4CF704F4943DBAEA692F1BB5FC4CF5_il2cpp_TypeInfo_var, L_28, L_29);
	}

IL_006f:
	{
		return;
	}
}
// System.Collections.Generic.ICollection`1<ZXing.Aztec.Internal.State> ZXing.Aztec.Internal.HighLevelEncoder::simplifyStates(System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_simplifyStates_m982AF46EB6F0274E3D39FE8C2FC4E045660B972B (RuntimeObject* ___states0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddFirst_m1991E1ABD2C38EEF91EAB3729074317A31017A52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* V_0 = NULL;
	List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_3 = NULL;
	bool V_4 = false;
	Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D V_5;
	memset((&V_5), 0, sizeof(V_5));
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_6 = NULL;
	Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC V_7;
	memset((&V_7), 0, sizeof(V_7));
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_8 = NULL;
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_0 = (LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145*)il2cpp_codegen_object_new(LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E(L_0, LinkedList_1__ctor_m819F8937F5B0DDAF5405E5C8368131FB3E14215E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_1 = (List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797*)il2cpp_codegen_object_new(List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB(L_1, List_1__ctor_m9A4ECE45E618A9ECCEFFB1238D602846ED65CBCB_RuntimeMethod_var);
		V_1 = L_1;
		RuntimeObject* L_2 = ___states0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ZXing.Aztec.Internal.State>::GetEnumerator() */, IEnumerable_1_t67FDC3F1C5665F4690AE55B55AF2164C58361D29_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c3:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_00cc;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_00cc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b6_1;
			}

IL_0018_1:
			{
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_7;
				L_7 = InterfaceFuncInvoker0< State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<ZXing.Aztec.Internal.State>::get_Current() */, IEnumerator_1_t18405044ECA642A2A012421D3465557EAE876383_il2cpp_TypeInfo_var, L_6);
				V_3 = L_7;
				V_4 = (bool)1;
				List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_8 = V_1;
				NullCheck(L_8);
				List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_inline(L_8, List_1_Clear_m8EF78FF0F61C840189C1D984D94640875848FD0E_RuntimeMethod_var);
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_9 = V_0;
				NullCheck(L_9);
				Enumerator_t42B587EBBDE51F0BBA26E4AF9B0777B8940A4A6D L_10;
				L_10 = LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5(L_9, LinkedList_1_GetEnumerator_m594ECE72AB487FC1A61344B4BBF168057A2004C5_RuntimeMethod_var);
				V_5 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0067_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8((&V_5), Enumerator_Dispose_m919D800AE959E626F6852A5973F9717DD6972AF8_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_005c_2;
					}

IL_0032_2:
					{
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_11;
						L_11 = Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_inline((&V_5), Enumerator_get_Current_m2834ED4F986309D222B713E76BEC546C5582E77E_RuntimeMethod_var);
						V_6 = L_11;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_12 = V_6;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_13 = V_3;
						NullCheck(L_12);
						bool L_14;
						L_14 = State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300(L_12, L_13, NULL);
						if (!L_14)
						{
							goto IL_004a_2;
						}
					}
					{
						V_4 = (bool)0;
						goto IL_0075_1;
					}

IL_004a_2:
					{
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_15 = V_3;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_16 = V_6;
						NullCheck(L_15);
						bool L_17;
						L_17 = State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300(L_15, L_16, NULL);
						if (!L_17)
						{
							goto IL_005c_2;
						}
					}
					{
						List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_18 = V_1;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_19 = V_6;
						NullCheck(L_18);
						List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_inline(L_18, L_19, List_1_Add_mEEFA0682FF21B1AD6209A6CEE2692423676C0DE2_RuntimeMethod_var);
					}

IL_005c_2:
					{
						bool L_20;
						L_20 = Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1((&V_5), Enumerator_MoveNext_m28B442E01581BF12D5FCD336A7EDC5B06557C5F1_RuntimeMethod_var);
						if (L_20)
						{
							goto IL_0032_2;
						}
					}
					{
						goto IL_0075_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0075_1:
			{
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0081_1;
				}
			}
			{
				LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_22 = V_0;
				State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_23 = V_3;
				NullCheck(L_22);
				LinkedListNode_1_t868B5B668FA10D75098353B530C3B5CDE3AD8E71* L_24;
				L_24 = LinkedList_1_AddFirst_m1991E1ABD2C38EEF91EAB3729074317A31017A52(L_22, L_23, LinkedList_1_AddFirst_m1991E1ABD2C38EEF91EAB3729074317A31017A52_RuntimeMethod_var);
			}

IL_0081_1:
			{
				List_1_t1AABFC3B5EEE46245A3BB79960A7AC9499F26797* L_25 = V_1;
				NullCheck(L_25);
				Enumerator_tBF7DE20FF2E7F3C57F8C9F8EFBE6CD0ED5D513AC L_26;
				L_26 = List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479(L_25, List_1_GetEnumerator_m23D8CEB4D54B73CD12D4987C6B682FAEB4966479_RuntimeMethod_var);
				V_7 = L_26;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a8_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C((&V_7), Enumerator_Dispose_mC8A1C43E022AEED5D184DBFF0341EEA142AFBA4C_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_009d_2;
					}

IL_008b_2:
					{
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_27;
						L_27 = Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_inline((&V_7), Enumerator_get_Current_m79F5915848267C47D94B643711512694201CE1A1_RuntimeMethod_var);
						V_8 = L_27;
						LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_28 = V_0;
						State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_29 = V_8;
						NullCheck(L_28);
						bool L_30;
						L_30 = LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF(L_28, L_29, LinkedList_1_Remove_mD556C19EC89E137F75116D2DBE8636E7DCFFD7BF_RuntimeMethod_var);
					}

IL_009d_2:
					{
						bool L_31;
						L_31 = Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4((&V_7), Enumerator_MoveNext_mA7B575B7C368C0E65640C751580B7BF5C32C26B4_RuntimeMethod_var);
						if (L_31)
						{
							goto IL_008b_2;
						}
					}
					{
						goto IL_00b6_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b6_1:
			{
				RuntimeObject* L_32 = V_2;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_00cd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cd:
	{
		LinkedList_1_t3993F3C99B0CF4582BD15A2DC9080FD181434145* L_34 = V_0;
		return L_34;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Aztec.Internal.SimpleToken::.ctor(ZXing.Aztec.Internal.Token,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7 (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous0, int32_t ___value1, int32_t ___bitCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ___previous0;
		il2cpp_codegen_runtime_class_init_inline(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		Token__ctor_mFDE0BE419E2FC1E770C533C60F8DEEC691D87517(__this, L_0, NULL);
		int32_t L_1 = ___value1;
		__this->___value_2 = ((int16_t)L_1);
		int32_t L_2 = ___bitCount2;
		__this->___bitCount_3 = ((int16_t)L_2);
		return;
	}
}
// System.Void ZXing.Aztec.Internal.SimpleToken::appendTo(ZXing.Common.BitArray,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken_appendTo_m715C9E07F3660009FED256B016EB303C9B515DC1 (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___bitArray0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text1, const RuntimeMethod* method) 
{
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_0 = ___bitArray0;
		int16_t L_1 = __this->___value_2;
		int16_t L_2 = __this->___bitCount_3;
		NullCheck(L_0);
		BitArray_appendBits_m43E273544F0AF0DA472C992D5584E2BD5F76A592(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.String ZXing.Aztec.Internal.SimpleToken::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleToken_ToString_m87208A9FB8CD554BB9DC386892776D5877FEEF4B (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int16_t L_0 = __this->___value_2;
		int16_t L_1 = __this->___bitCount_3;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_1&((int32_t)31))))), 1))));
		int32_t L_2 = V_0;
		int16_t L_3 = __this->___bitCount_3;
		V_0 = ((int32_t)(L_2|((int32_t)(1<<((int32_t)((int32_t)L_3&((int32_t)31)))))));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->___bitCount_3;
		String_t* L_6;
		L_6 = SupportClass_ToBinaryString_m6286E8FF516C5C02AAF1F713E215B1073079FFD3(((int32_t)(L_4|((int32_t)(1<<((int32_t)((int32_t)L_5&((int32_t)31))))))), NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, 1, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_7, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Aztec.Internal.State::.ctor(ZXing.Aztec.Internal.Token,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___token0, int32_t ___mode1, int32_t ___binaryBytes2, int32_t ___bitCount3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ___token0;
		__this->___token_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_2), (void*)L_0);
		int32_t L_1 = ___mode1;
		__this->___mode_1 = L_1;
		int32_t L_2 = ___binaryBytes2;
		__this->___binaryShiftByteCount_3 = L_2;
		int32_t L_3 = ___bitCount3;
		__this->___bitCount_4 = L_3;
		int32_t L_4 = ___binaryBytes2;
		il2cpp_codegen_runtime_class_init_inline(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = State_calculateBinaryShiftCost_mB2A0B27B8824FA85E69EB47CEEB29D89DF305793(L_4, NULL);
		__this->___binaryShiftCost_5 = L_5;
		return;
	}
}
// System.Int32 ZXing.Aztec.Internal.State::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mode_1;
		return L_0;
	}
}
// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.State::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* State_get_Token_mF195C26E4E990EF946988A97FA2BFB87A7B39C28 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___token_2;
		return L_0;
	}
}
// System.Int32 ZXing.Aztec.Internal.State::get_BinaryShiftByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___binaryShiftByteCount_3;
		return L_0;
	}
}
// System.Int32 ZXing.Aztec.Internal.State::get_BitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___bitCount_4;
		return L_0;
	}
}
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::appendFLGn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_appendFLGn_m7D1B2210FA421C493DE5BC8FBEE8C37E4968AEC0 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___eci0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_0;
		L_0 = State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503(__this, 4, 0, NULL);
		NullCheck(L_0);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_1 = L_0->___token_2;
		V_0 = L_1;
		V_1 = 3;
		int32_t L_2 = ___eci0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_3 = V_0;
		NullCheck(L_3);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_4;
		L_4 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_3, 0, 3, NULL);
		V_0 = L_4;
		goto IL_0075;
	}

IL_001f:
	{
		int32_t L_5 = ___eci0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)999999))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD5C8785DD5916B8669E67C2A4B9435344A3846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&State_appendFLGn_m7D1B2210FA421C493DE5BC8FBEE8C37E4968AEC0_RuntimeMethod_var)));
	}

IL_0032:
	{
		il2cpp_codegen_runtime_class_init_inline(AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ((AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_StaticFields*)il2cpp_codegen_static_fields_for(AztecWriter_t9A1722AD048488346CD7F27865FB8D21A7495252_il2cpp_TypeInfo_var))->___DEFAULT_CHARSET_0;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___eci0), NULL);
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, L_8);
		V_2 = L_9;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_11);
		NullCheck(L_10);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_12;
		L_12 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), 3, NULL);
		V_0 = L_12;
		V_3 = 0;
		goto IL_0067;
	}

IL_0053:
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_18;
		L_18 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_13, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, ((int32_t)48))), 2)), 4, NULL);
		V_0 = L_18;
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0067:
	{
		int32_t L_20 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_23)->max_length)), 4))));
	}

IL_0075:
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_24 = V_0;
		int32_t L_25 = __this->___mode_1;
		int32_t L_26 = __this->___bitCount_4;
		int32_t L_27 = V_1;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_28 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_28, L_24, L_25, 0, ((int32_t)il2cpp_codegen_add(L_26, L_27)), NULL);
		return L_28;
	}
}
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::latchAndAppend(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_latchAndAppend_mE55C3059484238FFB5074D570DBCACE32F6BC97C (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___mode0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___bitCount_4;
		V_0 = L_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_1 = __this->___token_2;
		V_1 = L_1;
		int32_t L_2 = ___mode0;
		int32_t L_3 = __this->___mode_1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE_6;
		int32_t L_5 = __this->___mode_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___mode0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_11 = V_1;
		int32_t L_12 = V_3;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_14;
		L_14 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_11, ((int32_t)(L_12&((int32_t)65535))), ((int32_t)(L_13>>((int32_t)16))), NULL);
		V_1 = L_14;
		int32_t L_15 = V_0;
		int32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(L_16>>((int32_t)16)))));
	}

IL_003f:
	{
		int32_t L_17 = ___mode0;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 5;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 4;
	}

IL_0047:
	{
		V_2 = G_B5_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_18 = V_1;
		int32_t L_19 = ___value1;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_21;
		L_21 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_18, L_19, L_20, NULL);
		V_1 = L_21;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_22 = V_1;
		int32_t L_23 = ___mode0;
		int32_t L_24 = V_0;
		int32_t L_25 = V_2;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_26 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_26, L_22, L_23, 0, ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		return L_26;
	}
}
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::shiftAndAppend(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_shiftAndAppend_m5BEAC669B35425547C1C107C3B317FB78120F503 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___mode0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* G_B2_0 = NULL;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* G_B3_1 = NULL;
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___token_2;
		int32_t L_1 = __this->___mode_1;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 5;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_2 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___SHIFT_TABLE_8;
		int32_t L_3 = __this->___mode_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___mode0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_0;
		NullCheck(G_B3_1);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_10;
		L_10 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(G_B3_1, L_8, L_9, NULL);
		int32_t L_11 = ___value1;
		NullCheck(L_10);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_12;
		L_12 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_10, L_11, 5, NULL);
		int32_t L_13 = __this->___mode_1;
		int32_t L_14 = __this->___bitCount_4;
		int32_t L_15 = V_0;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_16 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_16, L_12, L_13, 0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), 5)), NULL);
		return L_16;
	}
}
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::addBinaryShiftChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_addBinaryShiftChar_mB4EACA49074103F41E90EF3F8B2936D1DA09D9D4 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B9_0 = 0;
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___token_2;
		V_0 = L_0;
		int32_t L_1 = __this->___mode_1;
		V_1 = L_1;
		int32_t L_2 = __this->___bitCount_4;
		V_2 = L_2;
		int32_t L_3 = __this->___mode_1;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = __this->___mode_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_5 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE_6;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_11 = V_0;
		int32_t L_12 = V_5;
		int32_t L_13 = V_5;
		NullCheck(L_11);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_14;
		L_14 = Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8(L_11, ((int32_t)(L_12&((int32_t)65535))), ((int32_t)(L_13>>((int32_t)16))), NULL);
		V_0 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(L_16>>((int32_t)16)))));
		V_1 = 0;
	}

IL_0050:
	{
		int32_t L_17 = __this->___binaryShiftByteCount_3;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_18 = __this->___binaryShiftByteCount_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)31))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_19 = __this->___binaryShiftByteCount_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)62))))
		{
			goto IL_006f;
		}
	}
	{
		G_B9_0 = 8;
		goto IL_0075;
	}

IL_006f:
	{
		G_B9_0 = ((int32_t)9);
		goto IL_0075;
	}

IL_0073:
	{
		G_B9_0 = ((int32_t)18);
	}

IL_0075:
	{
		V_3 = G_B9_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = __this->___binaryShiftByteCount_3;
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_25 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_25, L_20, L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), ((int32_t)il2cpp_codegen_add(L_23, L_24)), NULL);
		V_4 = L_25;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = L_26->___binaryShiftByteCount_3;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)2078)))))
		{
			goto IL_00a4;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_28 = V_4;
		int32_t L_29 = ___index0;
		NullCheck(L_28);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_30;
		L_30 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		V_4 = L_30;
	}

IL_00a4:
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_31 = V_4;
		return L_31;
	}
}
// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::endBinaryShift(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___binaryShiftByteCount_3;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_1 = __this->___token_2;
		int32_t L_2 = ___index0;
		int32_t L_3 = __this->___binaryShiftByteCount_3;
		int32_t L_4 = __this->___binaryShiftByteCount_3;
		NullCheck(L_1);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_5;
		L_5 = Token_addBinaryShift_mC69E5C1F383C76DF19B9D993F453370ED8F68EC7(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), L_4, NULL);
		int32_t L_6 = __this->___mode_1;
		int32_t L_7 = __this->___bitCount_4;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_8 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_8, L_5, L_6, 0, L_7, NULL);
		return L_8;
	}
}
// System.Boolean ZXing.Aztec.Internal.State::isBetterThanOrEqualTo(ZXing.Aztec.Internal.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_isBetterThanOrEqualTo_mB2A3638216A643530BFF3717A7EF7FD2EC236300 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitCount_4;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___LATCH_TABLE_6;
		int32_t L_2 = __this->___mode_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___mode_1;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_8>>((int32_t)16)))));
		int32_t L_9 = __this->___binaryShiftByteCount_3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_10 = ___other0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___binaryShiftByteCount_3;
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_0;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_13 = ___other0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___binaryShiftCost_5;
		int32_t L_15 = __this->___binaryShiftCost_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_subtract(L_14, L_15))));
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_16 = __this->___binaryShiftByteCount_3;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_17 = ___other0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___binaryShiftByteCount_3;
		if ((((int32_t)L_16) <= ((int32_t)L_18)))
		{
			goto IL_005a;
		}
	}
	{
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_19 = ___other0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___binaryShiftByteCount_3;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)10)));
	}

IL_005a:
	{
		int32_t L_22 = V_0;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_23 = ___other0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___bitCount_4;
		return (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// ZXing.Common.BitArray ZXing.Aztec.Internal.State::toBitArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* State_toBitArray_m460830AE00C7651A6157FA35640FA51B827A10D6 (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5711235BA91B72A61B3F921E50A6F613E79856D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC0783EF65F5CE032B578CD6D6B6E89FCA7B3E2D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m54D2DC498BD296098BCCE83FC87F5AF6B3FD03D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m56DE0B297592490F29C1FB89324822D51FFC11AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* V_0 = NULL;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_1 = NULL;
	Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* V_2 = NULL;
	int32_t V_3 = 0;
	{
		List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* L_0 = (List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924*)il2cpp_codegen_object_new(List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC0783EF65F5CE032B578CD6D6B6E89FCA7B3E2D9(L_0, List_1__ctor_mC0783EF65F5CE032B578CD6D6B6E89FCA7B3E2D9_RuntimeMethod_var);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___text0;
		NullCheck(L_1);
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_2;
		L_2 = State_endBinaryShift_mF03B4CF10D15C21B454C42E57FEFEEE9487F3CAA(__this, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_2);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_3 = L_2->___token_2;
		V_2 = L_3;
		goto IL_0025;
	}

IL_0017:
	{
		List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* L_4 = V_0;
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_5 = V_2;
		NullCheck(L_4);
		List_1_Add_m5711235BA91B72A61B3F921E50A6F613E79856D0_inline(L_4, L_5, List_1_Add_m5711235BA91B72A61B3F921E50A6F613E79856D0_RuntimeMethod_var);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_6 = V_2;
		NullCheck(L_6);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_7;
		L_7 = Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D_inline(L_6, NULL);
		V_2 = L_7;
	}

IL_0025:
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_8 = V_2;
		if (L_8)
		{
			goto IL_0017;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_9 = (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)il2cpp_codegen_object_new(BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BitArray__ctor_mF83850FDAA5CF98487FFDD1D29DDB8F3831C7AC4(L_9, NULL);
		V_1 = L_9;
		List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m54D2DC498BD296098BCCE83FC87F5AF6B3FD03D2_inline(L_10, List_1_get_Count_m54D2DC498BD296098BCCE83FC87F5AF6B3FD03D2_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_004b;
	}

IL_0039:
	{
		List_1_tAB045D72F9A23149DD34C7E20C4938D2C4BDF924* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_14;
		L_14 = List_1_get_Item_m56DE0B297592490F29C1FB89324822D51FFC11AE(L_12, L_13, List_1_get_Item_m56DE0B297592490F29C1FB89324822D51FFC11AE_RuntimeMethod_var);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___text0;
		NullCheck(L_14);
		VirtualActionInvoker2< BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Void ZXing.Aztec.Internal.Token::appendTo(ZXing.Common.BitArray,System.Byte[]) */, L_14, L_15, L_16);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_004b:
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_19 = V_1;
		return L_19;
	}
}
// System.String ZXing.Aztec.Internal.State::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* State_ToString_m5908CA9A1AE40EA4884F95D79492F82C273F09BD (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t953AD8AD9CE4B860473AB7AC26B6FB87E81963AE_il2cpp_TypeInfo_var))->___MODE_NAMES_0;
		int32_t L_1 = __this->___mode_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->___bitCount_4;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = __this->___binaryShiftByteCount_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852, L_3, L_6, L_9, NULL);
		return L_10;
	}
}
// System.Int32 ZXing.Aztec.Internal.State::calculateBinaryShiftCost(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_calculateBinaryShiftCost_mB2A0B27B8824FA85E69EB47CEEB29D89DF305793 (int32_t ___binaryShiftByteCount0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___binaryShiftByteCount0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)62))))
		{
			goto IL_0008;
		}
	}
	{
		return ((int32_t)21);
	}

IL_0008:
	{
		int32_t L_1 = ___binaryShiftByteCount0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0010;
		}
	}
	{
		return ((int32_t)20);
	}

IL_0010:
	{
		int32_t L_2 = ___binaryShiftByteCount0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		return ((int32_t)10);
	}

IL_0017:
	{
		return 0;
	}
}
// System.Void ZXing.Aztec.Internal.State::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__cctor_mE913F19C88B8D114D38343BD9E61EEAEC17AE842 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ((Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields*)il2cpp_codegen_static_fields_for(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var))->___EMPTY_0;
		State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* L_1 = (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E*)il2cpp_codegen_object_new(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		State__ctor_m8D6760502E0C8B8DA1B4430C3323F43B49AD9DC7(L_1, L_0, 0, 0, 0, NULL);
		((State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields*)il2cpp_codegen_static_fields_for(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var))->___INITIAL_STATE_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_StaticFields*)il2cpp_codegen_static_fields_for(State_tE3C6505B0E83E2D10113F91E853B22093CD5273E_il2cpp_TypeInfo_var))->___INITIAL_STATE_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Aztec.Internal.Token::.ctor(ZXing.Aztec.Internal.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_mFDE0BE419E2FC1E770C533C60F8DEEC691D87517 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* ___previous0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = ___previous0;
		__this->___previous_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previous_1), (void*)L_0);
		return;
	}
}
// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::get_Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, const RuntimeMethod* method) 
{
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___previous_1;
		return L_0;
	}
}
// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::add(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_add_mF712DBB720C4ACBEEB9BFE2CA92071BB9AB128E8 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___value0, int32_t ___bitCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___bitCount1;
		SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* L_2 = (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97*)il2cpp_codegen_object_new(SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7(L_2, __this, L_0, L_1, NULL);
		return L_2;
	}
}
// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::addBinaryShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_addBinaryShift_mC69E5C1F383C76DF19B9D993F453370ED8F68EC7 (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, int32_t ___start0, int32_t ___byteCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___byteCount1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)31))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___byteCount1;
	}

IL_000a:
	{
		int32_t L_2 = ___start0;
		int32_t L_3 = ___byteCount1;
		BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110* L_4 = (BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110*)il2cpp_codegen_object_new(BinaryShiftToken_tF00867DA2F606FB742C40FC8C796FB97BEC9D110_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BinaryShiftToken__ctor_mF0B49C7EEB62FE53EFBEA25C6A20C81C1BE41339(L_4, __this, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void ZXing.Aztec.Internal.Token::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__cctor_m273C57C3A884D6AFA7665F713B808AD851C779EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97* L_0 = (SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97*)il2cpp_codegen_object_new(SimpleToken_t417BD3C70DE297B4B31B270E5AD591FDC7F4EF97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SimpleToken__ctor_m851DEE60A78CB01A090350AEF5CF974AA7E5D0A7(L_0, (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502*)NULL, 0, 0, NULL);
		((Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields*)il2cpp_codegen_static_fields_for(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var))->___EMPTY_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_StaticFields*)il2cpp_codegen_static_fields_for(Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502_il2cpp_TypeInfo_var))->___EMPTY_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_mF3C33E0EFDA88B1A3580AF3AE3A8CB8E88DF9BE1_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m687DD1BCEBF71A02500780F4D6A17FF40DE314F8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_mB8DC20D7D73CEFC50A80F62AB29890940B3F874B_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CXU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m256E53785249359876C09797EEBC8E8DA55E47E8_inline (Point_t3F5485848BD38586BA60ECD046C6AE59B4BF355A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CYU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitArray_get_Size_m6E85006F84595438261D8BB2861B38470075A4B9_inline (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mEA109DBE1E4632CCABC8FE6CA701948C6794AD01_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CisCompactU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Size_m0CA46D7572CEE88A5AFD5D3D0F1EEF7C96EEC646_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m93A7FD4EC1C095E5B2D09718205E25F0D2A5E1B2_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLayersU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m67A81A3769CEA2C80EEE65C2268E9D61547F4250_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeWordsU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_mF2BCFE42A0D554A00944953AE84748491372E558_inline (AztecCode_t74318D55F7949A062DF5E32668228382AC8BC366* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___value0, const RuntimeMethod* method) 
{
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___value0;
		__this->___U3CMatrixU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatrixU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m374653FBA64911E8466874979251DD8E14DA6F21_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___bitCount_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_Mode_m1A50CAC7A93671515A0BD605C6F1ABEFDD0D0964_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mode_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_mAF226194E9D6F96EC8ADC2E6CD2B77B98BA67460_inline (State_tE3C6505B0E83E2D10113F91E853B22093CD5273E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___binaryShiftByteCount_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* Token_get_Previous_mAC3BE6538F07E6CB57CF3632E72EB4E0AA4AED5D_inline (Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* __this, const RuntimeMethod* method) 
{
	{
		Token_tD4138542C2C392BA19F53DE6E3207E15ABC11502* L_0 = __this->___previous_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
