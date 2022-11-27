import 'controller/register_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/core/utils/validation_functions.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';
import 'package:ar_indoor_navigation/domain/googleauth/google_auth_helper.dart';

// ignore_for_file: must_be_immutable
class RegisterScreen extends GetWidget<RegisterController> {
  GlobalKey<FormState> _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    return SafeArea(
        child: Scaffold(
            backgroundColor: ColorConstant.whiteA700,
            body: Form(
                key: _formKey,
                autovalidateMode: AutovalidateMode.onUserInteraction,
                child: Column(
                    mainAxisSize: MainAxisSize.min,
                    crossAxisAlignment: CrossAxisAlignment.center,
                    mainAxisAlignment: MainAxisAlignment.end,
                    children: [
                      Expanded(
                          child: Align(
                              alignment: Alignment.centerLeft,
                              child: SingleChildScrollView(
                                  child: Container(
                                      decoration: AppDecoration.fillWhiteA700,
                                      child: Column(
                                          mainAxisSize: MainAxisSize.min,
                                          crossAxisAlignment:
                                              CrossAxisAlignment.start,
                                          mainAxisAlignment:
                                              MainAxisAlignment.start,
                                          children: [
                                            CustomIconButton(
                                                height: 41,
                                                width: 41,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 12,
                                                    right: 14),
                                                onTap: () {
                                                  onTapBtntf();
                                                },
                                                child: CommonImageView(
                                                    svgPath: ImageConstant
                                                        .imgArrowleft)),
                                            Container(
                                                width:
                                                    getHorizontalSize(272.00),
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 35,
                                                    right: 14),
                                                child: Text(
                                                    "msg_hello_register".tr,
                                                    maxLines: null,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtUrbanistRomanBold30)),
                                            CustomTextFormField(
                                                width: 331,
                                                focusNode: FocusNode(),
                                                controller: controller
                                                    .usernameInputController,
                                                hintText: "lbl_username".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 40,
                                                    right: 14),
                                                variant: TextFormFieldVariant
                                                    .OutlineIndigo50,
                                                alignment: Alignment.center,
                                                validator: (value) {
                                                  if (!isText(value)) {
                                                    return "Please enter valid text";
                                                  }
                                                  return null;
                                                }),
                                            CustomTextFormField(
                                                width: 331,
                                                focusNode: FocusNode(),
                                                controller: controller
                                                    .emailInputController,
                                                hintText: "lbl_email".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 12,
                                                    right: 14),
                                                variant: TextFormFieldVariant
                                                    .OutlineIndigo50,
                                                alignment: Alignment.center,
                                                validator: (value) {
                                                  if (value == null ||
                                                      (!isValidEmail(value,
                                                          isRequired: true))) {
                                                    return "Please enter valid email";
                                                  }
                                                  return null;
                                                }),
                                            CustomTextFormField(
                                                width: 331,
                                                focusNode: FocusNode(),
                                                controller: controller
                                                    .passwordInputController,
                                                hintText: "lbl_password".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 12,
                                                    right: 14),
                                                alignment: Alignment.center,
                                                validator: (value) {
                                                  if (value == null ||
                                                      (!isValidPassword(value,
                                                          isRequired: true))) {
                                                    return "Please enter valid password";
                                                  }
                                                  return null;
                                                },
                                                isObscureText: true),
                                            CustomTextFormField(
                                                width: 331,
                                                focusNode: FocusNode(),
                                                controller: controller
                                                    .confirmpassworController,
                                                hintText:
                                                    "msg_confirm_password".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 12,
                                                    right: 14),
                                                textInputAction:
                                                    TextInputAction.done,
                                                alignment: Alignment.center,
                                                validator: (value) {
                                                  if (value == null ||
                                                      (!isValidPassword(value,
                                                          isRequired: true))) {
                                                    return "Please enter valid password";
                                                  }
                                                  return null;
                                                },
                                                isObscureText: true),
                                            CustomButton(
                                                width: 331,
                                                text: "lbl_register".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 30,
                                                    right: 14),
                                                alignment: Alignment.center),
                                            Align(
                                                alignment: Alignment.center,
                                                child: Padding(
                                                    padding: getPadding(
                                                        left: 14,
                                                        top: 36,
                                                        right: 14),
                                                    child: Row(
                                                        mainAxisAlignment:
                                                            MainAxisAlignment
                                                                .spaceBetween,
                                                        crossAxisAlignment:
                                                            CrossAxisAlignment
                                                                .center,
                                                        mainAxisSize:
                                                            MainAxisSize.max,
                                                        children: [
                                                          Container(
                                                              height:
                                                                  getVerticalSize(
                                                                      1.00),
                                                              width:
                                                                  getHorizontalSize(
                                                                      103.00),
                                                              margin: getMargin(
                                                                  top: 8,
                                                                  bottom: 8),
                                                              decoration:
                                                                  BoxDecoration(
                                                                      color: ColorConstant
                                                                          .indigo50)),
                                                          Text(
                                                              "msg_or_register_with"
                                                                  .tr,
                                                              overflow:
                                                                  TextOverflow
                                                                      .ellipsis,
                                                              textAlign:
                                                                  TextAlign
                                                                      .left,
                                                              style: AppStyle
                                                                  .txtUrbanistRomanSemiBold14),
                                                          Container(
                                                              height:
                                                                  getVerticalSize(
                                                                      1.00),
                                                              width:
                                                                  getHorizontalSize(
                                                                      103.00),
                                                              margin: getMargin(
                                                                  top: 8,
                                                                  bottom: 8),
                                                              decoration:
                                                                  BoxDecoration(
                                                                      color: ColorConstant
                                                                          .indigo50))
                                                        ]))),
                                            Align(
                                                alignment: Alignment.center,
                                                child: Padding(
                                                    padding: getPadding(
                                                        left: 14,
                                                        top: 21,
                                                        right: 14),
                                                    child: Row(
                                                        mainAxisAlignment:
                                                            MainAxisAlignment
                                                                .start,
                                                        crossAxisAlignment:
                                                            CrossAxisAlignment
                                                                .center,
                                                        mainAxisSize:
                                                            MainAxisSize.max,
                                                        children: [
                                                          Card(
                                                              clipBehavior: Clip
                                                                  .antiAlias,
                                                              elevation: 0,
                                                              margin:
                                                                  EdgeInsets.all(
                                                                      0),
                                                              color: ColorConstant
                                                                  .whiteA700,
                                                              shape: RoundedRectangleBorder(
                                                                  side: BorderSide(
                                                                      color: ColorConstant
                                                                          .indigo50,
                                                                      width: getHorizontalSize(
                                                                          1.00)),
                                                                  borderRadius:
                                                                      BorderRadiusStyle
                                                                          .roundedBorder8),
                                                              child: Container(
                                                                  height: getVerticalSize(
                                                                      56.00),
                                                                  width: getHorizontalSize(
                                                                      105.00),
                                                                  decoration: AppDecoration
                                                                      .outlineIndigo50
                                                                      .copyWith(
                                                                          borderRadius: BorderRadiusStyle
                                                                              .roundedBorder8),
                                                                  child: Stack(
                                                                      children: [
                                                                        Align(
                                                                            alignment:
                                                                                Alignment.centerLeft,
                                                                            child: Padding(
                                                                                padding: getPadding(left: 37, top: 15, right: 37, bottom: 15),
                                                                                child: InkWell(
                                                                                    onTap: () {
                                                                                      // onTapImgFacebook();
                                                                                    },
                                                                                    child: CommonImageView(svgPath: ImageConstant.imgFacebook, height: getSize(26.00), width: getSize(26.00)))))
                                                                      ]))),
                                                          Card(
                                                              clipBehavior: Clip
                                                                  .antiAlias,
                                                              elevation: 0,
                                                              margin: getMargin(
                                                                  left: 8),
                                                              color:
                                                                  ColorConstant
                                                                      .whiteA700,
                                                              shape: RoundedRectangleBorder(
                                                                  side: BorderSide(
                                                                      color: ColorConstant
                                                                          .indigo50,
                                                                      width: getHorizontalSize(
                                                                          1.00)),
                                                                  borderRadius:
                                                                      BorderRadiusStyle
                                                                          .roundedBorder8),
                                                              child: Container(
                                                                  height:
                                                                      getVerticalSize(
                                                                          56.00),
                                                                  width:
                                                                      getHorizontalSize(
                                                                          105.00),
                                                                  decoration: AppDecoration
                                                                      .outlineIndigo50
                                                                      .copyWith(
                                                                          borderRadius: BorderRadiusStyle
                                                                              .roundedBorder8),
                                                                  child: Stack(
                                                                      children: [
                                                                        Align(
                                                                            alignment:
                                                                                Alignment.centerLeft,
                                                                            child: Padding(
                                                                                padding: getPadding(left: 37, top: 15, right: 37, bottom: 15),
                                                                                child: InkWell(
                                                                                    onTap: () {
                                                                                      onTapImgGoogle();
                                                                                    },
                                                                                    child: CommonImageView(svgPath: ImageConstant.imgGoogle, height: getSize(26.00), width: getSize(26.00)))))
                                                                      ]))),
                                                          Card(
                                                              clipBehavior: Clip
                                                                  .antiAlias,
                                                              elevation: 0,
                                                              margin: getMargin(
                                                                  left: 8),
                                                              color:
                                                                  ColorConstant
                                                                      .whiteA700,
                                                              shape: RoundedRectangleBorder(
                                                                  side: BorderSide(
                                                                      color: ColorConstant
                                                                          .indigo50,
                                                                      width: getHorizontalSize(
                                                                          1.00)),
                                                                  borderRadius:
                                                                      BorderRadiusStyle
                                                                          .roundedBorder8),
                                                              child: Container(
                                                                  height:
                                                                      getVerticalSize(
                                                                          56.00),
                                                                  width:
                                                                      getHorizontalSize(
                                                                          105.00),
                                                                  decoration: AppDecoration
                                                                      .outlineIndigo50
                                                                      .copyWith(
                                                                          borderRadius: BorderRadiusStyle
                                                                              .roundedBorder8),
                                                                  child: Stack(
                                                                      children: [
                                                                        Align(
                                                                            alignment:
                                                                                Alignment.centerLeft,
                                                                            child: Padding(padding: getPadding(left: 37, top: 15, right: 37, bottom: 15), child: CommonImageView(svgPath: ImageConstant.imgFire, height: getSize(26.00), width: getSize(26.00))))
                                                                      ])))
                                                        ]))),
                                            Align(
                                                alignment: Alignment.center,
                                                child: Container(
                                                    margin: getMargin(
                                                        left: 14,
                                                        top: 54,
                                                        right: 14,
                                                        bottom: 5),
                                                    child: RichText(
                                                        text:
                                                            TextSpan(children: [
                                                          TextSpan(
                                                              text: "msg_already_have_an2"
                                                                  .tr,
                                                              style: TextStyle(
                                                                  color: ColorConstant
                                                                      .gray900,
                                                                  fontSize:
                                                                      getFontSize(
                                                                          15),
                                                                  fontFamily:
                                                                      'Urbanist',
                                                                  fontWeight:
                                                                      FontWeight
                                                                          .w500,
                                                                  letterSpacing:
                                                                      0.15)),
                                                          TextSpan(
                                                              text: "lbl_login_now"
                                                                  .tr,
                                                              style: TextStyle(
                                                                  color: ColorConstant
                                                                      .cyan400,
                                                                  fontSize:
                                                                      getFontSize(
                                                                          15),
                                                                  fontFamily:
                                                                      'Urbanist',
                                                                  fontWeight:
                                                                      FontWeight
                                                                          .w700,
                                                                  letterSpacing:
                                                                      0.15))
                                                        ]),
                                                        textAlign:
                                                            TextAlign.left)))
                                          ])))))
                    ]))));
  }

  onTapBtntf() {
    Get.back();
  }

  // onTapImgFacebook() async {
  //   await FacebookAuthHelper().facebookSignInProcess().then((facebookUser) {
  //     //TODO Actions to be performed after signin
  //   }).catchError((onError) {
  //     Get.snackbar('Error', onError.toString());
  //   });
  // }

  onTapImgGoogle() async {
    await GoogleAuthHelper().googleSignInProcess().then((googleUser) {
      if (googleUser != null) {
        //TODO Actions to be performed after signin
      } else {
        Get.snackbar('Error', 'user data is empty');
      }
    }).catchError((onError) {
      Get.snackbar('Error', onError.toString());
    });
  }
}
