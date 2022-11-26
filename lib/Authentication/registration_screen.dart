import 'package:ar_indoor_navigation/Authentication/login_page.dart';
import 'package:ar_indoor_navigation/Screens/Student/contacts_screen.dart';
import 'package:ar_indoor_navigation/Screens/Student/home_screen.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/animation/Fadeanimation.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:ar_indoor_navigation/Authentication/methods.dart';
class RegistrationScreen extends StatefulWidget {
  // For going to login page
  // final VoidCallback showLoginScreen;
  // const RegistrationScreen({Key? key, required this.showLoginScreen})
  //     : super(key: key);
  @override
  _RegistrationScreenState createState() => _RegistrationScreenState();
}

class _RegistrationScreenState extends State<RegistrationScreen> {
  TextEditingController _firstNameController = TextEditingController();
  TextEditingController _lastNameController = TextEditingController();
  TextEditingController _emailController = TextEditingController();
  TextEditingController _passwordController = TextEditingController();
  TextEditingController _confirmedPasswordController = TextEditingController();
  TextEditingController _batchController = TextEditingController();
  TextEditingController _enrollNoController = TextEditingController();
  TextEditingController _yearController = TextEditingController();
  TextEditingController _courseController = TextEditingController();
  bool isLoading = false;

  @override
  void dispose() {
    _firstNameController.dispose();
    _lastNameController.dispose();
    _emailController.dispose();
    _passwordController.dispose();
    _confirmedPasswordController.dispose();
    _batchController.dispose();
    _enrollNoController.dispose();
    _yearController.dispose();
    _courseController.dispose();
    super.dispose();
  }

  Future signUp() async {
    print("int signup function");
    if (passwordConfirmed()) {
      print("Password Confirmed");
      //Create User
      await FirebaseAuth.instance.createUserWithEmailAndPassword(
        email: _emailController.text.trim(),
        password: _passwordController.text.trim(),
      );
      FirebaseAuth.instance.currentUser!
          .updateDisplayName(_firstNameController.text.trim());
      addDetails(
        _firstNameController.text.trim(),
        _lastNameController.text.trim(),
        _emailController.text.toString().trim(),
        _batchController.text.trim(),
        int.parse(_enrollNoController.text.trim()),
        _courseController.text.trim(),
        int.parse(_yearController.text.trim()),
      );
    }
  }

  Future addDetails(String firstName,
      String lastName,
      String email,
      String batch,
      num eno,
      String course,
      int year,) async {
    await FirebaseFirestore.instance.collection('Users').add({
      'First Name': firstName,
      'Last Name': lastName,
      'Email': email,
      'Batch': batch,
      'Eno': eno,
      'Course': course,
      'Year': year,
    });
  }

  bool passwordConfirmed() {
    if (_passwordController.text.trim() ==
        _confirmedPasswordController.text.trim()) {
      return true;
    } else {
      return false;
    }
  }

