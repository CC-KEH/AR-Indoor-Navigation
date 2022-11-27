import '../chats_screen/widgets/chats_item_widget.dart';
import 'controller/chats_controller.dart';
import 'models/chats_item_model.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_image.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_title.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/custom_app_bar.dart';

class ChatsScreen extends GetWidget<ChatsController> {
  @override
  Widget build(BuildContext context) {
    Color mainColor = Color(0xff292F3F);
    return SafeArea(
      child: Scaffold(
        backgroundColor: mainColor,
        appBar: CustomAppBar(
          height: getVerticalSize(
            size.height / 8,
          ),
          leadingWidth: 50,
          leading: AppbarImage(
            height: getVerticalSize(
              3.00,
            ),
            width: getHorizontalSize(
              23.00,
            ),
            svgPath: ImageConstant.imgArrow1,
            margin: getMargin(
              left: 25,
              top: 30,
              bottom: 30,
            ),
          ),
          centerTitle: true,
          title: AppbarTitle(
            text: "Chats",
          ),
        ),
        body: SingleChildScrollView(
          child: Container(
            margin: getMargin(
              left: 14,
              top: 5,
              right: 13,
              bottom: 60,
            ),
            decoration: AppDecoration.outlineBluegray9007f.copyWith(
              borderRadius: BorderRadiusStyle.roundedBorder40,
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Align(
                  alignment: Alignment.center,
                  child: Padding(
                    padding: getPadding(
                      left: 3,
                    ),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisSize: MainAxisSize.max,
                      children: [
                        SizedBox(
                          width: size.width / 20,
                        ),
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
                                  "Search",
                                  overflow: TextOverflow.ellipsis,
                                  textAlign: TextAlign.left,
                                  style: AppStyle.txtHelvetica14.copyWith(
                                    letterSpacing: 1.00,
                                  ),
                                ),
                              ),
                              Container(
                                margin: getMargin(
                                  left: 155,
                                  right: 1,
                                ),
                                color: ColorConstant.bluegray800,
                                child: Container(
                                  height: getSize(
                                    50.00,
                                  ),
                                  width: getSize(
                                    50.00,
                                  ),
                                  decoration:
                                      AppDecoration.fillGray700.copyWith(
                                    borderRadius:
                                        BorderRadiusStyle.roundedBorder8,
                                  ),
                                  child: GestureDetector(
                                    onTap: () {
                                      //TODO: Search for Classroom
                                    },
                                    child: Icon(
                                      Icons.search_rounded,
                                      color: Colors.white,
                                      size: getSize(30),
                                    ),
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
                Padding(
                  padding: getPadding(
                    left: 10,
                    right: 13,
                    top: 90,
                  ),
                  child: Text(
                    "Frequent Chats",
                    overflow: TextOverflow.ellipsis,
                    textAlign: TextAlign.left,
                    style: AppStyle.txtRobotoRegular20
                        .copyWith(letterSpacing: 1.00, fontSize: 25),
                  ),
                ),
                Align(
                  alignment: Alignment.center,
                  child: Padding(
                    padding: getPadding(
                      left: 5,
                      top: 24,
                      right: 6,
                    ),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.end,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisSize: MainAxisSize.max,
                      children: [
                        Padding(
                          padding: getPadding(
                            bottom: 5,
                          ),
                          child: Column(
                            mainAxisSize: MainAxisSize.min,
                            crossAxisAlignment: CrossAxisAlignment.start,
                            mainAxisAlignment: MainAxisAlignment.start,
                            children: [
                              contact(),
                              lastMessage(),
                              contact(),
                              lastMessage(),
                              contact(),
                              lastMessage(),
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
      ),
    );
  }

  Widget lastMessage() {
    return Padding(
      padding: getPadding(
        top: 1,
        right: 10,
      ),
      child: CommonImageView(
        svgPath: ImageConstant.imgLightbulb,
        height: getSize(
          15.00,
        ),
        width: getSize(
          15.00,
        ),
      ),
    );
  }

  Widget image() {
    return ClipRRect(
      borderRadius: BorderRadius.circular(
        getHorizontalSize(
          22.00,
        ),
      ),
      child: CommonImageView(
        imagePath: ImageConstant.imgImage,
        height: getSize(
          44.00,
        ),
        width: getSize(
          44.00,
        ),
        fit: BoxFit.cover,
      ),
    );
  }

  Widget contact() {
    return Container(
      height: getVerticalSize(70),
      width: getHorizontalSize(
        257.00,
      ),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceBetween,
        crossAxisAlignment: CrossAxisAlignment.center,
        mainAxisSize: MainAxisSize.max,
        children: [
          Padding(
            padding: getPadding(
              top: 1,
            ),
            child: Text(
              'Doyel',
              overflow: TextOverflow.ellipsis,
              textAlign: TextAlign.left,
              style: AppStyle.txtRobotoRegular15.copyWith(
                letterSpacing: 1.00,
              ),
            ),
          ),
          Padding(
            padding: getPadding(
              bottom: 1,
            ),
            child: Text(
              "4:12 pm",
              overflow: TextOverflow.ellipsis,
              textAlign: TextAlign.left,
              style: AppStyle.txtRobotoRegular15.copyWith(
                letterSpacing: 1.00,
              ),
            ),
          ),
        ],
      ),
    );
  }
}
