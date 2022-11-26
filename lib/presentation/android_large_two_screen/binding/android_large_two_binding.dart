import '../controller/android_large_two_controller.dart';
import 'package:get/get.dart';

class AndroidLargeTwoBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => AndroidLargeTwoController());
  }
}
