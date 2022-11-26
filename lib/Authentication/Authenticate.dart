import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
import 'package:ar_indoor_navigation/Authentication/login_page.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class Authenticate extends StatelessWidget {
  final FirebaseAuth _auth = FirebaseAuth.instance;

  @override
  Widget build(BuildContext context) {
    if (_auth.currentUser != null) {
      return MainScreen();
    } else {
      return LoginScreen();
    }
  }
}
