import 'package:ar_indoor_navigation/Authentication/login_page.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/Authentication/registration_screen.dart';

class AuthPage extends StatefulWidget {
  const AuthPage({Key? key}) : super(key: key);

  @override
  State<AuthPage> createState() => _AuthPageState();
}

class _AuthPageState extends State<AuthPage> {
  bool showLoginPage = true;
  void toggleScreens() {
    setState(() {
      showLoginPage = !showLoginPage;
    });
  }

  @override
  Widget build(BuildContext context) {
    if (showLoginPage)
      return LoginScreen();
    else
      return RegistrationScreen();
  }
}
