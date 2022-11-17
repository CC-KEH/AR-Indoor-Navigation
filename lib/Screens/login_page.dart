import 'package:ar_indoor_navigation/Screens/registration_screen.dart';
import 'package:flutter/material.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:ar_indoor_navigation/Services/AuthenticationServices.dart';
import 'package:ar_indoor_navigation/Services/checking.dart';

class LoginScreen extends StatefulWidget {
  @override
  _LoginScreenState createState() => _LoginScreenState();
}

class _LoginScreenState extends State<LoginScreen> {
  final _key = GlobalKey<FormState>();

  final AuthenticationServices _auth = AuthenticationServices();

  TextEditingController _emailController = TextEditingController();
  TextEditingController _passwordController = TextEditingController();

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
                  Text(
                    ' Register',
                    style: TextStyle(
                      color: Colors.blue,
                      fontWeight: FontWeight.bold,
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
  // body: Container(
  // color: Colors.deepPurple,
  // child: Center(
  // child: Form(
  // key: _key,
  // child: Column(
  // mainAxisAlignment: MainAxisAlignment.center,
  // children: [
  // Text(
  // 'Login',
  // style: TextStyle(
  // color: Colors.white,
  // fontSize: 30,
  // fontWeight: FontWeight.w600,
  // ),
  // ),
  // Padding(
  // padding: const EdgeInsets.all(32.0),
  // child: Column(
  // children: [
  // SizedBox(height: 30),
  // TextFormField(
  // controller: _emailController,
  // validator: (value) {
  // if (value!.isEmpty) {
  // return 'Email cannot be empty';
  // } else
  // return null;
  // },
  // decoration: InputDecoration(
  // labelText: 'Email',
  // labelStyle: TextStyle(color: Colors.white)),
  // style: TextStyle(color: Colors.white),
  // ),
  // SizedBox(height: 30),
  // TextFormField(
  // controller: _passwordController,
  // obscureText: true,
  // validator: (value) {
  // if (value!.isEmpty) {
  // return 'Password cannot be empty';
  // } else
  // return null;
  // },
  // decoration: InputDecoration(
  // labelText: 'Password',
  // labelStyle: TextStyle(color: Colors.white)),
  // style: TextStyle(
  // color: Colors.white,
  // ),
  // ),
  // SizedBox(height: 5),
  // TextButton(
  // child: Text(
  // 'Not registered? Sign up',
  // style: TextStyle(
  // color: Colors.white,
  // ),
  // ),
  // onPressed: () {
  // // Navigator.of(context).push(
  // //   CupertinoPageRoute(
  // //     fullscreenDialog: true,
  // //     builder: (context) => RegistrationScreen(),
  // //   ),
  // // );
  // },
  // ),
  // SizedBox(height: 30),
  // Row(
  // mainAxisAlignment: MainAxisAlignment.spaceEvenly,
  // children: [
  // TextButton(
  // child: Text(
  // 'Login',
  // style: TextStyle(
  // color: Colors.white,
  // ),
  // ),
  // onPressed: () {
  // if (_key.currentState!.validate()) {
  // //signInUser();
  // }
  // },
  // ),
  // ],
  // ),
  // ],
  // ),
  // ),
  // ],
  // ),
  // ),
  // ),
  // ),

// void signInUser() async {
//   dynamic authResult =
//       await _auth.loginUser(_emailController.text, _passwordController.text);
//   if (authResult == null) {
//     print('Sign in error. could not be able to login');
//   } else {
//     _emailController.clear();
//     _passwordController.clear();
//     Navigator.pushNamed(context, '/dashboard');
//   }
// }
}
