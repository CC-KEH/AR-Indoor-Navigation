import 'controller/support_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_image.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/custom_app_bar.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';

class SupportScreen extends GetWidget<SupportController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Scaffold(
        appBar: CustomAppBar(
          height: getVerticalSize(
            56.00,
          ),
          leadingWidth: 51,
          leading: AppbarImage(
            height: getVerticalSize(
              3.00,
            ),
            width: getHorizontalSize(
              23.00,
            ),
            svgPath: ImageConstant.imgArrow1,
            margin: getMargin(
              left: 28,
              top: 19,
              bottom: 33,
            ),
          ),
          centerTitle: true,
          title: Text(
            "lbl_tech_support".tr,
            overflow: TextOverflow.ellipsis,
            textAlign: TextAlign.left,
            style: AppStyle.txtRobotoRegular24.copyWith(
              letterSpacing: 1.00,
            ),
          ),
        ),
        body: SingleChildScrollView(
          child: Container(
            margin: getMargin(
              left: 17,
              top: 37,
              right: 13,
              bottom: 46,
            ),
            decoration: AppDecoration.outlineBluegray9007f.copyWith(
              borderRadius: BorderRadiusStyle.roundedBorder40,
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Align(
                  alignment: Alignment.center,
                  child: Padding(
                    padding: getPadding(
                      left: 10,
                      right: 10,
                    ),
                    child: Text(
                      "lbl_1_feb_12_00".tr,
                      overflow: TextOverflow.ellipsis,
                      textAlign: TextAlign.left,
                      style: AppStyle.txtRobotoRegular12.copyWith(
                        letterSpacing: 1.00,
                      ),
                    ),
                  ),
                ),
                CustomTextFormField(
                  width: 280,
                  focusNode: FocusNode(),
                  controller: controller.groupNineteenController,
                  hintText: "msg_facing_any_problem".tr,
                  margin: getMargin(
                    left: 10,
                    top: 11,
                    right: 10,
                  ),
                  variant: TextFormFieldVariant.FillBluegray800,
                  shape: TextFormFieldShape.RoundedBorder20,
                  fontStyle: TextFormFieldFontStyle.RobotoLight13,
                  textInputAction: TextInputAction.done,
                  alignment: Alignment.centerLeft,
                ),
                Align(
                  alignment: Alignment.centerRight,
                  child: Container(
                    width: double.infinity,
                    margin: getMargin(
                      left: 14,
                      top: 16,
                      right: 14,
                    ),
                    decoration: AppDecoration.fillBluegray900.copyWith(
                      borderRadius: BorderRadiusStyle.circleBorder22,
                    ),
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisAlignment: MainAxisAlignment.start,
                      children: [
                        Align(
                          alignment: Alignment.centerRight,
                          child: Container(
                            width: getHorizontalSize(
                              117.00,
                            ),
                            margin: getMargin(
                              all: 12,
                            ),
                            child: Text(
                              "msg_report_an_issue_feedback".tr,
                              maxLines: null,
                              textAlign: TextAlign.right,
                              style: AppStyle.txtRobotoLight13.copyWith(
                                letterSpacing: 1.00,
                              ),
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                ),
                CustomButton(
                  width: 40,
                  text: "lbl_2".tr,
                  margin: getMargin(
                    left: 15,
                    top: 16,
                    right: 15,
                  ),
                  variant: ButtonVariant.FillBluegray900,
                  shape: ButtonShape.CircleBorder17,
                  padding: ButtonPadding.PaddingAll7,
                  fontStyle: ButtonFontStyle.RobotoLight13,
                  alignment: Alignment.centerRight,
                ),
                Align(
                  alignment: Alignment.centerLeft,
                  child: Container(
                    width: getHorizontalSize(
                      145.00,
                    ),
                    margin: getMargin(
                      left: 10,
                      top: 9,
                      right: 10,
                    ),
                    decoration: AppDecoration.fillBluegray800.copyWith(
                      borderRadius: BorderRadiusStyle.circleBorder22,
                    ),
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisAlignment: MainAxisAlignment.start,
                      children: [
                        Container(
                          width: getHorizontalSize(
                            119.00,
                          ),
                          margin: getMargin(
                            left: 14,
                            top: 7,
                            right: 11,
                            bottom: 5,
                          ),
                          child: Text(
                            "msg_please_tell_us_how".tr,
                            maxLines: null,
                            textAlign: TextAlign.left,
                            style: AppStyle.txtRobotoLight13.copyWith(
                              letterSpacing: 1.00,
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                ),
                Align(
                  alignment: Alignment.centerRight,
                  child: Container(
                    margin: getMargin(
                      left: 16,
                      top: 25,
                      right: 16,
                    ),
                    padding: getPadding(
                      left: 20,
                      top: 21,
                      right: 20,
                      bottom: 21,
                    ),
                    decoration: AppDecoration.txtFillBluegray900.copyWith(
                      borderRadius: BorderRadiusStyle.txtRoundedBorder20,
                    ),
                    child: Text(
                      "msg_addition_on_voice".tr,
                      overflow: TextOverflow.ellipsis,
                      textAlign: TextAlign.left,
                      style: AppStyle.txtRobotoLight13.copyWith(
                        letterSpacing: 1.00,
                      ),
                    ),
                  ),
                ),
                Align(
                  alignment: Alignment.centerLeft,
                  child: Container(
                    width: double.infinity,
                    margin: getMargin(
                      left: 10,
                      top: 16,
                      right: 10,
                    ),
                    decoration: AppDecoration.fillBluegray800.copyWith(
                      borderRadius: BorderRadiusStyle.circleBorder22,
                    ),
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisAlignment: MainAxisAlignment.start,
                      children: [
                        Align(
                          alignment: Alignment.centerLeft,
                          child: Container(
                            width: getHorizontalSize(
                              181.00,
                            ),
                            margin: getMargin(
                              left: 16,
                              top: 6,
                              right: 16,
                              bottom: 6,
                            ),
                            child: Text(
                              "msg_thankyou_for_suggesting_we".tr,
                              maxLines: null,
                              textAlign: TextAlign.left,
                              style: AppStyle.txtRobotoLight13.copyWith(
                                letterSpacing: 1.00,
                              ),
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                ),
                Align(
                  alignment: Alignment.centerRight,
                  child: Padding(
                    padding: getPadding(
                      left: 28,
                      top: 11,
                      right: 28,
                    ),
                    child: CommonImageView(
                      svgPath: ImageConstant.imgThumbsup,
                      height: getVerticalSize(
                        15.00,
                      ),
                      width: getHorizontalSize(
                        14.00,
                      ),
                    ),
                  ),
                ),
                Align(
                  alignment: Alignment.centerLeft,
                  child: Padding(
                    padding: getPadding(
                      top: 157,
                    ),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisSize: MainAxisSize.max,
                      children: [
                        Container(
                          decoration: AppDecoration.fillBlack9003f.copyWith(
                            borderRadius: BorderRadiusStyle.roundedBorder8,
                          ),
                          child: Row(
                            crossAxisAlignment: CrossAxisAlignment.center,
                            mainAxisSize: MainAxisSize.max,
                            children: [
                              Padding(
                                padding: getPadding(
                                  left: 15,
                                  top: 11,
                                  bottom: 11,
                                ),
                                child: Text(
                                  "lbl_write".tr,
                                  overflow: TextOverflow.ellipsis,
                                  textAlign: TextAlign.left,
                                  style: AppStyle.txtHelvetica14.copyWith(
                                    letterSpacing: 1.00,
                                  ),
                                ),
                              ),
                              Card(
                                clipBehavior: Clip.antiAlias,
                                elevation: 0,
                                margin: getMargin(
                                  left: 183,
                                ),
                                color: ColorConstant.bluegray802,
                                shape: RoundedRectangleBorder(
                                  borderRadius:
                                      BorderRadiusStyle.roundedBorder8,
                                ),
                                child: Container(
                                  height: getSize(
                                    40.00,
                                  ),
                                  width: getSize(
                                    40.00,
                                  ),
                                  decoration:
                                      AppDecoration.fillBluegray802.copyWith(
                                    borderRadius:
                                        BorderRadiusStyle.roundedBorder8,
                                  ),
                                  child: Stack(
                                    children: [
                                      Align(
                                        alignment: Alignment.center,
                                        child: Padding(
                                          padding: getPadding(
                                            left: 12,
                                            top: 11,
                                            right: 12,
                                            bottom: 11,
                                          ),
                                          child: CommonImageView(
                                            svgPath:
                                                ImageConstant.imgLightbulb18x16,
                                            height: getVerticalSize(
                                              18.00,
                                            ),
                                            width: getHorizontalSize(
                                              16.00,
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
                        CustomIconButton(
                          height: 40,
                          width: 40,
                          variant: IconButtonVariant.FillTeal500,
                          child: CommonImageView(
                            svgPath: ImageConstant.imgSettings40x40,
                          ),
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
    );
  }
}
