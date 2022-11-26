import 'package:ar_indoor_navigation/presentation/android_large_one_screen/android_large_one_screen.dart';
import 'package:ar_indoor_navigation/presentation/android_large_one_screen/binding/android_large_one_binding.dart';
import 'package:ar_indoor_navigation/presentation/android_large_two_screen/android_large_two_screen.dart';
import 'package:ar_indoor_navigation/presentation/android_large_two_screen/binding/android_large_two_binding.dart';
import 'package:ar_indoor_navigation/presentation/android_large_three_screen/android_large_three_screen.dart';
import 'package:ar_indoor_navigation/presentation/android_large_three_screen/binding/android_large_three_binding.dart';
import 'package:ar_indoor_navigation/presentation/app_navigation_screen/app_navigation_screen.dart';
import 'package:ar_indoor_navigation/presentation/app_navigation_screen/binding/app_navigation_binding.dart';
import 'package:get/get.dart';

class AppRoutes {
  static String androidLargeOneScreen = '/android_large_one_screen';

  static String androidLargeTwoScreen = '/android_large_two_screen';

  static String androidLargeThreeScreen = '/android_large_three_screen';

  static String appNavigationScreen = '/app_navigation_screen';

  static String initialRoute = '/initialRoute';

  static List<GetPage> pages = [
    GetPage(
      name: androidLargeOneScreen,
      page: () => AndroidLargeOneScreen(),
      bindings: [
        AndroidLargeOneBinding(),
      ],
    ),
    GetPage(
      name: androidLargeTwoScreen,
      page: () => AndroidLargeTwoScreen(),
      bindings: [
        AndroidLargeTwoBinding(),
      ],
    ),
    GetPage(
      name: androidLargeThreeScreen,
      page: () => AndroidLargeThreeScreen(),
      bindings: [
        AndroidLargeThreeBinding(),
      ],
    ),
    GetPage(
      name: appNavigationScreen,
      page: () => AppNavigationScreen(),
      bindings: [
        AppNavigationBinding(),
      ],
    ),
    GetPage(
      name: initialRoute,
      page: () => AndroidLargeOneScreen(),
      bindings: [
        AndroidLargeOneBinding(),
      ],
    )
  ];
}
