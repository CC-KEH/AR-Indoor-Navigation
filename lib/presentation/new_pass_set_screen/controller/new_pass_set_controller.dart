import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/new_pass_set_screen/models/new_pass_set_model.dart';

class NewPassSetController extends GetxController {
  Rx<NewPassSetModel> newPassSetModelObj = NewPassSetModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
  }
}
