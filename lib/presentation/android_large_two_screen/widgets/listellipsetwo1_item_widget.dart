import '../controller/android_large_two_controller.dart';
import '../models/listellipsetwo1_item_model.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';

// ignore: must_be_immutable
class Listellipsetwo1ItemWidget extends StatelessWidget {
  Listellipsetwo1ItemWidget(this.listellipsetwo1ItemModelObj);

  Listellipsetwo1ItemModel listellipsetwo1ItemModelObj;

  var controller = Get.find<AndroidLargeTwoController>();

  @override
  Widget build(BuildContext context) {
    return Align(
      alignment: Alignment.center,
      child: Container(
        decoration: AppDecoration.outlineBluegray7007f,
        child: Row(
          crossAxisAlignment: CrossAxisAlignment.start,
          mainAxisSize: MainAxisSize.max,
          children: [
            Padding(
              padding: getPadding(
                top: 12,
                bottom: 12,
              ),
              child: Row(
                crossAxisAlignment: CrossAxisAlignment.start,
                mainAxisSize: MainAxisSize.max,
                children: [
                  ClipRRect(
                    borderRadius: BorderRadius.circular(
                      getHorizontalSize(
                        26.00,
                      ),
                    ),
                    child: CommonImageView(
                      imagePath: ImageConstant.imgEllipse21x52,
                      height: getSize(
                        52.00,
                      ),
                      width: getSize(
                        52.00,
                      ),
                      fit: BoxFit.cover,
                    ),
                  ),
                  Padding(
                    padding: getPadding(
                      left: 12,
                      top: 3,
                      bottom: 5,
                    ),
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      crossAxisAlignment: CrossAxisAlignment.start,
                      mainAxisAlignment: MainAxisAlignment.start,
                      children: [
                        Text(
                          "msg_cameron_williamson".tr,
                          overflow: TextOverflow.ellipsis,
                          textAlign: TextAlign.left,
                          style: AppStyle.txtGDSTransportWebsiteBold16,
                        ),
                        Padding(
                          padding: getPadding(
                            top: 1,
                            right: 10,
                          ),
                          child: Text(
                            "lbl_hi_there".tr,
                            overflow: TextOverflow.ellipsis,
                            textAlign: TextAlign.left,
                            style: AppStyle.txtGDSTransportWebsite14,
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),
            Padding(
              padding: getPadding(
                left: 79,
                top: 11,
                bottom: 44,
              ),
              child: Text(
                "lbl_14_32".tr,
                overflow: TextOverflow.ellipsis,
                textAlign: TextAlign.left,
                style: AppStyle.txtGDSTransportWebsite14,
              ),
            ),
          ],
        ),
      ),
    );
  }
}
