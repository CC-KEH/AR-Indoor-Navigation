import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:firebase_auth/firebase_auth.dart';

void main() {
  runApp(const MyApp());
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
      home: const MyHomePage(title: 'Firebase Authentication'),
      initialRoute: '/registration',
      routes: {
        "/home": (context) => WelcomeScreen(),
        "/registration": (context) => RegistrationScreen(),
        // "/support": (context) => RegistrationScreen(),
        // "/chat": (context) => RegistrationScreen(),
        // "/contacts": (context) => RegistrationScreen(),
        // "/location": (context) => RegistrationScreen(),
      },
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  //Back-End Work
  final _auth = FirebaseAuth.instance;
  late String email;
  late String password;

  @override
  Widget build(BuildContext context) {}
}

class FlashChat extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData.dark().copyWith(
        textTheme: TextTheme(
            //body1: TextStyle(color: Colors.black54),
            ),
      ),
      initialRoute: '/',
      routes: {
        "/": (context) => WelcomeScreen(),
        "/login": (context) => LoginScreen(),
        "/registration": (context) => RegistrationScreen(),
        "/chat": (context) => ChatScreen(),
      },
    );
  }
}