  @override
  Widget build(BuildContext context) {
    final size = MediaQuery.of(context).size;
    return Scaffold(
      resizeToAvoidBottomInset: true,
      backgroundColor: Colors.white,
      appBar: AppBar(
        elevation: 0,
        brightness: Brightness.light,
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
      body: SingleChildScrollView(
        child: Container(
          padding: EdgeInsets.symmetric(horizontal: 40),
          //height: MediaQuery.of(context).size.height - 10,
          width: double.infinity,
          child: Column(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: <Widget>[
              Column(
                children: <Widget>[
                  // FadeAnimation(
                  //  1,
                  Text(
                    "Sign up",
                    style: TextStyle(fontSize: 30, fontWeight: FontWeight.bold),
                  ),
                  // ),
                  SizedBox(
                    height: 10,
                  ),
                  //  FadeAnimation(
                  //  1.2,
                  Text(
                    "Create an account, It's free",
                    style: TextStyle(fontSize: 15, color: Colors.grey[700]),
                  ),
                  SizedBox(
                    height: 20,
                  ),
                  //),
                ],
              ),
              Column(
                children: <Widget>[
                  // FadeAnimation(
                  //   1.2,
                  Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: <Widget>[
                      Text(
                        'First Name',
                        style: TextStyle(
                            fontSize: 15,
                            fontWeight: FontWeight.w400,
                            color: Colors.black87),
                      ),
                      SizedBox(
                        height: 5,
                      ),
                      TextField(
                        controller: _firstNameController,
                        obscureText: false,
                        decoration: InputDecoration(
                          contentPadding:
                          EdgeInsets.symmetric(vertical: 0, horizontal: 10),
                          enabledBorder: OutlineInputBorder(
                            borderSide: BorderSide(color: Colors.grey.shade400),
                          ),
                          border: OutlineInputBorder(
                              borderSide:
                              BorderSide(color: Colors.grey.shade400)),
                        ),
                      ),
                      SizedBox(
                        height: 30,
                      ),
                    ],
                  ),
                  //),
                  // FadeAnimation(
                  //   1.3,
                  Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: <Widget>[
                      Text(
                        'Last Name',
                        style: TextStyle(
                            fontSize: 15,
                            fontWeight: FontWeight.w400,
                            color: Colors.black87),
                      ),
                      SizedBox(
                        height: 5,
                      ),
                      TextField(
                        controller: _lastNameController,
                        obscureText: false,
                        decoration: InputDecoration(
                          contentPadding:
                          EdgeInsets.symmetric(vertical: 0, horizontal: 10),
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
                    ],
                  ),
                  Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: <Widget>[
                      Text(
                        'Enroll No',
                        style: TextStyle(
                            fontSize: 15,
                            fontWeight: FontWeight.w400,
                            color: Colors.black87),
                      ),
                      SizedBox(
                        height: 5,
                      ),
                      TextField(
                        controller: _enrollNoController,
                        obscureText: false,
                        decoration: InputDecoration(
                          contentPadding:
                          EdgeInsets.symmetric(vertical: 0, horizontal: 10),
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
                    ],
                  ),
                  //  ),
                  // FadeAnimation(
                  //   1.4,
                  Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: <Widget>[
                      Text(
                        'Batch',
                        style: TextStyle(
                            fontSize: 15,
                            fontWeight: FontWeight.w400,
                            color: Colors.black87),
                      ),
                      SizedBox(
                        height: 5,
                      ),
                      TextField(
                        controller: _batchController,
                        obscureText: false,
                        decoration: InputDecoration(
                          contentPadding:
                          EdgeInsets.symmetric(vertical: 0, horizontal: 10),
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
                    ],
                  ),
                  Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: <Widget>[
                      Text(
                        'Year',
                        style: TextStyle(
                            fontSize: 15,
                            fontWeight: FontWeight.w400,
                            color: Colors.black87),
                      ),
                      SizedBox(
                        height: 5,
                      ),
                      TextField(
                        controller: _yearController,
                        obscureText: false,
                        decoration: InputDecoration(
                          contentPadding:
                          EdgeInsets.symmetric(vertical: 0, horizontal: 10),
                          enabledBorder: OutlineInputBorder(
                              borderSide:
                              BorderSide(color: Colors.grey.shade400)),
                          border: OutlineInputBorder(
                              borderSide:
                              BorderSide(color: Colors.grey.shade400)),
                        ),
                      ),
                      SizedBox(
                        height: 30,
                      ),
                      Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: <Widget>[
                          Text(
                            'Branch',
                            style: TextStyle(
                                fontSize: 15,
                                fontWeight: FontWeight.w400,
                                color: Colors.black87),
                          ),
                          SizedBox(
                            height: 5,
                          ),
                          TextField(
                            controller: _courseController,
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
                            height: 30,
                          ),
                          Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: <Widget>[
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
                                      borderSide: BorderSide(
                                          color: Colors.grey.shade400)),
                                  border: OutlineInputBorder(
                                      borderSide: BorderSide(
                                          color: Colors.grey.shade400)),
                                ),
                              ),
                              SizedBox(
                                height: 30,
                              ),
                            ],
                          ),
                          Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: <Widget>[
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
                                      borderSide: BorderSide(
                                          color: Colors.grey.shade400)),
                                  border: OutlineInputBorder(
                                      borderSide: BorderSide(
                                          color: Colors.grey.shade400)),
                                ),
                              ),
                              SizedBox(
                                height: 30,
                              ),
                              Column(
                                crossAxisAlignment: CrossAxisAlignment.start,
                                children: <Widget>[
                                  Text(
                                    'Confirm Password',
                                    style: TextStyle(
                                        fontSize: 15,
                                        fontWeight: FontWeight.w400,
                                        color: Colors.black87),
                                  ),
                                  SizedBox(
                                    height: 5,
                                  ),
                                  TextField(
                                    controller: _confirmedPasswordController,
                                    obscureText: true,
                                    decoration: InputDecoration(
                                      contentPadding: EdgeInsets.symmetric(
                                          vertical: 0, horizontal: 10),
                                      enabledBorder: OutlineInputBorder(
                                          borderSide: BorderSide(
                                              color: Colors.grey.shade400)),
                                      border: OutlineInputBorder(
                                          borderSide: BorderSide(
                                              color: Colors.grey.shade400)),
                                    ),
                                  ),
                                  SizedBox(
                                    height: 30,
                                  ),
                                ],
                              ),
                            ],
                          ),
                        ],
                      ),
                    ],
                  ),
                  // ),
                ],
              ),
              // FadeAnimation(
              // 1.5,
              Container(
                //padding: EdgeInsets.only(top: 3, left: 3),
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
                //     onTap: signUp,
                //     child: Text(
                //       "Sign up",
                //       style:
                //       TextStyle(fontWeight: FontWeight.w600, fontSize: 18),
                //     ),
                //   ),
                // ),
              ),
              SizedBox(
                height: 5,
              ),
              //),
              //FadeAnimation(
              //  1.6,
              Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: <Widget>[
                  Text("Already have an account?"),
                  GestureDetector(
                    onTap: () =>
                        Navigator.of(context)
                            .push(
                            MaterialPageRoute(builder: (_) => LoginScreen())),
                    child: Text(
                      " Login",
                      style:
                      TextStyle(fontWeight: FontWeight.w600, fontSize: 18),
                    ),
                  ),
                ],
              ),
              //),
            ],
          ),
        ),
      ),
    );
  }

  Widget customButton(Size size) {
    return GestureDetector(
      onTap: () {
        if (_firstNameController.text.isNotEmpty &&
            _emailController.text.isNotEmpty &&
            _passwordController.text.isNotEmpty &&
            _confirmedPasswordController.text.isNotEmpty &&
            _batchController.text.isNotEmpty &&
            _yearController.text.isNotEmpty &&
            _courseController.text.isNotEmpty) {
          setState(() {
            isLoading = true;
          });
          createAccount(_firstNameController.text,_lastNameController.text, _emailController.text, _passwordController.text,_courseController.text,int.parse(_yearController.text.trim()),_batchController.text,int.parse(_enrollNoController.text.trim())).then((user) {
            if (user != null) {
              setState(() {
                isLoading = false;
              });
              Navigator.push(
                  context, MaterialPageRoute(builder: (_) => Contacts()));
              print("Account Created Sucessfull");
            } else {
              print("Login Failed");
              setState(() {
                isLoading = false;
              });
            }
          });
        } else {
          print("Please enter Fields");
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
            "Create Account",
            style: TextStyle(
              color: Colors.white,
              fontSize: 18,
              fontWeight: FontWeight.bold,
            ),
          )),
    );
  }
}





