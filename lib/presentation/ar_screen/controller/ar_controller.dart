import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/ar_screen/models/ar_model.dart';

class ArController extends GetxController {
  Rx<ArModel> arModelObj = ArModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
  }
}
