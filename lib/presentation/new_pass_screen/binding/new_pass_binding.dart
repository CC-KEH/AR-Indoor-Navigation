import '../controller/new_pass_controller.dart';
import 'package:get/get.dart';

class NewPassBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => NewPassController());
  }
}
