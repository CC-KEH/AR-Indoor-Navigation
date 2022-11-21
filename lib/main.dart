import 'package:ar_indoor_navigation/Screens/Admin/EnterDetails.dart';
import 'package:ar_indoor_navigation/Screens/Student/chat_screen.dart';
import 'package:ar_indoor_navigation/Screens/Student/contacts_screen.dart';
import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:ar_indoor_navigation/Screens/Student/login_page.dart';
import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
import 'package:cupertino_icons/cupertino_icons.dart';
import 'package:ar_indoor_navigation/Screens/Student/registration_screen.dart';

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
      initialRoute: '/contacts',
      routes: {
        "/home": (context) => HomeScreen(),
        "/registration": (context) => RegistrationScreen(),
        "/login": (context) => LoginScreen(),
        "/chat": (context) => Chat(),
        "/contacts": (context) => Contacts(),
        "/enterbatchdetails": (context) => EnterDetails(),

        // "/location": (context) => RegistrationScreen(),
        // "/support": (context) => RegistrationScreen(),
      },
    );
  }
}
