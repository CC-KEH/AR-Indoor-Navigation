import '../controller/chats_controller.dart';
import '../models/chats_item_model.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';

// ignore: must_be_immutable
class ChatsItemWidget extends StatelessWidget {
  ChatsItemWidget(this.chatsItemModelObj);

  ChatsItemModel chatsItemModelObj;

  var controller = Get.find<ChatsController>();

  @override
  Widget build(BuildContext context) {
    return Align(
      alignment: Alignment.center,
      child: Padding(
        padding: getPadding(
          left: 5,
          top: 12.225006,
          right: 5,
          bottom: 12.225006,
        ),
        child: Row(
          crossAxisAlignment: CrossAxisAlignment.start,
          mainAxisSize: MainAxisSize.max,
          children: [
            Padding(
              padding: getPadding(
                top: 1,
              ),
              child: ClipRRect(
                borderRadius: BorderRadius.circular(
                  getHorizontalSize(
                    22.00,
                  ),
                ),
                child: CommonImageView(
                  imagePath: ImageConstant.imgImage30x30,
                  height: getSize(
                    44.00,
                  ),
                  width: getSize(
                    44.00,
                  ),
                  fit: BoxFit.cover,
                ),
              ),
            ),
            Padding(
              padding: getPadding(
                left: 21,
                bottom: 5,
              ),
              child: Column(
                mainAxisSize: MainAxisSize.min,
                crossAxisAlignment: CrossAxisAlignment.start,
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Container(
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
                            bottom: 1,
                          ),
                          child: Text(
                            "lbl_person_1".tr,
                            overflow: TextOverflow.ellipsis,
                            textAlign: TextAlign.left,
                            style: AppStyle.txtRobotoRegular15.copyWith(
                              letterSpacing: 1.00,
                            ),
                          ),
                        ),
                        Padding(
                          padding: getPadding(
                            top: 1,
                          ),
                          child: Text(
                            "lbl_tue".tr,
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
                  Padding(
                    padding: getPadding(
                      top: 5,
                      right: 10,
                    ),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.start,
                      crossAxisAlignment: CrossAxisAlignment.center,
                      mainAxisSize: MainAxisSize.max,
                      children: [
                        Padding(
                          padding: getPadding(
                            top: 1,
                          ),
                          child: Text(
                            "msg_will_do_super".tr,
                            overflow: TextOverflow.ellipsis,
                            textAlign: TextAlign.left,
                            style: AppStyle.txtRobotoLight13.copyWith(
                              letterSpacing: 1.00,
                            ),
                          ),
                        ),
                        Padding(
                          padding: getPadding(
                            left: 6,
                            bottom: 1,
                          ),
                          child: CommonImageView(
                            svgPath: ImageConstant.imgGroup,
                            height: getSize(
                              15.00,
                            ),
                            width: getSize(
                              15.00,
                            ),
                          ),
                        ),
                        Padding(
                          padding: getPadding(
                            left: 5,
                            bottom: 1,
                          ),
                          child: CommonImageView(
                            svgPath: ImageConstant.imgFavorite,
                            height: getVerticalSize(
                              15.00,
                            ),
                            width: getHorizontalSize(
                              16.00,
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}
