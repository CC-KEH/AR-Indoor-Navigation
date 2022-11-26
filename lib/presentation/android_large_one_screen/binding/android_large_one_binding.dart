import '../controller/android_large_one_controller.dart';
import 'package:get/get.dart';

class AndroidLargeOneBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => AndroidLargeOneController());
  }
}
