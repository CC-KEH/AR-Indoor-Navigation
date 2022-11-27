import 'controller/dm_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_image.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_title.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/custom_app_bar.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';

class DmScreen extends GetWidget<DmController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Scaffold(
        appBar: CustomAppBar(
          height: getVerticalSize(
            67.00,
          ),
          leadingWidth: 45,
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
              bottom: 45,
            ),
          ),
          title: Row(
            children: [
              Align(
                alignment: Alignment.center,
                child: Padding(
                  padding: getPadding(
                    left: 12,
                  ),
                  child: ClipRRect(
                    borderRadius: BorderRadius.circular(
                      getHorizontalSize(
                        30.00,
                      ),
                    ),
                    child: CommonImageView(
                      imagePath: ImageConstant.imgImage,
                      height: getVerticalSize(
                        67.00,
                      ),
                      width: getHorizontalSize(
                        65.00,
                      ),
                      fit: BoxFit.cover,
                    ),
                  ),
                ),
              ),
              AppbarTitle(
                text: "lbl_person_4".tr,
                margin: getMargin(
                  left: 16,
                  top: 16,
                  right: 102,
                  bottom: 18,
                ),
              ),
            ],
          ),
        ),
        body: SingleChildScrollView(
          child: Container(
            margin: getMargin(
              left: 17,
              top: 57,
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
                      "lbl_3_mar_13_34".tr,
                      overflow: TextOverflow.ellipsis,
                      textAlign: TextAlign.left,
                      style: AppStyle.txtRobotoRegular12.copyWith(
                        letterSpacing: 1.00,
                      ),
                    ),
                  ),
                ),
                CustomButton(
                  width: 156,
                  text: "msg_going_where_hehe".tr,
                  margin: getMargin(
                    left: 10,
                    top: 25,
                    right: 10,
                  ),
                  variant: ButtonVariant.FillBluegray800,
                  shape: ButtonShape.CircleBorder20,
                  padding: ButtonPadding.PaddingAll11,
                  fontStyle: ButtonFontStyle.RobotoLight13,
                  alignment: Alignment.centerLeft,
                ),
                CustomButton(
                  width: 113,
                  text: "lbl_going_lrc".tr,
                  margin: getMargin(
                    left: 15,
                    top: 10,
                    right: 15,
                  ),
                  variant: ButtonVariant.FillBluegray900,
                  shape: ButtonShape.CircleBorder20,
                  fontStyle: ButtonFontStyle.RobotoLight13,
                  alignment: Alignment.centerRight,
                ),
                CustomTextFormField(
                  width: 133,
                  focusNode: FocusNode(),
                  controller: controller.groupSixteenController,
                  hintText: "lbl_oo_nice_study".tr,
                  margin: getMargin(
                    left: 10,
                    top: 10,
                    right: 10,
                  ),
                  variant: TextFormFieldVariant.FillBluegray800,
                  shape: TextFormFieldShape.RoundedBorder20,
                  fontStyle: TextFormFieldFontStyle.RobotoLight13,
                  textInputAction: TextInputAction.done,
                  alignment: Alignment.centerLeft,
                ),
                CustomButton(
                  width: 135,
                  text: "lbl_thanks_you_too".tr,
                  margin: getMargin(
                    left: 15,
                    right: 15,
                  ),
                  variant: ButtonVariant.FillBluegray900,
                  shape: ButtonShape.CircleBorder20,
                  fontStyle: ButtonFontStyle.RobotoLight13,
                  alignment: Alignment.centerRight,
                ),
                Align(
                  alignment: Alignment.centerLeft,
                  child: Padding(
                    padding: getPadding(
                      top: 300,
                    ),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisSize: MainAxisSize.max,
                      children: [
                        Container(
                          height: getVerticalSize(
                            50.00,
                          ),
                          width: getHorizontalSize(
                            275.00,
                          ),
                          decoration: BoxDecoration(
                            color: ColorConstant.black9003f,
                            borderRadius: BorderRadius.circular(
                              getHorizontalSize(
                                10.00,
                              ),
                            ),
                          ),
                        ),
                        CustomIconButton(
                          height: 40,
                          width: 40,
                          margin: getMargin(
                            top: 5,
                            bottom: 5,
                          ),
                          variant: IconButtonVariant.FillTeal500,
                          child: CommonImageView(
                            svgPath: ImageConstant.imgSettings,
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
