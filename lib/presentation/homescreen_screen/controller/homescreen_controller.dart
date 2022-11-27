import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/homescreen_screen/models/homescreen_model.dart';

class HomescreenController extends GetxController {
  Rx<HomescreenModel> homescreenModelObj = HomescreenModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
  }
}
