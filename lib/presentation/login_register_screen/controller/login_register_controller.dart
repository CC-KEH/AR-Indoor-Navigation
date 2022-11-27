import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/login_register_screen/models/login_register_model.dart';

class LoginRegisterController extends GetxController {
  Rx<LoginRegisterModel> loginRegisterModelObj = LoginRegisterModel().obs;

  @override
  void onReady() {
    super.onReady();
  }

  @override
  void onClose() {
    super.onClose();
  }
}
