import 'package:ar_indoor_navigation/Screens/Student/registration_screen.dart';
import 'package:flutter/material.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:ar_indoor_navigation/Services/checking.dart';

class LoginScreen extends StatefulWidget {
  final VoidCallback showRegistrationScreen;
  const LoginScreen({Key? key, required this.showRegistrationScreen})
      : super(key: key);
  @override
  _LoginScreenState createState() => _LoginScreenState();
}

class _LoginScreenState extends State<LoginScreen> {
  final _emailController = TextEditingController();
  final _passwordController = TextEditingController();

  Future signIn() async {
    await FirebaseAuth.instance.signInWithEmailAndPassword(
      email: _emailController.text.trim(),
      password: _passwordController.text.trim(),
    );
  }

  @override
  void dispose() {
    _emailController.dispose();
    _passwordController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey.shade300,
      body: SafeArea(
        child: Center(
          child: SingleChildScrollView(
            child:
                Column(mainAxisAlignment: MainAxisAlignment.center, children: [
              Text(
                "Welcome! ",
                style: TextStyle(
                  fontWeight: FontWeight.bold,
                  fontSize: 36,
                ),
              ),
              SizedBox(
                height: 10,
              ),
              Text(
                "We are happy to have you! ",
                style: TextStyle(
                  fontSize: 18,
                ),
              ),
              SizedBox(
                height: 50,
              ),
              //Email
              Padding(
                padding: EdgeInsets.symmetric(horizontal: 25),
                child: Container(
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(12),
                    color: Colors.grey.shade200,
                    border: Border.all(color: Colors.white),
                  ),
                  child: TextField(
                    controller: _emailController,
                    decoration: InputDecoration(
                      contentPadding: EdgeInsets.symmetric(horizontal: 20),
                      hintText: "haha@thisApp.com",
                      border: InputBorder.none,
                    ),
                  ),
                ),
              ),
              //Passwd
              SizedBox(
                height: 10,
              ),
              //Email
              Padding(
                padding: EdgeInsets.symmetric(horizontal: 25),
                child: Container(
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(12),
                    color: Colors.grey.shade200,
                    border: Border.all(color: Colors.white),
                  ),
                  child: TextField(
                    obscureText: true,
                    controller: _passwordController,
                    decoration: InputDecoration(
                      contentPadding: EdgeInsets.symmetric(horizontal: 20),
                      hintText: "Password",
                      border: InputBorder.none,
                    ),
                  ),
                ),
              ),
              SizedBox(
                height: 10,
              ),
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 25),
                child: GestureDetector(
                  onTap: signIn,
                  child: Container(
                    padding: EdgeInsets.all(20),
                    decoration: BoxDecoration(
                      color: Colors.indigo,
                      borderRadius: BorderRadius.circular(12),
                    ),
                    child: Center(
                      child: Text(
                        'Sign in',
                        style: TextStyle(
                          color: Colors.white,
                          fontWeight: FontWeight.bold,
                          fontSize: 20,
                        ),
                      ),
                    ),
                  ),
                ),
              ),
              SizedBox(
                height: 20,
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Text(
                    'Not a member?',
                    style: TextStyle(fontWeight: FontWeight.bold),
                  ),
                  GestureDetector(
                    onTap: widget.showRegistrationScreen,
                    child: Text(
                      ' Register',
                      style: TextStyle(
                        color: Colors.blue,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                ],
              )
              //Register
            ]),
          ),
        ),
      ),
    );
  }
}
