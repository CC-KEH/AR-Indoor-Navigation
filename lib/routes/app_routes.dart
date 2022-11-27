import 'package:ar_indoor_navigation/presentation/dm_screen/dm_screen.dart';
import 'package:ar_indoor_navigation/presentation/dm_screen/binding/dm_binding.dart';
import 'package:ar_indoor_navigation/presentation/welcome_screen/welcome_screen.dart';
import 'package:ar_indoor_navigation/presentation/welcome_screen/binding/welcome_binding.dart';
import 'package:ar_indoor_navigation/presentation/login_register_screen/login_register_screen.dart';
import 'package:ar_indoor_navigation/presentation/login_register_screen/binding/login_register_binding.dart';
import 'package:ar_indoor_navigation/presentation/login_screen/login_screen.dart';
import 'package:ar_indoor_navigation/presentation/login_screen/binding/login_binding.dart';
import 'package:ar_indoor_navigation/presentation/register_screen/register_screen.dart';
import 'package:ar_indoor_navigation/presentation/register_screen/binding/register_binding.dart';
import 'package:ar_indoor_navigation/presentation/forgot_pass_screen/forgot_pass_screen.dart';
import 'package:ar_indoor_navigation/presentation/forgot_pass_screen/binding/forgot_pass_binding.dart';
import 'package:ar_indoor_navigation/presentation/otp_screen/otp_screen.dart';
import 'package:ar_indoor_navigation/presentation/otp_screen/binding/otp_binding.dart';
import 'package:ar_indoor_navigation/presentation/new_pass_screen/new_pass_screen.dart';
import 'package:ar_indoor_navigation/presentation/new_pass_screen/binding/new_pass_binding.dart';
import 'package:ar_indoor_navigation/presentation/new_pass_set_screen/new_pass_set_screen.dart';
import 'package:ar_indoor_navigation/presentation/new_pass_set_screen/binding/new_pass_set_binding.dart';
import 'package:ar_indoor_navigation/presentation/homescreen_screen/homescreen_screen.dart';
import 'package:ar_indoor_navigation/presentation/homescreen_screen/binding/homescreen_binding.dart';
import 'package:ar_indoor_navigation/presentation/ar_screen/ar_screen.dart';
import 'package:ar_indoor_navigation/presentation/ar_screen/binding/ar_binding.dart';
import 'package:ar_indoor_navigation/presentation/chats_screen/chats_screen.dart';
import 'package:ar_indoor_navigation/presentation/chats_screen/binding/chats_binding.dart';
import 'package:ar_indoor_navigation/presentation/support_screen/support_screen.dart';
import 'package:ar_indoor_navigation/presentation/support_screen/binding/support_binding.dart';
import 'package:ar_indoor_navigation/presentation/app_navigation_screen/app_navigation_screen.dart';
import 'package:ar_indoor_navigation/presentation/app_navigation_screen/binding/app_navigation_binding.dart';
import 'package:get/get.dart';

class AppRoutes {
  static String dmScreen = '/dm_screen';

  static String welcomeScreen = '/welcome_screen';

  static String loginRegisterScreen = '/login_register_screen';

  static String loginScreen = '/login_screen';

  static String registerScreen = '/register_screen';

  static String forgotPassScreen = '/forgot_pass_screen';

  static String otpScreen = '/otp_screen';

  static String newPassScreen = '/new_pass_screen';

  static String newPassSetScreen = '/new_pass_set_screen';

  static String homescreenScreen = '/homescreen_screen';

  static String arScreen = '/ar_screen';

  static String chatsScreen = '/chats_screen';

  static String supportScreen = '/support_screen';

  static String appNavigationScreen = '/app_navigation_screen';

  static String initialRoute = '/initialRoute';

  static List<GetPage> pages = [
    GetPage(
      name: dmScreen,
      page: () => DmScreen(),
      bindings: [
        DmBinding(),
      ],
    ),
    GetPage(
      name: welcomeScreen,
      page: () => WelcomeScreen(),
      bindings: [
        WelcomeBinding(),
      ],
    ),
    GetPage(
      name: loginRegisterScreen,
      page: () => LoginRegisterScreen(),
      bindings: [
        LoginRegisterBinding(),
      ],
    ),
    GetPage(
      name: loginScreen,
      page: () => LoginScreen(),
      bindings: [
        LoginBinding(),
      ],
    ),
    GetPage(
      name: registerScreen,
      page: () => RegisterScreen(),
      bindings: [
        RegisterBinding(),
      ],
    ),
    GetPage(
      name: forgotPassScreen,
      page: () => ForgotPassScreen(),
      bindings: [
        ForgotPassBinding(),
      ],
    ),
    GetPage(
      name: otpScreen,
      page: () => OtpScreen(),
      bindings: [
        OtpBinding(),
      ],
    ),
    GetPage(
      name: newPassScreen,
      page: () => NewPassScreen(),
      bindings: [
        NewPassBinding(),
      ],
    ),
    GetPage(
      name: newPassSetScreen,
      page: () => NewPassSetScreen(),
      bindings: [
        NewPassSetBinding(),
      ],
    ),
    GetPage(
      name: homescreenScreen,
      page: () => HomescreenScreen(),
      bindings: [
        HomescreenBinding(),
      ],
    ),
    GetPage(
      name: arScreen,
      page: () => ArScreen(),
      bindings: [
        ArBinding(),
      ],
    ),
    GetPage(
      name: chatsScreen,
      page: () => ChatsScreen(),
      bindings: [
        ChatsBinding(),
      ],
    ),
    GetPage(
      name: supportScreen,
      page: () => SupportScreen(),
      bindings: [
        SupportBinding(),
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
      page: () => WelcomeScreen(),
      bindings: [
        WelcomeBinding(),
      ],
    )
  ];
}
