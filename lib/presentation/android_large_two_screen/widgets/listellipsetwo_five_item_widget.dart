import '../controller/android_large_two_controller.dart';
import '../models/listellipsetwo_five_item_model.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';

// ignore: must_be_immutable
class ListellipsetwoFiveItemWidget extends StatelessWidget {
  ListellipsetwoFiveItemWidget(this.listellipsetwoFiveItemModelObj);

  ListellipsetwoFiveItemModel listellipsetwoFiveItemModelObj;

  var controller = Get.find<AndroidLargeTwoController>();

  @override
  Widget build(BuildContext context) {
    return Container(
      decoration: AppDecoration.outlineBluegray7007f,
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.center,
        mainAxisSize: MainAxisSize.max,
        children: [
          Padding(
            padding: getPadding(
              top: 20,
              bottom: 20,
            ),
            child: ClipRRect(
              borderRadius: BorderRadius.circular(
                getHorizontalSize(
                  26.00,
                ),
              ),
              child: CommonImageView(
                imagePath: ImageConstant.imgEllipse27,
                height: getSize(
                  52.00,
                ),
                width: getSize(
                  52.00,
                ),
                fit: BoxFit.cover,
              ),
            ),
          ),
          Padding(
            padding: getPadding(
              left: 12,
              top: 24,
              right: 148,
              bottom: 25,
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Padding(
                  padding: getPadding(
                    right: 10,
                  ),
                  child: Text(
                    "lbl_arlene_mccoy".tr,
                    overflow: TextOverflow.ellipsis,
                    textAlign: TextAlign.left,
                    style: AppStyle.txtGDSTransportWebsiteBold16,
                  ),
                ),
                Padding(
                  padding: getPadding(
                    top: 1,
                  ),
                  child: Text(
                    "msg_91_999_2222_433".tr,
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
    );
  }
}
