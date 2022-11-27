import 'controller/new_pass_set_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';

class NewPassSetScreen extends GetWidget<NewPassSetController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Scaffold(
        backgroundColor: ColorConstant.whiteA700,
        body: Column(
          mainAxisSize: MainAxisSize.min,
          crossAxisAlignment: CrossAxisAlignment.center,
          mainAxisAlignment: MainAxisAlignment.start,
          children: [
            Expanded(
              child: Align(
                alignment: Alignment.centerLeft,
                child: SingleChildScrollView(
                  child: Container(
                    decoration: AppDecoration.fillWhiteA700,
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Padding(
                          padding: getPadding(
                            left: 14,
                            top: 242,
                            right: 14,
                          ),
                          child: CommonImageView(
                            svgPath: ImageConstant.imgCheckmark,
                            height: getSize(
                              100.00,
                            ),
                            width: getSize(
                              100.00,
                            ),
                          ),
                        ),
                        Padding(
                          padding: getPadding(
                            left: 14,
                            top: 37,
                            right: 14,
                          ),
                          child: Text(
                            "msg_password_changed".tr,
                            overflow: TextOverflow.ellipsis,
                            textAlign: TextAlign.left,
                            style: AppStyle.txtUrbanistRomanBold26,
                          ),
                        ),
                        Container(
                          width: getHorizontalSize(
                            226.00,
                          ),
                          margin: getMargin(
                            left: 14,
                            top: 10,
                            right: 14,
                          ),
                          child: Text(
                            "msg_your_password_has".tr,
                            maxLines: null,
                            textAlign: TextAlign.center,
                            style: AppStyle.txtUrbanistRomanMedium15,
                          ),
                        ),
                        CustomButton(
                          width: 331,
                          text: "lbl_back_to_login".tr,
                          margin: getMargin(
                            left: 14,
                            top: 42,
                            right: 14,
                            bottom: 5,
                          ),
                        ),
                      ],
                    ),
                  ),
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
