import 'package:ar_indoor_navigation/Screens/Student/chat_screen.dart';
import 'package:ar_indoor_navigation/main.dart';

import 'package:flutter/material.dart';

class Contacts extends StatefulWidget {
  @override
  State<Contacts> createState() => _ContactsState();
}

class _ContactsState extends State<Contacts> {
  late String friendName;
  //
  // @override
  // void setState(VoidCallback fn) {
  //   // TODO: implement setState
  //   super.setState(){
  //
  //   };
  // }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey.shade200,
      body: SafeArea(
        child: SingleChildScrollView(
          child: Column(
            children: [
              Padding(
                padding: EdgeInsets.symmetric(horizontal: 20),
                child: Container(
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(12),
                    color: Colors.grey.shade200,
                    border: Border.all(color: Colors.white),
                  ),
                  // child: TextButton(
                  //   onPressed: Navigator.pushNamed(context, '/chat'),
                  //   onLongPress: ,  Remove Friend,
                  //   child: Text('${friendName}'),
                  // ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
