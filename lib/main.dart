import 'package:ar_indoor_navigation/Screens/login_page.dart';
import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:ar_indoor_navigation/Screens/registration_screen.dart';
import 'package:ar_indoor_navigation/Screens/home_screen.dart';
import 'package:cupertino_icons/cupertino_icons.dart';
import 'package:ar_indoor_navigation/Screens/login_page.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp();
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      initialRoute: '/registration',
      routes: {
        "/home": (context) => HomeScreen(),
        "/registration": (context) => RegistrationScreen(),
        "/login": (context) => LoginScreen(),
        // "/support": (context) => RegistrationScreen(),
        // "/chat": (context) => RegistrationScreen(),
        // "/contacts": (context) => RegistrationScreen(),
        // "/location": (context) => RegistrationScreen(),
      },
    );
  }
}
