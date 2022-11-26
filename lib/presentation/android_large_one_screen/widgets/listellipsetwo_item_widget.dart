import '../controller/android_large_one_controller.dart';
import '../models/listellipsetwo_item_model.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/theme/app_decoration.dart';
import 'package:get/get.dart';

// ignore: must_be_immutable
class ListellipsetwoItemWidget extends StatelessWidget {
  ListellipsetwoItemWidget(this.listellipsetwoItemModelObj);

  ListellipsetwoItemModel listellipsetwoItemModelObj;

  var controller = Get.find<AndroidLargeOneController>();

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
            child: Row(
              crossAxisAlignment: CrossAxisAlignment.center,
              mainAxisSize: MainAxisSize.max,
              children: [
                ClipRRect(
                  borderRadius: BorderRadius.circular(
                    getHorizontalSize(
                      26.00,
                    ),
                  ),
                  child: CommonImageView(
                    imagePath: ImageConstant.imgEllipse2,
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
                    bottom: 4,
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
                          "msg_omg_this_is_amazing".tr,
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
              top: 19,
              bottom: 28,
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.end,
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Align(
                  alignment: Alignment.centerLeft,
                  child: Text(
                    "lbl_14_32".tr,
                    overflow: TextOverflow.ellipsis,
                    textAlign: TextAlign.left,
                    style: AppStyle.txtGDSTransportWebsite14,
                  ),
                ),
                Card(
                  clipBehavior: Clip.antiAlias,
                  elevation: 0,
                  margin: getMargin(
                    left: 10,
                    top: 1,
                  ),
                  color: ColorConstant.pink600,
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadiusStyle.circleBorder12,
                  ),
                  child: Container(
                    height: getSize(
                      24.00,
                    ),
                    width: getSize(
                      24.00,
                    ),
                    decoration: AppDecoration.fillPink600.copyWith(
                      borderRadius: BorderRadiusStyle.circleBorder12,
                    ),
                    child: Stack(
                      children: [
                        Align(
                          alignment: Alignment.center,
                          child: Padding(
                            padding: getPadding(
                              left: 9,
                              top: 8,
                              right: 9,
                              bottom: 8,
                            ),
                            child: CommonImageView(
                              svgPath: ImageConstant.img2,
                              height: getVerticalSize(
                                8.00,
                              ),
                              width: getHorizontalSize(
                                5.00,
                              ),
                            ),
                          ),
                        ),
                      ],
                    ),
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
