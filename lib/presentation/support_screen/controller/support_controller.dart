import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/support_screen/models/support_model.dart';
import 'package:flutter/material.dart';

class SupportController extends GetxController {
  TextEditingController groupNineteenController = TextEditingController();

  Rx<SupportModel> supportModelObj = SupportModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
    groupNineteenController.dispose();
  }
}
