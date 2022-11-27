import 'package:ar_indoor_navigation/presentation/homescreen_screen/homescreen_screen.dart';

import 'controller/login_controller.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/core/utils/validation_functions.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';
import 'package:ar_indoor_navigation/domain/googleauth/google_auth_helper.dart';
import 'package:ar_indoor_navigation/Screens/Student/contacts_screen.dart';
import 'package:flutter/services.dart';
import 'package:ar_indoor_navigation/Authentication/methods.dart';
import 'package:ar_indoor_navigation/Authentication/registration_screen.dart';

class LoginScreen extends StatefulWidget{
  @override
  State<LoginScreen> createState() => _LoginScreenState();
}

class _LoginScreenState extends State<LoginScreen>{
  TextEditingController _emailController = TextEditingController();
  TextEditingController _passwordController = TextEditingController();
  bool isLoading = false;
  bool showPassword = false;
  @override
  void dispose() {
    _emailController.dispose();
    _passwordController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Scaffold(
        backgroundColor: ColorConstant.whiteA700,
        body: Form(
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
                        crossAxisAlignment: CrossAxisAlignment.start,
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          CustomIconButton(
                              height: 41,
                              width: 41,
                              margin: getMargin(left: 14, top: 12, right: 14),
                              onTap: () {
                                onTapBtntf();
                              },
                              child: CommonImageView(
                                  svgPath: ImageConstant.imgArrowleft)),
                          Container(
                              width: getHorizontalSize(272.00),
                              margin: getMargin(left: 14, top: 35, right: 14),
                              child: Text("Welcome Back!".tr,
                                  maxLines: null,
                                  textAlign: TextAlign.left,
                                  style: AppStyle.txtUrbanistRomanBold30)),
                          CustomTextFormField(
                              width: 331,
                              focusNode: FocusNode(),
                              controller: _emailController,
                              hintText: "Enter Your Email".tr,
                              margin: getMargin(left: 14, top: 33, right: 14),
                              variant: TextFormFieldVariant.OutlineIndigo50,
                              alignment: Alignment.center,
                              validator: (value) {
                                if (value == null ||
                                    (!isValidEmail(value, isRequired: true))) {
                                  return "Please enter valid email";
                                }
                                return null;
                              },),
                             CustomTextFormField(
                                width: 331,
                                focusNode: FocusNode(),
                                controller: _passwordController,
                                hintText: "Enter Your Password".tr,
                                margin: getMargin(left: 14, top: 15, right: 14),
                                textInputAction: TextInputAction.done,
                                alignment: Alignment.center,
                                suffix: InkWell(
                                  onTap: () {
                                    showPassword = !showPassword;
                                  },
                                  child: Container(
                                    margin: getMargin(
                                        left: 139,
                                        top: 17,
                                        right: 16,
                                        bottom: 17),
                                    child: CommonImageView(
                                        svgPath: showPassword
                                            ? ImageConstant.imgSignal
                                            : ImageConstant.imgSignal),
                                  ),
                                ),
                                suffixConstraints: BoxConstraints(
                                    minWidth: getHorizontalSize(22.00),
                                    minHeight: getVerticalSize(22.00)),
                                validator: (value) {
                                  if (value == null ||
                                      (!isValidPassword(value,
                                          isRequired: true))) {
                                    return "Please enter valid password";
                                  }
                                  return null;
                                },
                                isObscureText: !showPassword),

                          Align(
                              alignment: Alignment.centerRight,
                              child: Padding(
                                  padding:
                                      getPadding(left: 15, top: 16, right: 15),
                                  child: Text("forgot password".tr,
                                      overflow: TextOverflow.ellipsis,
                                      textAlign: TextAlign.left,
                                      style: AppStyle
                                          .txtUrbanistRomanSemiBold14))),
                          CustomButton(
                              onTap:(){
                                if (_emailController.text.isNotEmpty && _passwordController.text.isNotEmpty) {
                                  setState(() {
                                    isLoading = true;
                                  });

                                  logIn(_emailController.text, _passwordController.text).then((user) {
                                    if (user != null) {
                                      print("Login Sucessfull");
                                      setState(() {
                                        isLoading = false;
                                      });
                                      Navigator.push(
                                          context, MaterialPageRoute(builder: (_) => HomescreenScreen()));
                                    } else {
                                      print("Login Failed");
                                      setState(() {
                                        isLoading = false;
                                      });
                                    }
                                  });
                                } else {
                                  print("Please fill details correctly");
                                }
                              },
                              width: 331,
                              text: "Login".tr,
                              margin: getMargin(left: 14, top: 29, right: 14),
                              alignment: Alignment.center),
                          Align(
                            alignment: Alignment.center,
                            child: Padding(
                              padding: getPadding(left: 14, top: 36, right: 14),
                              child: Row(
                                mainAxisAlignment:
                                    MainAxisAlignment.spaceBetween,
                                crossAxisAlignment: CrossAxisAlignment.center,
                                mainAxisSize: MainAxisSize.max,
                                children: [
                                  Container(
                                      height: getVerticalSize(1.00),
                                      width: getHorizontalSize(112.00),
                                      margin: getMargin(top: 8, bottom: 8),
                                      decoration: BoxDecoration(
                                          color: ColorConstant.indigo50)),
                                  Text("Login with".tr,
                                      overflow: TextOverflow.ellipsis,
                                      textAlign: TextAlign.left,
                                      style:
                                          AppStyle.txtUrbanistRomanSemiBold14),
                                  Container(
                                      height: getVerticalSize(1.00),
                                      width: getHorizontalSize(111.00),
                                      margin: getMargin(top: 8, bottom: 8),
                                      decoration: BoxDecoration(
                                          color: ColorConstant.indigo50))
                                ],
                              ),
                            ),
                          ),
                          Align(
                            alignment: Alignment.center,
                            child: Padding(
                              padding: getPadding(left: 14, top: 21, right: 14),
                              child: Row(
                                mainAxisAlignment: MainAxisAlignment.start,
                                crossAxisAlignment: CrossAxisAlignment.center,
                                mainAxisSize: MainAxisSize.max,
                                children: [
                                  Card(
                                    clipBehavior: Clip.antiAlias,
                                    elevation: 0,
                                    margin: EdgeInsets.all(0),
                                    color: ColorConstant.whiteA700,
                                    shape: RoundedRectangleBorder(
                                        side: BorderSide(
                                            color: ColorConstant.indigo50,
                                            width: getHorizontalSize(1.00)),
                                        borderRadius:
                                            BorderRadiusStyle.roundedBorder8),
                                    child: Container(
                                      height: getVerticalSize(56.00),
                                      width: getHorizontalSize(105.00),
                                      decoration: AppDecoration.outlineIndigo50
                                          .copyWith(
                                              borderRadius: BorderRadiusStyle
                                                  .roundedBorder8),
                                      child: Stack(
                                        children: [
                                          Align(
                                            alignment: Alignment.centerLeft,
                                            child: Padding(
                                              padding: getPadding(
                                                  left: 37,
                                                  top: 15,
                                                  right: 37,
                                                  bottom: 15),
                                              child: InkWell(
                                                onTap: () {},
                                                child: CommonImageView(
                                                  svgPath:
                                                      ImageConstant.imgFacebook,
                                                  height: getSize(26.00),
                                                  width: getSize(26.00),
                                                ),
                                              ),
                                            ),
                                          ),
                                        ],
                                      ),
                                    ),
                                  ),
                                  Card(
                                    clipBehavior: Clip.antiAlias,
                                    elevation: 0,
                                    margin: getMargin(left: 8),
                                    color: ColorConstant.whiteA700,
                                    shape: RoundedRectangleBorder(
                                        side: BorderSide(
                                            color: ColorConstant.indigo50,
                                            width: getHorizontalSize(1.00)),
                                        borderRadius:
                                            BorderRadiusStyle.roundedBorder8),
                                    child: Container(
                                      height: getVerticalSize(56.00),
                                      width: getHorizontalSize(105.00),
                                      decoration: AppDecoration.outlineIndigo50
                                          .copyWith(
                                              borderRadius: BorderRadiusStyle
                                                  .roundedBorder8),
                                      child: Stack(
                                        children: [
                                          Align(
                                            alignment: Alignment.centerLeft,
                                            child: Padding(
                                              padding: getPadding(
                                                  left: 37,
                                                  top: 15,
                                                  right: 37,
                                                  bottom: 15),
                                              child: InkWell(
                                                onTap: () {
                                                  onTapImgGoogle();
                                                },
                                                child: CommonImageView(
                                                  svgPath:
                                                      ImageConstant.imgGoogle,
                                                  height: getSize(26.00),
                                                  width: getSize(26.00),
                                                ),
                                              ),
                                            ),
                                          ),
                                        ],
                                      ),
                                    ),
                                  ),
                                  Card(
                                    clipBehavior: Clip.antiAlias,
                                    elevation: 0,
                                    margin: getMargin(left: 8),
                                    color: ColorConstant.whiteA700,
                                    shape: RoundedRectangleBorder(
                                        side: BorderSide(
                                            color: ColorConstant.indigo50,
                                            width: getHorizontalSize(1.00)),
                                        borderRadius:
                                            BorderRadiusStyle.roundedBorder8),
                                    child: Container(
                                      height: getVerticalSize(56.00),
                                      width: getHorizontalSize(105.00),
                                      decoration: AppDecoration.outlineIndigo50
                                          .copyWith(
                                              borderRadius: BorderRadiusStyle
                                                  .roundedBorder8),
                                      child: Stack(
                                        children: [
                                          Align(
                                            alignment: Alignment.centerLeft,
                                            child: Padding(
                                              padding: getPadding(
                                                  left: 37,
                                                  top: 15,
                                                  right: 37,
                                                  bottom: 15),
                                              child: CommonImageView(
                                                svgPath: ImageConstant.imgFire,
                                                height: getSize(26.00),
                                                width: getSize(26.00),
                                              ),
                                            ),
                                          )
                                        ],
                                      ),
                                    ),
                                  ),
                                ],
                              ),
                            ),
                          ),
                          Align(
                            alignment: Alignment.center,
                            child: Container(
                              margin: getMargin(
                                  left: 14, top: 155, right: 14, bottom: 5),
                             child:  Row(
                                mainAxisAlignment: MainAxisAlignment.center,
                                children: <Widget>[
                                  Text("Don't have an account?"),
                                  GestureDetector(
                                    onTap: () =>
                                        Navigator.of(context).push(
                                            MaterialPageRoute(
                                                builder: (_) => RegistrationScreen())),
                                    child: Text(
                                      "Sign up",
                                      style: TextStyle(
                                          fontWeight: FontWeight.w600,
                                          fontSize: 15,
                                          color: Colors.blue),
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
              )
            ],
          ),
        ),
      ),
    );
  }

  onTapBtntf() {
    Get.back();
  }

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
