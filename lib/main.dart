import 'package:ar_indoor_navigation/Services/auth_page.dart';
import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
import 'package:ar_indoor_navigation/Services/checking.dart';

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
      debugShowCheckedModeBanner: false,
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      initialRoute: '/checking',
      routes: {
        "/auth": (context) => AuthPage(),
        "/home": (context) => HomeScreen(),
        "/checking": (context) => Checking(),
      },
    );
  }
}
