import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/Screens/login_page.dart';
import 'package:ar_indoor_navigation/Screens/home_screen.dart';

class ICheckUser extends StatelessWidget {
  const ICheckUser({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: StreamBuilder<User?>(
        stream: FirebaseAuth.instance.authStateChanges(),
        builder: (context, snapshot) {
          if (snapshot.hasData) {
            Navigator.pushNamed(context, '/home');
          } else {
            Navigator.pushNamed(context, '/login');
          }
          return LoginScreen();
        },
      ),
    );
  }
}
