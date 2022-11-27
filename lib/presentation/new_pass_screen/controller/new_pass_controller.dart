import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/new_pass_screen/models/new_pass_model.dart';
import 'package:flutter/material.dart';

class NewPassController extends GetxController {
  TextEditingController newPasswordIController = TextEditingController();

  TextEditingController confirmPassworController = TextEditingController();

  Rx<NewPassModel> newPassModelObj = NewPassModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
    newPasswordIController.dispose();
    confirmPassworController.dispose();
  }
}
