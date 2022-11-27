import 'controller/new_pass_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/core/utils/validation_functions.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';

// ignore_for_file: must_be_immutable
class NewPassScreen extends GetWidget<NewPassController> {
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
                                                    "msg_create_new_password"
                                                        .tr,
                                                    overflow:
                                                        TextOverflow.ellipsis,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtUrbanistRomanBold30)),
                                            Align(
                                                alignment: Alignment.center,
                                                child: Container(
                                                    width: getHorizontalSize(
                                                        331.00),
                                                    margin: getMargin(
                                                        left: 14,
                                                        top: 14,
                                                        right: 14),
                                                    child: Text(
                                                        "msg_your_new_password"
                                                            .tr,
                                                        maxLines: null,
                                                        textAlign:
                                                            TextAlign.left,
                                                        style: AppStyle
                                                            .txtUrbanistRomanMedium16))),
                                            CustomTextFormField(
                                                width: 331,
                                                focusNode: FocusNode(),
                                                controller: controller
                                                    .newPasswordIController,
                                                hintText: "lbl_new_password".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 34,
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
                                                    .confirmPassworController,
                                                hintText:
                                                    "msg_confirm_password2".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 15,
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
                                                text: "lbl_reset_password".tr,
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 38,
                                                    right: 14,
                                                    bottom: 5),
                                                alignment: Alignment.center)
                                          ])))))
                    ]))));
  }

  onTapBtntf() {
    Get.back();
  }
}
