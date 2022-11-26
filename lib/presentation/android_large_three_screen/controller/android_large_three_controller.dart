import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/android_large_three_screen/models/android_large_three_model.dart';
import 'package:flutter/material.dart';

class AndroidLargeThreeController extends GetxController {
  TextEditingController composenewbtnController = TextEditingController();

  Rx<AndroidLargeThreeModel> androidLargeThreeModelObj =
      AndroidLargeThreeModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
    composenewbtnController.dispose();
  }
}
