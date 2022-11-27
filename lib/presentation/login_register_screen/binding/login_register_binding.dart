import '../controller/login_register_controller.dart';
import 'package:get/get.dart';

class LoginRegisterBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => LoginRegisterController());
  }
}
