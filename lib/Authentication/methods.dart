import 'package:ar_indoor_navigation/Authentication/login_page.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

Future createAccount(String firstname,String lastname, String email, String password,String branch, int year, String batch,num eno) async {
  FirebaseAuth _auth = FirebaseAuth.instance;

  FirebaseFirestore _firestore = FirebaseFirestore.instance;

  try {
    UserCredential userCrendetial = await _auth.createUserWithEmailAndPassword(
        email: email.trim(), password: password.trim());

    print("Account created Successful");

    userCrendetial.user!.updateDisplayName(firstname);

    await _firestore.collection('Users').doc(_auth.currentUser!.uid).set({
      "First Name": firstname.trim(),
      "Last Name" : lastname.trim(),
      "Eno" : eno,
      "Course" : branch.trim(),
      "Year" : year,
      "email": email.trim(),
      "status": "Unavailable",
      "uid": _auth.currentUser!.uid,
    });

    return userCrendetial.user;
  } catch (e) {
    print(e);
    return null;
  }
}

Future logIn(String email, String password) async {
  FirebaseAuth _auth = FirebaseAuth.instance;
  FirebaseFirestore _firestore = FirebaseFirestore.instance;

  try {
    UserCredential userCredential = await _auth.signInWithEmailAndPassword(
        email: email.trim(), password: password.trim());

    print("Login Sucessfull");
    _firestore
        .collection('users')
        .doc(_auth.currentUser!.uid)
        .get()
        .then((value) => userCredential.user!.updateDisplayName(value['name']));

    return userCredential.user;
  } catch (e) {
    print(e);
    return null;
  }
}

Future logOut(BuildContext context) async {
  FirebaseAuth _auth = FirebaseAuth.instance;

  try {
    await _auth.signOut().then((value) {
      Navigator.push(context, MaterialPageRoute(builder: (_) => LoginScreen()));
    });
  } catch (e) {
    print("error");
  }
}
