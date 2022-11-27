import '../controller/ar_controller.dart';
import 'package:get/get.dart';

class ArBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => ArController());
  }
}
