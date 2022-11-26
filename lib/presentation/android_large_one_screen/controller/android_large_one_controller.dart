import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/presentation/android_large_one_screen/models/android_large_one_model.dart';
import 'package:ar_indoor_navigation/widgets/custom_bottom_bar.dart';
import 'package:ar_indoor_navigation/routes/app_routes.dart';

class AndroidLargeOneController extends GetxController {
  Rx<AndroidLargeOneModel> androidLargeOneModelObj = AndroidLargeOneModel().obs;

  Rx<BottomBarEnum> type = BottomBarEnum.Location.obs;

  @override
  void onReady() {
    super.onReady();
    Future.delayed(const Duration(milliseconds: 3000), () {
      Get.toNamed(AppRoutes.androidLargeTwoScreen);
    });
  }

  @override
  void onClose() {
    super.onClose();
  }
}
