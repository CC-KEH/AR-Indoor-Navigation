import 'package:ar_indoor_navigation/Screens/Student/contacts_screen.dart';
import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/animation/Fadeanimation.dart';
import 'package:flutter/services.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:ar_indoor_navigation/Authentication/methods.dart';
import 'package:ar_indoor_navigation/Authentication/checking.dart';
import 'package:ar_indoor_navigation/Authentication/registration_screen.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/core/utils/validation_functions.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';
import 'package:ar_indoor_navigation/domain/googleauth/google_auth_helper.dart';

class LoginScreen extends StatefulWidget {
  // final VoidCallback showRegistrationScreen;
  // const LoginScreen({Key? key, required this.showRegistrationScreen})
  //     : super(key: key);
  @override
  _LoginScreenState createState() => _LoginScreenState();
}

class _LoginScreenState extends State<LoginScreen> {
  TextEditingController _emailController = TextEditingController();
  TextEditingController _passwordController = TextEditingController();
  bool isLoading = false;

  // Future signIn() async {
  //   await FirebaseAuth.instance.signInWithEmailAndPassword(
  //     email: _emailController.text.trim(),
  //     password: _passwordController.text.trim(),
  //   );
  // }

  @override
  void dispose() {
    _emailController.dispose();
    _passwordController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final size = MediaQuery
        .of(context)
        .size;
    return Scaffold(
      resizeToAvoidBottomInset: false,
      backgroundColor: Colors.white,
      appBar: AppBar(
        elevation: 0,
        brightness: Brightness.light,
        //systemOverlayStyle: SystemUiOverlayStyle.light,
        backgroundColor: Colors.white,
        leading: IconButton(
          onPressed: () {
            Navigator.pop(context);
          },
          icon: Icon(
            Icons.arrow_back_ios,
            size: 20,
            color: Colors.black,
          ),
        ),
      ),
      body: isLoading
          ? Center(
        child: Container(
          height: size.height / 20,
          width: size.height / 20,
          child: CircularProgressIndicator(),
        ),
      )
          : Container(
        height: MediaQuery
            .of(context)
            .size
            .height,
        width: double.infinity,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: <Widget>[
            Expanded(
              child: Column(
                mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                children: <Widget>[
                  Column(
                    children: <Widget>[
                      //   FadeAnimation(
                      //     1,
                      Text(
                        "Login",
                        style: TextStyle(
                            fontSize: 30, fontWeight: FontWeight.bold),
                      ),
                      //   ),
                      SizedBox(
                        height: 20,
                      ),
                      //  FadeAnimation(
                      //  1.2,
                      Text(
                        "Login to your account",
                        style: TextStyle(fontSize: 15, color: Colors.grey[700]),
                      ),
                      //    ),
                    ],
                  ),
                  SizedBox(
                    height: 20,
                  ),
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 40),
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: <Widget>[
                        //   FadeAnimation(1.2, makeInput(label: "Email")),
                        //   FadeAnimation(
                        //     1.3,
                        // makeInput(label: "Password", obscureText: true),
                        Text(
                          'Email',
                          style: TextStyle(
                              fontSize: 15,
                              fontWeight: FontWeight.w400,
                              color: Colors.black87),
                        ),
                        SizedBox(
                          height: 5,
                        ),
                        TextField(
                          controller: _emailController,
                          obscureText: false,
                          decoration: InputDecoration(
                            contentPadding: EdgeInsets.symmetric(
                                vertical: 0, horizontal: 10),
                            enabledBorder: OutlineInputBorder(
                                borderSide:
                                BorderSide(color: Colors.grey.shade400)),
                            border: OutlineInputBorder(
                                borderSide:
                                BorderSide(color: Colors.grey.shade400)),
                          ),
                        ),
                        SizedBox(
                          height: 20,
                        ),
                        //   ),
                      ],
                    ),
                  ),

                  //this is it
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 40),
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: <Widget>[
                        //   FadeAnimation(1.2, makeInput(label: "Email")),
                        //   FadeAnimation(
                        //     1.3,
                        // makeInput(label: "Password", obscureText: true),
                        Text(
                          'Password',
                          style: TextStyle(
                              fontSize: 15,
                              fontWeight: FontWeight.w400,
                              color: Colors.black87),
                        ),
                        SizedBox(
                          height: 5,
                        ),
                        TextField(
                          controller: _passwordController,
                          obscureText: true,
                          decoration: InputDecoration(
                            contentPadding: EdgeInsets.symmetric(
                                vertical: 0, horizontal: 10),
                            enabledBorder: OutlineInputBorder(
                                borderSide:
                                BorderSide(color: Colors.grey.shade400)),
                            border: OutlineInputBorder(
                                borderSide:
                                BorderSide(color: Colors.grey.shade400)),
                          ),
                        ),
                        SizedBox(
                          height: 20,
                        ),
                        //   ),
                      ],
                    ),
                  ),
                  //FadeAnimation(
                  //1.4,
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 40),
                    child: Container(
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(50),
                        border: Border(
                          bottom: BorderSide(color: Colors.black),
                          top: BorderSide(color: Colors.black),
                          left: BorderSide(color: Colors.black),
                          right: BorderSide(color: Colors.black),
                        ),
                      ),
                      child: customButton(size),
                      // child: MaterialButton(
                      //   minWidth: double.infinity,
                      //   height: 60,
                      //   onPressed: () {},
                      //   color: Colors.greenAccent,
                      //   elevation: 0,
                      //   shape: RoundedRectangleBorder(
                      //       borderRadius: BorderRadius.circular(50)),
                      //   child: GestureDetector(
                      //     onTap: signIn,
                      //     child: Text(
                      //       "Login",
                      //       style: TextStyle(
                      //           fontWeight: FontWeight.w600, fontSize: 18),
                      //     ),
                      //   ),
                      // ),
                    ),
                  ),

                  //),
                  // FadeAnimation(
                  //   1.5,
                  Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: <Widget>[
                      Text("Don't have an account?"),
                      GestureDetector(
                        onTap: () =>
                            Navigator.of(context).push(
                                MaterialPageRoute(
                                    builder: (_) => RegistrationScreen())),
                        child: Text(
                          "Sign up",
                          style: TextStyle(
                              fontWeight: FontWeight.w600,
                              fontSize: 15,
                              color: Colors.blue),
                        ),
                      ),
                    ],
                  ),
                  // )
                ],
              ),
            ),
            // FadeAnimation(
            //  1.2,
            Container(
              height: MediaQuery
                  .of(context)
                  .size
                  .height / 5,
              decoration: BoxDecoration(
                image: DecorationImage(
                  //TODO: Add the image
                    image: AssetImage('assets/background.png'),
                    fit: BoxFit.cover),
              ),
            ),
            // )
          ],
        ),
      ),
    );
  }

  Widget customButton(Size size) {
    return GestureDetector(
      onTap: () {
        if (_emailController.text.isNotEmpty && _passwordController.text.isNotEmpty) {
          setState(() {
            isLoading = true;
          });

          logIn(_emailController.text, _passwordController.text).then((user) {
            if (user != null) {
              print("Login Sucessfull");
              setState(() {
                isLoading = false;
              });
              Navigator.push(
                  context, MaterialPageRoute(builder: (_) => Contacts()));
            } else {
              print("Login Failed");
              setState(() {
                isLoading = false;
              });
            }
          });
        } else {
          print("Please fill details correctly");
        }
      },
      child: Container(
          height: size.height / 14,
          width: size.width / 1.2,
          decoration: BoxDecoration(
            borderRadius: BorderRadius.circular(50),
            color: Colors.deepPurpleAccent,
          ),
          alignment: Alignment.center,
          child: Text(
            "Login",
            style: TextStyle(
              color: Colors.white,
              fontSize: 18,
              fontWeight: FontWeight.bold,
            ),
          )),
    );
  }
}