import 'controller/otp_controller.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:pin_code_fields/pin_code_fields.dart';

class OtpScreen extends GetWidget<OtpController> {
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
                                                left: 14, top: 12, right: 14),
                                            onTap: () {
                                              onTapBtntf();
                                            },
                                            child: CommonImageView(
                                                svgPath: ImageConstant
                                                    .imgArrowleft)),
                                        Padding(
                                            padding: getPadding(
                                                left: 14, top: 28, right: 14),
                                            child: Text(
                                                "msg_otp_verification".tr,
                                                overflow: TextOverflow.ellipsis,
                                                textAlign: TextAlign.left,
                                                style: AppStyle
                                                    .txtUrbanistRomanBold30)),
                                        Align(
                                            alignment: Alignment.center,
                                            child: Container(
                                                width:
                                                    getHorizontalSize(329.00),
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 18,
                                                    right: 14),
                                                child: Text(
                                                    "msg_enter_the_verification"
                                                        .tr,
                                                    maxLines: null,
                                                    textAlign: TextAlign.left,
                                                    style: AppStyle
                                                        .txtUrbanistRomanMedium16Bluegray401))),
                                        Padding(
                                            padding: getPadding(
                                                left: 14, top: 37, right: 14),
                                            child: Container(
                                                width:
                                                    getHorizontalSize(331.00),
                                                height: getVerticalSize(60.00),
                                                child: Obx(() => PinCodeTextField(
                                                    appContext: context,
                                                    controller: controller
                                                        .otpController.value,
                                                    length: 4,
                                                    obscureText: false,
                                                    obscuringCharacter: '*',
                                                    keyboardType:
                                                        TextInputType.number,
                                                    autoDismissKeyboard: true,
                                                    enableActiveFill: true,
                                                    inputFormatters: [
                                                      FilteringTextInputFormatter
                                                          .digitsOnly
                                                    ],
                                                    onChanged: (value) {},
                                                    textStyle: TextStyle(
                                                        color: ColorConstant
                                                            .gray900,
                                                        fontSize:
                                                            getFontSize(22),
                                                        fontFamily: 'Urbanist',
                                                        fontWeight:
                                                            FontWeight.w700),
                                                    pinTheme: PinTheme(
                                                        fieldHeight:
                                                            getHorizontalSize(
                                                                60.00),
                                                        fieldWidth:
                                                            getHorizontalSize(
                                                                70.00),
                                                        shape:
                                                            PinCodeFieldShape.box,
                                                        borderRadius: BorderRadius.circular(getHorizontalSize(8.00)),
                                                        selectedFillColor: ColorConstant.gray50,
                                                        activeFillColor: ColorConstant.gray50,
                                                        inactiveFillColor: ColorConstant.gray50,
                                                        inactiveColor: ColorConstant.indigo50,
                                                        selectedColor: ColorConstant.indigo50,
                                                        activeColor: ColorConstant.indigo50))))),
                                        CustomButton(
                                            width: 331,
                                            text: "lbl_verify".tr,
                                            margin: getMargin(
                                                left: 14, top: 38, right: 14),
                                            alignment: Alignment.center),
                                        Align(
                                            alignment: Alignment.center,
                                            child: Container(
                                                margin: getMargin(
                                                    left: 14,
                                                    top: 355,
                                                    right: 14,
                                                    bottom: 5),
                                                child: RichText(
                                                    text: TextSpan(children: [
                                                      TextSpan(
                                                          text:
                                                              "msg_didn_t_received2"
                                                                  .tr,
                                                          style: TextStyle(
                                                              color:
                                                                  ColorConstant
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
                                                          text: "lbl_resend".tr,
                                                          style: TextStyle(
                                                              color:
                                                                  ColorConstant
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
                                                    textAlign: TextAlign.left)))
                                      ])))))
                ])));
  }

  onTapBtntf() {
    Get.back();
  }
}
