import 'controller/android_large_three_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_image.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/custom_app_bar.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';
export 'package:connectivity_plus/connectivity_plus.dart';

class AndroidLargeThreeScreen extends GetWidget<AndroidLargeThreeController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
        child: Scaffold(
            appBar: CustomAppBar(
                height: getVerticalSize(56.00),
                leadingWidth: 47,
                leading: AppbarImage(
                    height: getVerticalSize(20.00),
                    width: getHorizontalSize(23.00),
                    svgPath: ImageConstant.imgArrowleft,
                    margin: getMargin(left: 24, top: 20, bottom: 15),
                    onTap: onTapArrowleft),
                centerTitle: true,
                title: Text("lbl_cameron".tr,
                    overflow: TextOverflow.ellipsis,
                    textAlign: TextAlign.left,
                    style: AppStyle.txtGDSTransportWebsiteBold20Bluegray700),
                actions: [
                  AppbarImage(
                      height: getSize(24.00),
                      width: getSize(24.00),
                      svgPath: ImageConstant.imageNotFound,
                      margin: getMargin(left: 8, top: 12, right: 8, bottom: 19))
                ]),
            body: SingleChildScrollView(
                child: Container(
                    margin: getMargin(left: 24, top: 21, right: 9, bottom: 20),
                    decoration: AppDecoration.fillWhiteA700,
                    child: Column(
                        mainAxisSize: MainAxisSize.min,
                        crossAxisAlignment: CrossAxisAlignment.start,
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          CustomButton(
                              width: 167,
                              text: "msg_what_do_you_mean".tr,
                              margin: getMargin(right: 10)),
                          Align(
                              alignment: Alignment.centerRight,
                              child: Container(
                                  width: double.infinity,
                                  margin: getMargin(left: 10, top: 16),
                                  decoration: AppDecoration.fillGray200
                                      .copyWith(
                                          borderRadius: BorderRadiusStyle
                                              .customBorderTL24),
                                  child: Column(
                                      mainAxisSize: MainAxisSize.min,
                                      crossAxisAlignment:
                                          CrossAxisAlignment.center,
                                      mainAxisAlignment:
                                          MainAxisAlignment.start,
                                      children: [
                                        Align(
                                            alignment: Alignment.centerLeft,
                                            child: Container(
                                                width:
                                                    getHorizontalSize(203.00),
                                                margin: getMargin(
                                                    left: 16,
                                                    top: 16,
                                                    right: 16,
                                                    bottom: 17),
                                                child: Text(
                                                    "msg_i_think_the_idea".tr,
                                                    maxLines: null,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtGDSTransportWebsite16)))
                                      ]))),
                          CustomButton(
                              width: 167,
                              text: "msg_what_do_you_mean".tr,
                              margin: getMargin(top: 16, right: 10)),
                          Align(
                              alignment: Alignment.centerRight,
                              child: Container(
                                  width: double.infinity,
                                  margin: getMargin(left: 10, top: 16),
                                  decoration: AppDecoration.fillGray200
                                      .copyWith(
                                          borderRadius: BorderRadiusStyle
                                              .customBorderTL24),
                                  child: Column(
                                      mainAxisSize: MainAxisSize.min,
                                      crossAxisAlignment:
                                          CrossAxisAlignment.center,
                                      mainAxisAlignment:
                                          MainAxisAlignment.start,
                                      children: [
                                        Align(
                                            alignment: Alignment.centerLeft,
                                            child: Container(
                                                width:
                                                    getHorizontalSize(203.00),
                                                margin: getMargin(
                                                    left: 16,
                                                    top: 16,
                                                    right: 16,
                                                    bottom: 17),
                                                child: Text(
                                                    "msg_i_think_the_idea".tr,
                                                    maxLines: null,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtGDSTransportWebsite16)))
                                      ]))),
                          CustomButton(
                              width: 167,
                              text: "msg_what_do_you_mean".tr,
                              margin: getMargin(top: 16, right: 10)),
                          Align(
                              alignment: Alignment.centerRight,
                              child: Container(
                                  width: double.infinity,
                                  margin: getMargin(left: 10, top: 16),
                                  decoration: AppDecoration.fillGray200
                                      .copyWith(
                                          borderRadius: BorderRadiusStyle
                                              .customBorderTL24),
                                  child: Column(
                                      mainAxisSize: MainAxisSize.min,
                                      crossAxisAlignment:
                                          CrossAxisAlignment.center,
                                      mainAxisAlignment:
                                          MainAxisAlignment.start,
                                      children: [
                                        Align(
                                            alignment: Alignment.centerLeft,
                                            child: Container(
                                                width:
                                                    getHorizontalSize(203.00),
                                                margin: getMargin(
                                                    left: 16,
                                                    top: 16,
                                                    right: 16,
                                                    bottom: 17),
                                                child: Text(
                                                    "msg_i_think_the_idea".tr,
                                                    maxLines: null,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtGDSTransportWebsite16)))
                                      ]))),
                          Padding(
                              padding: getPadding(top: 177),
                              child: Row(
                                  mainAxisAlignment:
                                      MainAxisAlignment.spaceBetween,
                                  crossAxisAlignment: CrossAxisAlignment.center,
                                  mainAxisSize: MainAxisSize.max,
                                  children: [
                                    CustomTextFormField(
                                        width: 258,
                                        focusNode: FocusNode(),
                                        controller:
                                            controller.composenewbtnController,
                                        hintText: "lbl_type_a_message".tr,
                                        textInputAction: TextInputAction.done,
                                        prefix: Container(
                                            margin: getMargin(
                                                left: 18,
                                                top: 16,
                                                right: 12,
                                                bottom: 16),
                                            child: CommonImageView(
                                                svgPath:
                                                    ImageConstant.imgMenu)),
                                        prefixConstraints: BoxConstraints(
                                            minWidth: getSize(20.00),
                                            minHeight: getSize(20.00))),
                                    CustomIconButton(
                                        height: 53,
                                        width: 53,
                                        shape: IconButtonShape.RoundedBorder26,
                                        child: CommonImageView(
                                            svgPath: ImageConstant
                                                .imgComposenewbtn53x53))
                                  ]))
                        ])))));
  }

  onTapArrowleft() {
    Get.back();
  }
}
