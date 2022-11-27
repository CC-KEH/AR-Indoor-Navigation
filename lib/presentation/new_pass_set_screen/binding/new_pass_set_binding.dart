import '../controller/new_pass_set_controller.dart';
import 'package:get/get.dart';

class NewPassSetBinding extends Bindings {
  @override
  void dependencies() {
    Get.lazyPut(() => NewPassSetController());
  }
}
