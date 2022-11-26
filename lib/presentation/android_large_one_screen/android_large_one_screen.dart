import '../android_large_one_screen/widgets/listellipsetwo_item_widget.dart';
import 'controller/android_large_one_controller.dart';
import 'models/listellipsetwo_item_model.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/custom_bottom_bar.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/theme/app_decoration.dart';
import 'package:get/get.dart';

class AndroidLargeOneScreen extends GetWidget<AndroidLargeOneController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
        child: Scaffold(
            backgroundColor: ColorConstant.whiteA700,
            body: SingleChildScrollView(
                child: Container(
                    decoration: AppDecoration.fillWhiteA700,
                    child: Column(
                        mainAxisSize: MainAxisSize.min,
                        crossAxisAlignment: CrossAxisAlignment.end,
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          Container(
                              height: getVerticalSize(577.00),
                              width: getHorizontalSize(327.00),
                              margin: getMargin(left: 24, top: 34, right: 8),
                              child: Stack(
                                  alignment: Alignment.topRight,
                                  children: [
                                    Align(
                                        alignment: Alignment.topLeft,
                                        child: Padding(
                                            padding: getPadding(
                                                right: 10, bottom: 10),
                                            child: Text("lbl_messages".tr,
                                                overflow: TextOverflow.ellipsis,
                                                textAlign: TextAlign.left,
                                                style: AppStyle
                                                    .txtGDSTransportWebsiteBold36))),
                                    Align(
                                        alignment: Alignment.topRight,
                                        child: Padding(
                                            padding: getPadding(
                                                left: 10, top: 10, bottom: 10),
                                            child: CommonImageView(
                                                svgPath:
                                                    ImageConstant.imgMaskgroup,
                                                height: getSize(24.00),
                                                width: getSize(24.00)))),
                                    Align(
                                        alignment: Alignment.center,
                                        child: Padding(
                                            padding:
                                                getPadding(top: 16, right: 1),
                                            child: Column(
                                                mainAxisSize: MainAxisSize.min,
                                                crossAxisAlignment:
                                                    CrossAxisAlignment.start,
                                                mainAxisAlignment:
                                                    MainAxisAlignment.start,
                                                children: [
                                                  Padding(
                                                      padding:
                                                          getPadding(right: 10),
                                                      child: Text(
                                                          "lbl_messages".tr,
                                                          overflow: TextOverflow
                                                              .ellipsis,
                                                          textAlign:
                                                              TextAlign.left,
                                                          style: AppStyle
                                                              .txtGDSTransportWebsiteBold40)),
                                                  Padding(
                                                      padding:
                                                          getPadding(top: 25),
                                                      child: Obx(() =>
                                                          ListView.builder(
                                                              physics:
                                                                  NeverScrollableScrollPhysics(),
                                                              shrinkWrap: true,
                                                              itemCount: controller
                                                                  .androidLargeOneModelObj
                                                                  .value
                                                                  .listellipsetwoItemList
                                                                  .length,
                                                              itemBuilder:
                                                                  (context,
                                                                      index) {
                                                                ListellipsetwoItemModel
                                                                    model =
                                                                    controller
                                                                        .androidLargeOneModelObj
                                                                        .value
                                                                        .listellipsetwoItemList[index];
                                                                return ListellipsetwoItemWidget(
                                                                    model);
                                                              }))),
                                                  Container(
                                                      height: getVerticalSize(
                                                          20.00),
                                                      width: getHorizontalSize(
                                                          327.00),
                                                      decoration: AppDecoration
                                                          .outlineBluegray7007f,
                                                      child: Stack(children: [
                                                        Align(
                                                            alignment: Alignment
                                                                .bottomLeft,
                                                            child: Padding(
                                                                padding: getPadding(
                                                                    top: 10,
                                                                    right: 10),
                                                                child: ClipRRect(
                                                                    borderRadius:
                                                                        BorderRadius.circular(getHorizontalSize(
                                                                            26.00)),
                                                                    child: CommonImageView(
                                                                        imagePath:
                                                                            ImageConstant
                                                                                .imgEllipse21x52,
                                                                        height: getVerticalSize(
                                                                            1.00),
                                                                        width: getHorizontalSize(
                                                                            52.00),
                                                                        fit: BoxFit
                                                                            .cover))))
                                                      ]))
                                                ])))
                                  ])),
                          CustomIconButton(
                              height: 60,
                              width: 60,
                              margin: getMargin(
                                  left: 291, top: 52, right: 9, bottom: 5),
                              child: CommonImageView(
                                  svgPath: ImageConstant.imgCompose))
                        ]))),
            bottomNavigationBar:
                CustomBottomBar(onChanged: (BottomBarEnum type) {
              controller.type.value = type;
            })));
  }

  Widget getCurrentWidget(BottomBarEnum type) {
    switch (type) {
      case BottomBarEnum.Location:
        return getDefaultWidget();
      case BottomBarEnum.Call:
        return getDefaultWidget();
      case BottomBarEnum.User:
        return getDefaultWidget();
      case BottomBarEnum.Settings:
        return getDefaultWidget();
      default:
        return getDefaultWidget();
    }
  }
}
