import 'controller/login_register_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';

class LoginRegisterScreen extends GetWidget<LoginRegisterController> {
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
                    height: size.height,
                    width: size.width,
                    decoration: AppDecoration.fillWhiteA700,
                    child: Stack(
                      alignment: Alignment.bottomCenter,
                      children: [
                        Align(
                          alignment: Alignment.centerLeft,
                          child: CommonImageView(
                            imagePath: ImageConstant.imgImg800x360,
                            height: getVerticalSize(
                              800.00,
                            ),
                            width: getHorizontalSize(
                              360.00,
                            ),
                          ),
                        ),
                        Align(
                          alignment: Alignment.bottomCenter,
                          child: Padding(
                            padding: getPadding(
                              left: 14,
                              top: 88,
                              right: 14,
                              bottom: 88,
                            ),
                            child: Column(
                              mainAxisSize: MainAxisSize.min,
                              mainAxisAlignment: MainAxisAlignment.start,
                              children: [
                                Align(
                                  alignment: Alignment.centerRight,
                                  child: Padding(
                                    padding: getPadding(
                                      left: 52,
                                      right: 52,
                                    ),
                                    child: CommonImageView(
                                      svgPath: ImageConstant.imgLogoBlack900,
                                      height: getVerticalSize(
                                        125.00,
                                      ),
                                      width: getHorizontalSize(
                                        190.00,
                                      ),
                                    ),
                                  ),
                                ),
                                CustomButton(
                                  width: 331,
                                  text: "lbl_login".tr,
                                  margin: getMargin(
                                    top: 200,
                                  ),
                                  alignment: Alignment.centerLeft,
                                ),
                                CustomButton(
                                  width: 331,
                                  text: "lbl_register".tr,
                                  margin: getMargin(
                                    top: 15,
                                  ),
                                  variant: ButtonVariant.OutlineGray900,
                                  fontStyle: ButtonFontStyle
                                      .UrbanistRomanSemiBold15Gray900,
                                  alignment: Alignment.centerLeft,
                                ),
                              ],
                            ),
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
