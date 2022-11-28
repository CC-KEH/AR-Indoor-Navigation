import '../controller/homescreen_controller.dart';
import 'package:get/get.dart';

class adminHomescreenBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => adminHomescreenController());
  }
}
