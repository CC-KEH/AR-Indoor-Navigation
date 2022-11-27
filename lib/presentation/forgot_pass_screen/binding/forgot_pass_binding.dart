import '../controller/forgot_pass_controller.dart';
import 'package:get/get.dart';

class ForgotPassBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => ForgotPassController());
  }
}
