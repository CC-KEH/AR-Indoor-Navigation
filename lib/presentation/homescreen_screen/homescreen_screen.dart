import 'controller/homescreen_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_image.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/appbar_title.dart';
import 'package:ar_indoor_navigation/widgets/app_bar/custom_app_bar.dart';
import 'package:ar_indoor_navigation/utils/class_recommendations.dart';
import 'package:ar_indoor_navigation/Screens/Student/contacts_screen.dart';
import 'package:ar_indoor_navigation/presentation/chats_screen/chats_screen.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';

class HomescreenScreen extends StatefulWidget {
  const HomescreenScreen({Key? key}) : super(key: key);

  @override
  State<HomescreenScreen> createState() => _HomescreenScreenState();
}

class _HomescreenScreenState extends State<HomescreenScreen> {
  @override
  Widget build(BuildContext context) {
    Color mainColor = Color(0xff292F3F);
    return SafeArea(
      child: Scaffold(
        backgroundColor: mainColor,
        appBar: CustomAppBar(
          height: getVerticalSize(
            65.00,
          ),
          leadingWidth: 65,
          leading: AppbarImage(
            height: getVerticalSize(
              34.00,
            ),
            width: getHorizontalSize(
              51.00,
            ),
            svgPath: ImageConstant.imgLogo,
            margin: getMargin(
              left: 17,
              top: 11,
              bottom: 10,
            ),
          ),
          centerTitle: true,
          title: AppbarTitle(
            text: "JIIT-128",
          ),
        ),
        body: Container(
          child: Column(
            mainAxisSize: MainAxisSize.min,
            crossAxisAlignment: CrossAxisAlignment.start,
            mainAxisAlignment: MainAxisAlignment.end,
            children: [
              Align(
                alignment: Alignment.center,
                child: Padding(
                  padding: getPadding(
                    left: 4,
                    right: 13,
                  ),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
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
                                "Search".tr,
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
                                decoration: AppDecoration.fillGray700.copyWith(
                                  borderRadius:
                                      BorderRadiusStyle.roundedBorder8,
                                ),
                                child: GestureDetector(
                                  onTap: (){
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
                      Container(
                        child: GestureDetector(
                          onTap: () {
                            Navigator.of(context).push(
                              MaterialPageRoute(
//                                builder: (_) => Contacts(),
                                builder: (_) => ChatsScreen(),

                              ),
                            );
                          },
                          child: Icon(
                            Icons.people,
                            color: Colors.blue,
                            size: getSize(60),
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
              Padding(
                padding: getPadding(
                  left: 20,
                  top: 25,
                ),
                child: Text(
                  "Your Today's Classes ".tr,
                  overflow: TextOverflow.ellipsis,
                  textAlign: TextAlign.left,
                  style: AppStyle.txtRobotoRegular24.copyWith(
                    letterSpacing: 1.00,
                  ),
                ),
              ),
              Padding(
                padding: getPadding(
                  top: 15,
                ),
                child: Container(
                  height: 150,
                  child: ListView.builder(
                    itemCount: 5,
                    scrollDirection: Axis.horizontal,
                    itemBuilder: (context, index) {
                      return ClassRecommendation(
                        roomNO: 'LT4',
                        imagePath: 'lib/icons/jiit_logo.png',
                      );
                    },
                  ),
                ),
              ),
              Container(
                height: getVerticalSize(
                  4.00,
                ),
                width: getHorizontalSize(
                  174.00,
                ),
                margin: getMargin(
                  left: 79,
                  top: 10,
                  right: 79,
                ),
                decoration: BoxDecoration(),
              ),
              Padding(
                padding: getPadding(
                  left: 25,
                  top: 5,
                ),
                child: Text(
                  "Frequently Visited".tr,
                  overflow: TextOverflow.ellipsis,
                  textAlign: TextAlign.left,
                  style: AppStyle.txtRobotoRegular24.copyWith(
                    letterSpacing: 1.00,
                  ),
                ),
              ),
              Padding(
                padding: getPadding(
                  left: 4,
                  top: 15,
                  right: 10,
                ),
                child: Container(
                  height: size.height/2.4,
                  child: SingleChildScrollView(
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      crossAxisAlignment: CrossAxisAlignment.start,
                      mainAxisAlignment: MainAxisAlignment.end,
                      children: [
                        room("LT-1"),
                        info("First Floor"),
                        room("LT-2"),
                        info("First Floor"),
                        room("LT-3"),
                        info("First Floor"),
                        room("LT-4"),
                        info("First Floor"),
                        room("LT-5"),
                        info("First Floor"),
                        room("LT-6"),
                        info("First Floor"),
                        room("LT-7"),
                        info("First Floor"),
                        room("LT-8"),
                        info("First Floor"),
                      ],
                    ),
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget classroom(String Class) {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 8.0),
      child: Container(
        height: size.height / 4,
        width: size.width / 4,
        decoration: AppDecoration.outlineBlack90072.copyWith(
          borderRadius: BorderRadiusStyle.roundedBorder30,
        ),
        child: Column(
          mainAxisSize: MainAxisSize.min,
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Align(
              alignment: Alignment.centerLeft,
              child: Padding(
                padding: getPadding(
                  left: 30,
                  top: 80,
                  right: 15,
                ),
                child: Text(
                  "MPH".tr,
                  overflow: TextOverflow.ellipsis,
                  textAlign: TextAlign.left,
                  style: AppStyle.txtRobotoRegular12.copyWith(
                    letterSpacing: 1.00,
                  ),
                ),
              ),
            ),
            Align(
              alignment: Alignment.centerRight,
              child: Padding(
                padding: getPadding(
                  left: 50,
                  top: 1,
                  right: 10,
                  bottom: 30,
                ),
                child: CommonImageView(
                  svgPath: ImageConstant.imgClock,
                  height: getSize(
                    17.00,
                  ),
                  width: getSize(
                    17.00,
                  ),
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget room(String room) {
    return Container(
      child: Padding(
        padding: getPadding(
          top: 31,
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
                "$room".tr,
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
                "8:30 pm".tr,
                overflow: TextOverflow.ellipsis,
                textAlign: TextAlign.left,
                style: AppStyle.txtRobotoRegular15.copyWith(
                  letterSpacing: 1.00,
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget info(String room) {
    return Padding(
      padding: getPadding(
        top: 4,
        right: 10,
      ),
      child: Text(
        "2nd Floor".tr,
        overflow: TextOverflow.ellipsis,
        textAlign: TextAlign.left,
        style: AppStyle.txtRobotoLight13.copyWith(
          letterSpacing: 1.00,
        ),
      ),
    );
  }
}
