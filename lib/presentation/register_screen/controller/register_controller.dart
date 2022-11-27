import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/register_screen/models/register_model.dart';
import 'package:flutter/material.dart';

class RegisterController extends GetxController {
  TextEditingController usernameInputController = TextEditingController();

  TextEditingController emailInputController = TextEditingController();

  TextEditingController passwordInputController = TextEditingController();

  TextEditingController confirmpassworController = TextEditingController();

  Rx<RegisterModel> registerModelObj = RegisterModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
    usernameInputController.dispose();
    emailInputController.dispose();
    passwordInputController.dispose();
    confirmpassworController.dispose();
  }
}
