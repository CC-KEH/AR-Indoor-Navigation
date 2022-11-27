import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/dm_screen/models/dm_model.dart';
import 'package:flutter/material.dart';

class DmController extends GetxController {
  TextEditingController groupSixteenController = TextEditingController();

  Rx<DmModel> dmModelObj = DmModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
    groupSixteenController.dispose();
  }
}
