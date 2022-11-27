import 'package:ar_indoor_navigation/Authentication/login_page.dart';
import 'controller/welcome_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';

class WelcomeScreen extends GetWidget<WelcomeController> {
  @override
  Widget build(BuildContext context) {
    final size = MediaQuery.of(context).size;
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
                      alignment: Alignment.topCenter,
                      children: [
                        Align(
                          alignment: Alignment.centerLeft,
                          child: CommonImageView(
                            imagePath: ImageConstant.imgImg,
                            height: getVerticalSize(
                              800.00,
                            ),
                            width: getHorizontalSize(
                              360.00,
                            ),
                          ),
                        ),
                        Align(
                          alignment: Alignment.topCenter,
                          child: Padding(
                            padding: getPadding(
                              left: 14,
                              top: 90,
                              right: 14,
                              bottom: 91,
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
                                Align(
                                  alignment: Alignment.centerRight,
                                  child: Container(
                                    height: getVerticalSize(
                                      31.00,
                                    ),
                                    width: getHorizontalSize(
                                      237.00,
                                    ),
                                    margin: getMargin(
                                      left: 28,
                                      top: 57,
                                      right: 28,
                                    ),
                                    child: Stack(
                                      alignment: Alignment.bottomCenter,
                                      children: [
                                        // Align(
                                        //   alignment: Alignment.topLeft,
                                        //   child: Container(
                                        //     height: getVerticalSize(
                                        //       25.00,
                                        //     ),
                                        //     width: getHorizontalSize(
                                        //       237.00,
                                        //     ),
                                        //     margin: getMargin(
                                        //       bottom: 10,
                                        //     ),
                                        //     decoration: BoxDecoration(
                                        //       color: ColorConstant.whiteA700,
                                        //     ),
                                        //   ),
                                        // ),
                                        Align(
                                          //alignment: Alignment.bottomCenter,
                                          child: Padding(
                                            padding: getPadding(
                                              left: size.width/8,
                                              right:size.width/6,
                                            ),
                                            child: Text(
                                              "Who are you?",
                                              overflow: TextOverflow.ellipsis,
                                              textAlign: TextAlign.left,
                                              style: AppStyle
                                                  .txtUrbanistRomanSemiBold24,
                                            ),
                                          ),
                                        ),
                                      ],
                                    ),
                                  ),
                                ),
                                SizedBox(height: size.height/5,),
                                CustomButton(
                                  onTap:() {
                                    Navigator.of(context).push(
                                      MaterialPageRoute(
                                        builder: (_) => LoginScreen(),
                                      ),
                                    );
                                  },
                                  width: size.width,
                                  text: "I'm Admin",
                                  margin: getMargin(
                                    top: 39,
                                  ),
                                  alignment: Alignment.centerLeft,
                                ),
                                Align(
                                  alignment: Alignment.center,
                                  child: Padding(
                                    padding: getPadding(
                                      left: 28,
                                      top: 34,
                                      right: 28,
                                    ),
                                    child: Text(
                                      "OR",
                                      overflow: TextOverflow.ellipsis,
                                      textAlign: TextAlign.left,
                                      style:
                                          AppStyle.txtUrbanistRomanSemiBold20,
                                    ),
                                  ),
                                ),
                                CustomButton(
                                  onTap:() {
                                    Navigator.of(context).push(
                                      MaterialPageRoute(
                                        builder: (_) => LoginScreen(),
                                      ),
                                    );
                                  },
                                  width: size.width,
                                  text: "I'm a Student",
                                  margin: getMargin(
                                    top: 31,
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
