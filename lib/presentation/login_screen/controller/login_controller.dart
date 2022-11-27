import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/login_screen/models/login_model.dart';
import 'package:flutter/material.dart';

class LoginController extends GetxController {
  TextEditingController enteryouremaiController = TextEditingController();

  TextEditingController enteryourpassController = TextEditingController();

  Rx<LoginModel> loginModelObj = LoginModel().obs;

  Rx<bool> isShowPassword = false.obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
    enteryouremaiController.dispose();
    enteryourpassController.dispose();
  }
}
