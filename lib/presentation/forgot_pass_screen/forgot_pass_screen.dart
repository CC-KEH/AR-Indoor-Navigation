import 'controller/forgot_pass_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/core/utils/validation_functions.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';

// ignore_for_file: must_be_immutable
class ForgotPassScreen extends GetWidget<ForgotPassController> {
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
                                            Padding(
                                                padding: getPadding(
                                                    left: 14,
                                                    top: 32,
                                                    right: 14),
                                                child: Text(
                                                    "msg_forgot_password".tr,
                                                    overflow:
                                                        TextOverflow.ellipsis,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtUrbanistRomanBold30)),
                                            Container(
                                                width:
                                                    getHorizontalSize(310.00),
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 14,
                                                    right: 14),
                                                child: Text(
                                                    "msg_don_t_worry_it".tr,
                                                    maxLines: null,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtUrbanistRomanMedium16)),
                                            CustomTextFormField(
                                                width: 331,
                                                focusNode: FocusNode(),
                                                controller: controller
                                                    .enteryouremaiController,
                                                hintText:
                                                    "msg_enter_your_email".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 34,
                                                    right: 14),
                                                textInputAction:
                                                    TextInputAction.done,
                                                alignment: Alignment.center,
                                                validator: (value) {
                                                  if (value == null ||
                                                      (!isValidEmail(value,
                                                          isRequired: true))) {
                                                    return "Please enter valid email";
                                                  }
                                                  return null;
                                                }),
                                            CustomButton(
                                                width: 331,
                                                text: "lbl_send_code".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 38,
                                                    right: 14),
                                                alignment: Alignment.center),
                                            Align(
                                                alignment: Alignment.center,
                                                child: Container(
                                                    margin: getMargin(
                                                        left: 14,
                                                        top: 361,
                                                        right: 14,
                                                        bottom: 5),
                                                    child: RichText(
                                                        text:
                                                            TextSpan(children: [
                                                          TextSpan(
                                                              text: "msg_remember_password2"
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
                                                              text: "lbl_login"
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
}
