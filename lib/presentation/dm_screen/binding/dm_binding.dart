import '../controller/dm_controller.dart';
import 'package:get/get.dart';

class DmBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => DmController());
  }
}
