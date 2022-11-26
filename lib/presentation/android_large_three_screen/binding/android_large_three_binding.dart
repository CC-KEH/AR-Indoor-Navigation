import '../controller/android_large_three_controller.dart';
import 'package:get/get.dart';

class AndroidLargeThreeBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => AndroidLargeThreeController());
  }
}
