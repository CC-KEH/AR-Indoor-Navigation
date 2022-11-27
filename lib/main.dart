import 'package:flutter/foundation.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:ar_indoor_navigation/Authentication/Authenticate.dart';
import 'package:ar_indoor_navigation/Authentication/checking.dart';
import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';
import 'package:ar_indoor_navigation/animation/Fadeanimation.dart';
import 'package:ar_indoor_navigation/Authentication/registration_screen.dart';
import 'package:ar_indoor_navigation/Authentication/login_page.dart';
import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
import 'package:ar_indoor_navigation/Authentication/batchdetails.dart';
import 'core/app_export.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp();
  SystemChrome.setPreferredOrientations([
    DeviceOrientation.portraitUp,
  ]).then((value) {
    Logger.init(kReleaseMode ? LogMode.live : LogMode.debug);
    runApp(MyApp());
  });
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return GetMaterialApp(
      debugShowCheckedModeBanner: false,
      translations: AppLocalization(),
      locale: Get.deviceLocale, //for setting localization strings
      fallbackLocale: Locale('en', 'US'),
      title: 'minor1',
      initialBinding: InitialBindings(),
      //initialRoute: AppRoutes.initialRoute,
      initialRoute: AppRoutes.loginScreen,
      getPages: AppRoutes.pages,
    );
  }
}



// import 'package:ar_indoor_navigation/Authentication/Authenticate.dart';
// import 'package:ar_indoor_navigation/Authentication/checking.dart';
// import 'package:flutter/material.dart';
// import 'package:flutter/widgets.dart';
// import 'package:ar_indoor_navigation/animation/Fadeanimation.dart';
// import 'package:ar_indoor_navigation/Authentication/registration_screen.dart';
// import 'package:ar_indoor_navigation/Authentication/login_page.dart';
// import 'package:flutter/material.dart';
// import 'package:firebase_core/firebase_core.dart';
// import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
// import 'package:ar_indoor_navigation/Authentication/batchdetails.dart';
// void main() async {
//   WidgetsFlutterBinding.ensureInitialized();
//   await Firebase.initializeApp();
//   runApp(
//     MaterialApp(
//       debugShowCheckedModeBanner: false,
//       //home: Authenticate(),//checking was here
//       home: BatchDetails(),
//     ),
//   );
// }
//
//
// class HomePage extends StatelessWidget {
//   @override
//   Widget build(BuildContext context) {
//     return Scaffold(
//       body: SafeArea(
//         child: Container(
//           width: double.infinity,
//           height: MediaQuery.of(context).size.height,
//           padding: EdgeInsets.symmetric(horizontal: 30, vertical: 50),
//           child: Column(
//             mainAxisAlignment: MainAxisAlignment.spaceBetween,
//             crossAxisAlignment: CrossAxisAlignment.center,
//             children: <Widget>[
//               Column(
//                 children: <Widget>[
//                   //  FadeAnimation(
//                   //   1,
//                   Text(
//                     "Welcome",
//                     style: TextStyle(fontWeight: FontWeight.bold, fontSize: 30),
//                   ),
//                   // ),
//                   SizedBox(
//                     height: 20,
//                   ),
//                   // FadeAnimation(
//                   //    1.2,
//                   Text(
//                     "Automatic identity verification which enables you to verify your identity",
//                     textAlign: TextAlign.center,
//                     style: TextStyle(color: Colors.grey[700], fontSize: 15),
//                   ),
//                   //    ),
//                 ],
//               ),
//               //  FadeAnimation(
//               //    1.4,
//               Container(
//                 height: MediaQuery.of(context).size.height / 3,
//                 decoration: BoxDecoration(
//                     image: DecorationImage(
//                       //TODO: Add the image
//                         image: AssetImage('assets/illustration.png'))),
//               ),
//               // ),
//               Column(
//                 children: <Widget>[
//                   //FadeAnimation(
//                   // 1.5,
//                   MaterialButton(
//                     minWidth: double.infinity,
//                     height: 60,
//                     onPressed: () {
//                       Navigator.push(
//                           context,
//                           MaterialPageRoute(
//                               builder: (context) => LoginScreen()));
//                     },
//                     shape: RoundedRectangleBorder(
//                         side: BorderSide(color: Colors.black),
//                         borderRadius: BorderRadius.circular(50)),
//                     child: Text(
//                       "Login",
//                       style:
//                           TextStyle(fontWeight: FontWeight.w600, fontSize: 18),
//                     ),
//                   ),
//                   // ),
//                   SizedBox(
//                     height: 20,
//                   ),
//                   //  FadeAnimation(
//                   //1.6,
//                   Container(
//                     padding: EdgeInsets.only(top: 3, left: 3),
//                     decoration: BoxDecoration(
//                       borderRadius: BorderRadius.circular(50),
//                       border: Border(
//                         bottom: BorderSide(color: Colors.black),
//                         top: BorderSide(color: Colors.black),
//                         left: BorderSide(color: Colors.black),
//                         right: BorderSide(color: Colors.black),
//                       ),
//                     ),
//                     child: MaterialButton(
//                       minWidth: double.infinity,
//                       height: 60,
//                       onPressed: () {
//                         Navigator.push(
//                             context,
//                             MaterialPageRoute(
//                                 builder: (context) => RegistrationScreen()));
//                       },
//                       color: Colors.yellow,
//                       elevation: 0,
//                       shape: RoundedRectangleBorder(
//                           borderRadius: BorderRadius.circular(50)),
//                       child: Text(
//                         "Sign up",
//                         style: TextStyle(
//                             fontWeight: FontWeight.w600, fontSize: 18),
//                       ),
//                     ),
//                   ),
//                   //)
//                 ],
//               )
//             ],
//           ),
//         ),
//       ),
//     );
//   }
// }
//
// // import 'package:ar_indoor_navigation/Services/auth_page.dart';
// // import 'package:flutter/material.dart';
// // import 'package:firebase_core/firebase_core.dart';
// // import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
// // import 'package:ar_indoor_navigation/Services/checking.dart';
// //
// // void main() async {
// //   WidgetsFlutterBinding.ensureInitialized();
// //   await Firebase.initializeApp();
// //   runApp(MyApp());
// // }
// //
// // class MyApp extends StatelessWidget {
// //   const MyApp({super.key});
// //
// //   // This widget is the root of your application.
// //   @override
// //   Widget build(BuildContext context) {
// //     return MaterialApp(
// //       debugShowCheckedModeBanner: false,
// //       title: 'Flutter Demo',
// //       theme: ThemeData(
// //         primarySwatch: Colors.blue,
// //       ),
// //       initialRoute: '/checking',
// //       routes: {
// //         "/auth": (context) => AuthPage(),
// //         "/home": (context) => HomeScreen(),
// //         "/checking": (context) => Checking(),
// //         //"/chat": (context) => ChatScreen(),
// //       },
// //     );
// //   }
// // }
