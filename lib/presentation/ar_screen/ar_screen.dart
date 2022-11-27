import 'controller/ar_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';

class ArScreen extends GetWidget<ArController> {
  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Scaffold(
        backgroundColor: ColorConstant.whiteA700,
        body: Column(
          mainAxisSize: MainAxisSize.min,
          crossAxisAlignment: CrossAxisAlignment.center,
          mainAxisAlignment: MainAxisAlignment.end,
          children: [
            Expanded(
              child: Align(
                alignment: Alignment.centerLeft,
                child: SingleChildScrollView(
                  child: Card(
                    clipBehavior: Clip.antiAlias,
                    elevation: 0,
                    margin: EdgeInsets.all(0),
                    color: ColorConstant.whiteA700,
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadiusStyle.roundedBorder40,
                    ),
                    child: Container(
                      height: getVerticalSize(
                        755.00,
                      ),
                      width: size.width,
                      decoration: AppDecoration.fillWhiteA700.copyWith(
                        borderRadius: BorderRadiusStyle.roundedBorder40,
                      ),
                      child: Stack(
                        alignment: Alignment.topLeft,
                        children: [
                          Align(
                            alignment: Alignment.topLeft,
                            child: Container(
                              height: getVerticalSize(
                                559.00,
                              ),
                              width: size.width,
                              margin: getMargin(
                                bottom: 10,
                              ),
                              child: Stack(
                                alignment: Alignment.centerLeft,
                                children: [
                                  Align(
                                    alignment: Alignment.centerLeft,
                                    child: Padding(
                                      padding: getPadding(
                                        bottom: 7,
                                      ),
                                      child: CommonImageView(
                                        imagePath: ImageConstant.imgVector,
                                        height: getVerticalSize(
                                          551.00,
                                        ),
                                        width: getHorizontalSize(
                                          360.00,
                                        ),
                                      ),
                                    ),
                                  ),
                                  Align(
                                    alignment: Alignment.centerLeft,
                                    child: SingleChildScrollView(
                                      scrollDirection: Axis.horizontal,
                                      padding: getPadding(
                                        bottom: 1,
                                      ),
                                      child: Container(
                                        height: getVerticalSize(
                                          557.00,
                                        ),
                                        width: size.width,
                                        child: Stack(
                                          alignment: Alignment.center,
                                          children: [
                                            Align(
                                              alignment: Alignment.centerLeft,
                                              child: Container(
                                                height: getVerticalSize(
                                                  557.00,
                                                ),
                                                width: size.width,
                                                child: Stack(
                                                  alignment:
                                                      Alignment.centerLeft,
                                                  children: [
                                                    Align(
                                                      alignment:
                                                          Alignment.centerLeft,
                                                      child: CommonImageView(
                                                        imagePath: ImageConstant
                                                            .imgGroup557x360,
                                                        height: getVerticalSize(
                                                          557.00,
                                                        ),
                                                        width:
                                                            getHorizontalSize(
                                                          360.00,
                                                        ),
                                                      ),
                                                    ),
                                                    Align(
                                                      alignment:
                                                          Alignment.centerLeft,
                                                      child: Padding(
                                                        padding: getPadding(
                                                          bottom: 3,
                                                        ),
                                                        child: CommonImageView(
                                                          imagePath: ImageConstant
                                                              .imgGroup553x360,
                                                          height:
                                                              getVerticalSize(
                                                            553.00,
                                                          ),
                                                          width:
                                                              getHorizontalSize(
                                                            360.00,
                                                          ),
                                                        ),
                                                      ),
                                                    ),
                                                  ],
                                                ),
                                              ),
                                            ),
                                            Align(
                                              alignment: Alignment.center,
                                              child: CommonImageView(
                                                imagePath: ImageConstant
                                                    .imgGroupWhiteA700,
                                                height: getVerticalSize(
                                                  559.00,
                                                ),
                                                width: getHorizontalSize(
                                                  395.00,
                                                ),
                                              ),
                                            ),
                                          ],
                                        ),
                                      ),
                                    ),
                                  ),
                                  Align(
                                    alignment: Alignment.centerLeft,
                                    child: Column(
                                      mainAxisSize: MainAxisSize.min,
                                      mainAxisAlignment:
                                          MainAxisAlignment.center,
                                      children: [
                                        Align(
                                          alignment: Alignment.centerLeft,
                                          child: Padding(
                                            padding: getPadding(
                                              left: 72,
                                              top: 57,
                                              right: 72,
                                            ),
                                            child: Row(
                                              mainAxisAlignment:
                                                  MainAxisAlignment.start,
                                              crossAxisAlignment:
                                                  CrossAxisAlignment.start,
                                              mainAxisSize: MainAxisSize.max,
                                              children: [
                                                Padding(
                                                  padding: getPadding(
                                                    top: 29,
                                                  ),
                                                  child: Row(
                                                    crossAxisAlignment:
                                                        CrossAxisAlignment
                                                            .start,
                                                    mainAxisSize:
                                                        MainAxisSize.max,
                                                    children: [
                                                      Container(
                                                        width:
                                                            getHorizontalSize(
                                                          25.00,
                                                        ),
                                                        margin: getMargin(
                                                          top: 14,
                                                          bottom: 30,
                                                        ),
                                                        child: Text(
                                                          "lbl_street_name".tr,
                                                          maxLines: null,
                                                          textAlign:
                                                              TextAlign.left,
                                                          style: AppStyle
                                                              .txtMontserratMedium5,
                                                        ),
                                                      ),
                                                      Padding(
                                                        padding: getPadding(
                                                          left: 20,
                                                          bottom: 57,
                                                        ),
                                                        child: Text(
                                                          "lbl_union".tr,
                                                          overflow: TextOverflow
                                                              .ellipsis,
                                                          textAlign:
                                                              TextAlign.left,
                                                          style: AppStyle
                                                              .txtMontserratMedium807,
                                                        ),
                                                      ),
                                                      Padding(
                                                        padding: getPadding(
                                                          left: 14,
                                                          top: 36,
                                                        ),
                                                        child: CommonImageView(
                                                          svgPath: ImageConstant
                                                              .imgGroup33290,
                                                          height:
                                                              getVerticalSize(
                                                            31.00,
                                                          ),
                                                          width:
                                                              getHorizontalSize(
                                                            20.00,
                                                          ),
                                                        ),
                                                      ),
                                                    ],
                                                  ),
                                                ),
                                                Padding(
                                                  padding: getPadding(
                                                    left: 72,
                                                    bottom: 52,
                                                  ),
                                                  child: CommonImageView(
                                                    svgPath: ImageConstant
                                                        .imgArrowdown,
                                                    height: getVerticalSize(
                                                      44.00,
                                                    ),
                                                    width: getHorizontalSize(
                                                      7.00,
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
                                            height: getVerticalSize(
                                              238.00,
                                            ),
                                            width: getHorizontalSize(
                                              303.00,
                                            ),
                                            margin: getMargin(
                                              left: 10,
                                              top: 17,
                                              bottom: 147,
                                            ),
                                            child: Stack(
                                              alignment: Alignment.topRight,
                                              children: [
                                                Align(
                                                  alignment: Alignment.topLeft,
                                                  child: Container(
                                                    height: getVerticalSize(
                                                      214.00,
                                                    ),
                                                    width: getHorizontalSize(
                                                      303.00,
                                                    ),
                                                    margin: getMargin(
                                                      top: 1,
                                                      bottom: 10,
                                                    ),
                                                    child: Stack(
                                                      alignment:
                                                          Alignment.bottomRight,
                                                      children: [
                                                        Align(
                                                          alignment: Alignment
                                                              .centerLeft,
                                                          child:
                                                              CommonImageView(
                                                            imagePath: ImageConstant
                                                                .imgGroup214x303,
                                                            height:
                                                                getVerticalSize(
                                                              214.00,
                                                            ),
                                                            width:
                                                                getHorizontalSize(
                                                              303.00,
                                                            ),
                                                          ),
                                                        ),
                                                        Align(
                                                          alignment: Alignment
                                                              .bottomRight,
                                                          child: Padding(
                                                            padding: getPadding(
                                                              left: 10,
                                                              top: 10,
                                                              bottom: 10,
                                                            ),
                                                            child: Row(
                                                              crossAxisAlignment:
                                                                  CrossAxisAlignment
                                                                      .start,
                                                              mainAxisSize:
                                                                  MainAxisSize
                                                                      .max,
                                                              children: [
                                                                Padding(
                                                                  padding:
                                                                      getPadding(
                                                                    top: 65,
                                                                  ),
                                                                  child: Row(
                                                                    crossAxisAlignment:
                                                                        CrossAxisAlignment
                                                                            .start,
                                                                    mainAxisSize:
                                                                        MainAxisSize
                                                                            .min,
                                                                    children: [
                                                                      Container(
                                                                        width:
                                                                            getHorizontalSize(
                                                                          30.00,
                                                                        ),
                                                                        margin:
                                                                            getMargin(
                                                                          bottom:
                                                                              59,
                                                                        ),
                                                                        child:
                                                                            Text(
                                                                          "lbl_street_name"
                                                                              .tr,
                                                                          maxLines:
                                                                              null,
                                                                          textAlign:
                                                                              TextAlign.left,
                                                                          style:
                                                                              AppStyle.txtMontserratMedium5,
                                                                        ),
                                                                      ),
                                                                      Padding(
                                                                        padding:
                                                                            getPadding(
                                                                          left:
                                                                              23,
                                                                          top:
                                                                              62,
                                                                        ),
                                                                        child:
                                                                            Text(
                                                                          "lbl_street"
                                                                              .tr,
                                                                          overflow:
                                                                              TextOverflow.ellipsis,
                                                                          textAlign:
                                                                              TextAlign.left,
                                                                          style:
                                                                              AppStyle.txtMontserratMedium807,
                                                                        ),
                                                                      ),
                                                                    ],
                                                                  ),
                                                                ),
                                                                Padding(
                                                                  padding:
                                                                      getPadding(
                                                                    left: 79,
                                                                    bottom: 59,
                                                                  ),
                                                                  child: Row(
                                                                    crossAxisAlignment:
                                                                        CrossAxisAlignment
                                                                            .start,
                                                                    mainAxisSize:
                                                                        MainAxisSize
                                                                            .min,
                                                                    children: [
                                                                      Container(
                                                                        width:
                                                                            getHorizontalSize(
                                                                          16.00,
                                                                        ),
                                                                        margin:
                                                                            getMargin(
                                                                          top:
                                                                              50,
                                                                        ),
                                                                        child:
                                                                            Text(
                                                                          "lbl_street_name"
                                                                              .tr,
                                                                          maxLines:
                                                                              null,
                                                                          textAlign:
                                                                              TextAlign.left,
                                                                          style:
                                                                              AppStyle.txtMontserratMedium5,
                                                                        ),
                                                                      ),
                                                                      Padding(
                                                                        padding:
                                                                            getPadding(
                                                                          left:
                                                                              31,
                                                                          bottom:
                                                                              69,
                                                                        ),
                                                                        child:
                                                                            Text(
                                                                          "lbl_lowervailsburg"
                                                                              .tr,
                                                                          overflow:
                                                                              TextOverflow.ellipsis,
                                                                          textAlign:
                                                                              TextAlign.left,
                                                                          style:
                                                                              AppStyle.txtMontserratMedium807,
                                                                        ),
                                                                      ),
                                                                    ],
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
                                                Align(
                                                  alignment: Alignment.topRight,
                                                  child: Container(
                                                    width: getHorizontalSize(
                                                      10.00,
                                                    ),
                                                    margin: getMargin(
                                                      left: 133,
                                                      right: 133,
                                                      bottom: 10,
                                                    ),
                                                    child: Text(
                                                      "lbl_street_name".tr,
                                                      maxLines: null,
                                                      textAlign: TextAlign.left,
                                                      style: AppStyle
                                                          .txtMontserratMedium5,
                                                    ),
                                                  ),
                                                ),
                                                Align(
                                                  alignment:
                                                      Alignment.bottomLeft,
                                                  child: Container(
                                                    width: getHorizontalSize(
                                                      16.00,
                                                    ),
                                                    margin: getMargin(
                                                      left: 115,
                                                      top: 10,
                                                      right: 115,
                                                    ),
                                                    child: Text(
                                                      "lbl_street_name".tr,
                                                      maxLines: null,
                                                      textAlign: TextAlign.left,
                                                      style: AppStyle
                                                          .txtMontserratMedium5,
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
                            ),
                          ),
                          Align(
                            alignment: Alignment.topLeft,
                            child: Container(
                              height: getVerticalSize(
                                632.00,
                              ),
                              width: size.width,
                              margin: getMargin(
                                bottom: 10,
                              ),
                              child: Stack(
                                alignment: Alignment.topRight,
                                children: [
                                  Align(
                                    alignment: Alignment.centerLeft,
                                    child: CommonImageView(
                                      imagePath: ImageConstant.imgLrc1,
                                      height: getVerticalSize(
                                        632.00,
                                      ),
                                      width: getHorizontalSize(
                                        360.00,
                                      ),
                                    ),
                                  ),
                                  Align(
                                    alignment: Alignment.topRight,
                                    child: Padding(
                                      padding: getPadding(
                                        left: 24,
                                        right: 24,
                                        bottom: 10,
                                      ),
                                      child: Text(
                                        "lbl_help".tr,
                                        overflow: TextOverflow.ellipsis,
                                        textAlign: TextAlign.left,
                                        style: AppStyle.txtRobotoRomanBold15
                                            .copyWith(
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
                            alignment: Alignment.bottomCenter,
                            child: Container(
                              height: getVerticalSize(
                                180.00,
                              ),
                              width: getHorizontalSize(
                                47.00,
                              ),
                              margin: getMargin(
                                left: 154,
                                top: 49,
                                right: 154,
                                bottom: 49,
                              ),
                              decoration: BoxDecoration(
                                color: ColorConstant.teal800,
                              ),
                            ),
                          ),
                          Align(
                            alignment: Alignment.bottomCenter,
                            child: Padding(
                              padding: getPadding(
                                left: 119,
                                top: 195,
                                right: 119,
                                bottom: 195,
                              ),
                              child: CommonImageView(
                                svgPath: ImageConstant.imgPolygon1,
                                height: getVerticalSize(
                                  123.00,
                                ),
                                width: getHorizontalSize(
                                  118.00,
                                ),
                              ),
                            ),
                          ),
                          Align(
                            alignment: Alignment.bottomLeft,
                            child: Container(
                              height: getVerticalSize(
                                145.00,
                              ),
                              width: size.width,
                              margin: getMargin(
                                top: 10,
                              ),
                              child: Stack(
                                alignment: Alignment.bottomCenter,
                                children: [
                                  Align(
                                    alignment: Alignment.bottomLeft,
                                    child: CommonImageView(
                                      imagePath: ImageConstant.imgRectangle326,
                                      height: getVerticalSize(
                                        383.00,
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
                                        left: 12,
                                        top: 10,
                                        right: 12,
                                      ),
                                      child: Column(
                                        mainAxisSize: MainAxisSize.min,
                                        crossAxisAlignment:
                                            CrossAxisAlignment.start,
                                        mainAxisAlignment:
                                            MainAxisAlignment.end,
                                        children: [
                                          Align(
                                            alignment: Alignment.center,
                                            child: Padding(
                                              padding: getPadding(
                                                left: 107,
                                                right: 107,
                                              ),
                                              child: Text(
                                                "lbl_hyperlink".tr,
                                                overflow: TextOverflow.ellipsis,
                                                textAlign: TextAlign.left,
                                                style: AppStyle.txtDMSansBold22
                                                    .copyWith(
                                                  height: 1.32,
                                                ),
                                              ),
                                            ),
                                          ),
                                          Padding(
                                            padding: getPadding(
                                              left: 1,
                                              top: 11,
                                              right: 10,
                                            ),
                                            child: Text(
                                              "msg_people_with_same".tr,
                                              overflow: TextOverflow.ellipsis,
                                              textAlign: TextAlign.left,
                                              style: AppStyle.txtDMSansRegular12
                                                  .copyWith(
                                                height: 1.33,
                                              ),
                                            ),
                                          ),
                                          Padding(
                                            padding: getPadding(
                                              left: 5,
                                              top: 9,
                                              right: 10,
                                            ),
                                            child: Row(
                                              mainAxisAlignment:
                                                  MainAxisAlignment.start,
                                              crossAxisAlignment:
                                                  CrossAxisAlignment.center,
                                              mainAxisSize: MainAxisSize.min,
                                              children: [
                                                ClipRRect(
                                                  borderRadius:
                                                      BorderRadius.circular(
                                                    getHorizontalSize(
                                                      13.00,
                                                    ),
                                                  ),
                                                  child: CommonImageView(
                                                    imagePath:
                                                        ImageConstant.imgImage1,
                                                    height: getSize(
                                                      30.00,
                                                    ),
                                                    width: getSize(
                                                      30.00,
                                                    ),
                                                    fit: BoxFit.cover,
                                                  ),
                                                ),
                                                Padding(
                                                  padding: getPadding(
                                                    left: 7,
                                                  ),
                                                  child: ClipRRect(
                                                    borderRadius:
                                                        BorderRadius.circular(
                                                      getHorizontalSize(
                                                        15.00,
                                                      ),
                                                    ),
                                                    child: CommonImageView(
                                                      imagePath: ImageConstant
                                                          .imgImage30x30,
                                                      height: getSize(
                                                        30.00,
                                                      ),
                                                      width: getSize(
                                                        30.00,
                                                      ),
                                                      fit: BoxFit.cover,
                                                    ),
                                                  ),
                                                ),
                                                Padding(
                                                  padding: getPadding(
                                                    left: 7,
                                                  ),
                                                  child: ClipRRect(
                                                    borderRadius:
                                                        BorderRadius.circular(
                                                      getHorizontalSize(
                                                        15.00,
                                                      ),
                                                    ),
                                                    child: CommonImageView(
                                                      imagePath: ImageConstant
                                                          .imgImage,
                                                      height: getSize(
                                                        30.00,
                                                      ),
                                                      width: getSize(
                                                        30.00,
                                                      ),
                                                      fit: BoxFit.cover,
                                                    ),
                                                  ),
                                                ),
                                                Padding(
                                                  padding: getPadding(
                                                    left: 7,
                                                  ),
                                                  child: ClipRRect(
                                                    borderRadius:
                                                        BorderRadius.circular(
                                                      getHorizontalSize(
                                                        15.00,
                                                      ),
                                                    ),
                                                    child: CommonImageView(
                                                      imagePath: ImageConstant
                                                          .imgImage44x44,
                                                      height: getSize(
                                                        30.00,
                                                      ),
                                                      width: getSize(
                                                        30.00,
                                                      ),
                                                      fit: BoxFit.cover,
                                                    ),
                                                  ),
                                                ),
                                              ],
                                            ),
                                          ),
                                          Padding(
                                            padding: getPadding(
                                              top: 31,
                                              right: 10,
                                            ),
                                            child: Text(
                                              "lbl_save_as".tr,
                                              overflow: TextOverflow.ellipsis,
                                              textAlign: TextAlign.left,
                                              style: AppStyle
                                                  .txtDMSansRegular12Bluegray901
                                                  .copyWith(
                                                height: 1.50,
                                              ),
                                            ),
                                          ),
                                          Padding(
                                            padding: getPadding(
                                              top: 7,
                                              right: 10,
                                            ),
                                            child: Row(
                                              mainAxisAlignment:
                                                  MainAxisAlignment.start,
                                              crossAxisAlignment:
                                                  CrossAxisAlignment.center,
                                              mainAxisSize: MainAxisSize.max,
                                              children: [
                                                Container(
                                                  decoration: AppDecoration
                                                      .fillBluegray901
                                                      .copyWith(
                                                    borderRadius:
                                                        BorderRadiusStyle
                                                            .roundedBorder2,
                                                  ),
                                                  child: Row(
                                                    crossAxisAlignment:
                                                        CrossAxisAlignment
                                                            .center,
                                                    mainAxisSize:
                                                        MainAxisSize.min,
                                                    children: [
                                                      Card(
                                                        clipBehavior:
                                                            Clip.antiAlias,
                                                        elevation: 0,
                                                        margin: getMargin(
                                                          left: 8,
                                                          top: 7,
                                                          bottom: 7,
                                                        ),
                                                        color: ColorConstant
                                                            .bluegray901,
                                                        shape:
                                                            RoundedRectangleBorder(
                                                          borderRadius:
                                                              BorderRadiusStyle
                                                                  .roundedBorder13,
                                                        ),
                                                        child: Container(
                                                          height:
                                                              getVerticalSize(
                                                            23.00,
                                                          ),
                                                          width:
                                                              getHorizontalSize(
                                                            24.00,
                                                          ),
                                                          decoration:
                                                              AppDecoration
                                                                  .fillBluegray901
                                                                  .copyWith(
                                                            borderRadius:
                                                                BorderRadiusStyle
                                                                    .roundedBorder13,
                                                          ),
                                                          child: Stack(
                                                            children: [
                                                              Align(
                                                                alignment:
                                                                    Alignment
                                                                        .center,
                                                                child: Padding(
                                                                  padding:
                                                                      getPadding(
                                                                    left: 7,
                                                                    top: 6,
                                                                    right: 7,
                                                                    bottom: 6,
                                                                  ),
                                                                  child:
                                                                      CommonImageView(
                                                                    svgPath:
                                                                        ImageConstant
                                                                            .imgHome,
                                                                    height:
                                                                        getSize(
                                                                      9.00,
                                                                    ),
                                                                    width:
                                                                        getSize(
                                                                      9.00,
                                                                    ),
                                                                  ),
                                                                ),
                                                              ),
                                                            ],
                                                          ),
                                                        ),
                                                      ),
                                                      Padding(
                                                        padding: getPadding(
                                                          left: 4,
                                                          top: 8,
                                                          right: 80,
                                                          bottom: 8,
                                                        ),
                                                        child: Text(
                                                          "lbl_home".tr,
                                                          overflow: TextOverflow
                                                              .ellipsis,
                                                          textAlign:
                                                              TextAlign.left,
                                                          style: AppStyle
                                                              .txtDMSansMedium14
                                                              .copyWith(
                                                            height: 1.57,
                                                          ),
                                                        ),
                                                      ),
                                                    ],
                                                  ),
                                                ),
                                                Container(
                                                  margin: getMargin(
                                                    left: 8,
                                                  ),
                                                  decoration: AppDecoration
                                                      .fillBluegray901
                                                      .copyWith(
                                                    borderRadius:
                                                        BorderRadiusStyle
                                                            .roundedBorder2,
                                                  ),
                                                  child: Row(
                                                    crossAxisAlignment:
                                                        CrossAxisAlignment
                                                            .center,
                                                    mainAxisSize:
                                                        MainAxisSize.min,
                                                    children: [
                                                      Card(
                                                        clipBehavior:
                                                            Clip.antiAlias,
                                                        elevation: 0,
                                                        margin: getMargin(
                                                          left: 8,
                                                          top: 7,
                                                          bottom: 7,
                                                        ),
                                                        color: ColorConstant
                                                            .bluegray901,
                                                        shape:
                                                            RoundedRectangleBorder(
                                                          borderRadius:
                                                              BorderRadiusStyle
                                                                  .roundedBorder13,
                                                        ),
                                                        child: Container(
                                                          height:
                                                              getVerticalSize(
                                                            23.00,
                                                          ),
                                                          width:
                                                              getHorizontalSize(
                                                            24.00,
                                                          ),
                                                          decoration:
                                                              AppDecoration
                                                                  .fillBluegray901
                                                                  .copyWith(
                                                            borderRadius:
                                                                BorderRadiusStyle
                                                                    .roundedBorder13,
                                                          ),
                                                          child: Stack(
                                                            children: [
                                                              Align(
                                                                alignment:
                                                                    Alignment
                                                                        .center,
                                                                child: Padding(
                                                                  padding:
                                                                      getPadding(
                                                                    all: 7,
                                                                  ),
                                                                  child:
                                                                      CommonImageView(
                                                                    svgPath:
                                                                        ImageConstant
                                                                            .imgGroup38,
                                                                    height:
                                                                        getVerticalSize(
                                                                      8.00,
                                                                    ),
                                                                    width:
                                                                        getHorizontalSize(
                                                                      9.00,
                                                                    ),
                                                                  ),
                                                                ),
                                                              ),
                                                            ],
                                                          ),
                                                        ),
                                                      ),
                                                      Padding(
                                                        padding: getPadding(
                                                          left: 4,
                                                          top: 8,
                                                          right: 79,
                                                          bottom: 8,
                                                        ),
                                                        child: Text(
                                                          "lbl_office".tr,
                                                          overflow: TextOverflow
                                                              .ellipsis,
                                                          textAlign:
                                                              TextAlign.left,
                                                          style: AppStyle
                                                              .txtDMSansMedium14
                                                              .copyWith(
                                                            height: 1.57,
                                                          ),
                                                        ),
                                                      ),
                                                    ],
                                                  ),
                                                ),
                                              ],
                                            ),
                                          ),
                                          Container(
                                            margin: getMargin(
                                              top: 7,
                                              right: 10,
                                            ),
                                            decoration: AppDecoration
                                                .fillBluegray901
                                                .copyWith(
                                              borderRadius: BorderRadiusStyle
                                                  .roundedBorder2,
                                            ),
                                            child: Row(
                                              mainAxisAlignment:
                                                  MainAxisAlignment.start,
                                              crossAxisAlignment:
                                                  CrossAxisAlignment.center,
                                              mainAxisSize: MainAxisSize.min,
                                              children: [
                                                Card(
                                                  clipBehavior: Clip.antiAlias,
                                                  elevation: 0,
                                                  margin: getMargin(
                                                    left: 8,
                                                    top: 7,
                                                    bottom: 7,
                                                  ),
                                                  color:
                                                      ColorConstant.bluegray901,
                                                  shape: RoundedRectangleBorder(
                                                    borderRadius:
                                                        BorderRadiusStyle
                                                            .roundedBorder13,
                                                  ),
                                                  child: Container(
                                                    height: getVerticalSize(
                                                      23.00,
                                                    ),
                                                    width: getHorizontalSize(
                                                      24.00,
                                                    ),
                                                    decoration: AppDecoration
                                                        .fillBluegray901
                                                        .copyWith(
                                                      borderRadius:
                                                          BorderRadiusStyle
                                                              .roundedBorder13,
                                                    ),
                                                    child: Stack(
                                                      children: [
                                                        Align(
                                                          alignment:
                                                              Alignment.center,
                                                          child: Padding(
                                                            padding: getPadding(
                                                              left: 7,
                                                              top: 6,
                                                              right: 7,
                                                              bottom: 6,
                                                            ),
                                                            child:
                                                                CommonImageView(
                                                              svgPath:
                                                                  ImageConstant
                                                                      .imgLocation,
                                                              height:
                                                                  getVerticalSize(
                                                                10.00,
                                                              ),
                                                              width:
                                                                  getHorizontalSize(
                                                                9.00,
                                                              ),
                                                            ),
                                                          ),
                                                        ),
                                                      ],
                                                    ),
                                                  ),
                                                ),
                                                Padding(
                                                  padding: getPadding(
                                                    left: 4,
                                                    top: 8,
                                                    bottom: 8,
                                                  ),
                                                  child: Text(
                                                    "lbl_others".tr,
                                                    overflow:
                                                        TextOverflow.ellipsis,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtDMSansMedium14
                                                        .copyWith(
                                                      height: 1.57,
                                                    ),
                                                  ),
                                                ),
                                              ],
                                            ),
                                          ),
                                          CustomButton(
                                            width: 335,
                                            text: "lbl_save_address".tr,
                                            margin: getMargin(
                                              top: 19,
                                            ),
                                            variant:
                                                ButtonVariant.FillBluegray901,
                                            fontStyle:
                                                ButtonFontStyle.DMSansRegular18,
                                          ),
                                        ],
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