// import 'package:cloud_firestore/cloud_firestore.dart';
// import 'package:firebase_auth/firebase_auth.dart';
// import 'package:flutter/material.dart';
//
// class RegistrationScreen extends StatefulWidget {
//   // For going to login page
//   final VoidCallback showLoginScreen;
//   const RegistrationScreen({Key? key, required this.showLoginScreen})
//       : super(key: key);
//   @override
//   _RegistrationScreenState createState() => _RegistrationScreenState();
// }
//
// class _RegistrationScreenState extends State<RegistrationScreen> {
//   TextEditingController _firstNameController = TextEditingController();
//   TextEditingController _lastNameController = TextEditingController();
//   TextEditingController _emailController = TextEditingController();
//   TextEditingController _passwordController = TextEditingController();
//   TextEditingController _confirmedPasswordController = TextEditingController();
//   TextEditingController _batchController = TextEditingController();
//   TextEditingController _enrollNoController = TextEditingController();
//   TextEditingController _yearController = TextEditingController();
//   TextEditingController _courseController = TextEditingController();
//   TextEditingController _dobController = TextEditingController();
//
//   @override
//   void dispose() {
//     _firstNameController.dispose();
//     _lastNameController.dispose();
//     _emailController.dispose();
//     _passwordController.dispose();
//     _confirmedPasswordController.dispose();
//     _batchController.dispose();
//     _enrollNoController.dispose();
//     _yearController.dispose();
//     _courseController.dispose();
//     _dobController.dispose();
//     super.dispose();
//   }
//
//   Future signUp() async {
//     if (passwordConfirmed()) {
//       print("Password Confirmed");
//       //Create User
//       await FirebaseAuth.instance.createUserWithEmailAndPassword(
//         email: _emailController.text.trim(),
//         password: _passwordController.toString().trim(),
//       );
//       FirebaseAuth.instance.currentUser!
//           .updateDisplayName(_firstNameController.text.trim());
//       addDetails(
//         _firstNameController.text.trim(),
//         _lastNameController.text.trim(),
//         _emailController.text.toString().trim(),
//         _batchController.text.trim(),
//         int.parse(_enrollNoController.text.trim()),
//         _courseController.text.trim(),
//         int.parse(_yearController.text.trim()),
//         //DateTime.parse(_dobController.text.trim()),
//       );
//     }
//   }
//
//   Future addDetails(
//     String firstName,
//     String lastName,
//     String email,
//     String batch,
//     num eno,
//     String course,
//     int year,
//     //DateTime dob,
//   ) async {
//     await FirebaseFirestore.instance.collection('Users').add({
//       'First Name': firstName,
//       'Last Name': lastName,
//       'Email': email,
//       'Batch': batch,
//       'Eno': eno,
//       'Course': course,
//       'Year': year,
//       //   'Date of Birth': dob,
//     });
//   }
//
//   bool passwordConfirmed() {
//     if (_passwordController.text.trim() ==
//         _confirmedPasswordController.text.trim()) {
//       return true;
//     } else {
//       return false;
//     }
//   }
//
//   @override
//   Widget build(BuildContext context) {
//     return Scaffold(
//       backgroundColor: Colors.grey.shade300,
//       body: SafeArea(
//         child: Container(
//           child: Center(
//             child: SingleChildScrollView(
//               child: Column(
//                 mainAxisAlignment: MainAxisAlignment.center,
//                 children: [
//                   SizedBox(
//                     height: 75,
//                   ),
//                   Text(
//                     'Register',
//                     style: TextStyle(
//                       color: Colors.black,
//                       fontSize: 30,
//                       fontWeight: FontWeight.w600,
//                     ),
//                   ),
//                   SizedBox(
//                     height: 30,
//                   ),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _firstNameController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "First Name",
//                           border: InputBorder.none,
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(height: 30),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _lastNameController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Last Name",
//                           border: InputBorder.none,
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(
//                     height: 20,
//                   ),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _emailController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Email",
//                           border: InputBorder.none,
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(height: 30),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _passwordController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Password",
//                           border: InputBorder.none,
//                         ),
//                         obscureText: true,
//                       ),
//                     ),
//                   ),
//                   SizedBox(height: 30),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _confirmedPasswordController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Confirm Password",
//                           border: InputBorder.none,
//                         ),
//                         obscureText: true,
//                       ),
//                     ),
//                   ),
//                   SizedBox(
//                     height: 20,
//                   ),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _batchController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Batch",
//                           border: InputBorder.none,
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(
//                     height: 20,
//                   ),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _courseController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Course",
//                           border: InputBorder.none,
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(
//                     height: 20,
//                   ),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _enrollNoController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Enroll No",
//                           border: InputBorder.none,
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(
//                     height: 20,
//                   ),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(12),
//                         color: Colors.grey.shade200,
//                         border: Border.all(color: Colors.white),
//                       ),
//                       child: TextField(
//                         controller: _yearController,
//                         decoration: InputDecoration(
//                           contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                           hintText: "Year",
//                           border: InputBorder.none,
//                         ),
//                       ),
//                     ),
//                   ),
//                   // SizedBox(
//                   //   height: 20,
//                   // ),
//                   // Padding(
//                   //   padding: EdgeInsets.symmetric(horizontal: 25),
//                   //   child: Container(
//                   //     decoration: BoxDecoration(
//                   //       borderRadius: BorderRadius.circular(12),
//                   //       color: Colors.grey.shade200,
//                   //       border: Border.all(color: Colors.white),
//                   //     ),
//                   //     child: TextField(
//                   //       controller: _dobController,
//                   //       decoration: InputDecoration(
//                   //         contentPadding: EdgeInsets.symmetric(horizontal: 20),
//                   //         hintText: "Date of Birth",
//                   //         border: InputBorder.none,
//                   //       ),
//                   //     ),
//                   //   ),
//                   // ),
//                   SizedBox(
//                     height: 30,
//                   ),
//                   Padding(
//                     padding: EdgeInsets.symmetric(horizontal: 25),
//                     child: GestureDetector(
//                       onTap: signUp,
//                       child: Container(
//                         padding: EdgeInsets.all(12),
//                         decoration: BoxDecoration(
//                           borderRadius: BorderRadius.circular(12),
//                           color: Colors.indigo,
//                         ),
//                         child: Center(
//                           child: Text(
//                             'Sign Up',
//                             style: TextStyle(
//                               color: Colors.white,
//                               fontWeight: FontWeight.bold,
//                               fontSize: 20,
//                             ),
//                           ),
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(
//                     height: 30,
//                   ),
//                   Row(
//                     mainAxisAlignment: MainAxisAlignment.center,
//                     children: [
//                       Text(
//                         'Already a member?',
//                         style: TextStyle(fontWeight: FontWeight.bold),
//                       ),
//                       GestureDetector(
//                         onTap: widget.showLoginScreen,
//                         child: Text(
//                           ' Sign in',
//                           style: TextStyle(
//                             color: Colors.blue,
//                             fontWeight: FontWeight.bold,
//                           ),
//                         ),
//                       ),
//                     ],
//                   )
//                 ],
//               ),
//             ),
//           ),
//         ),
//       ),
//     );
//   }
// }
