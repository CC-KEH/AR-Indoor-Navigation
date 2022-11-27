import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/forgot_pass_screen/models/forgot_pass_model.dart';
import 'package:flutter/material.dart';

class ForgotPassController extends GetxController {
  TextEditingController enteryouremaiController = TextEditingController();

  Rx<ForgotPassModel> forgotPassModelObj = ForgotPassModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
    enteryouremaiController.dispose();
  }
}
