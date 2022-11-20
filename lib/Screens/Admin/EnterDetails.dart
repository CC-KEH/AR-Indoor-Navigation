import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class _EnterDetailsState extends State<EnterDetails> {
  TextEditingController _batchController = TextEditingController();
  TextEditingController _yearController = TextEditingController();
  TextEditingController _courseController = TextEditingController();
  TextEditingController _dayController = TextEditingController();

  @override
  void dispose() {
    _batchController.dispose();
    _yearController.dispose();
    _courseController.dispose();
    _dayController.dispose();
    super.dispose();
  }

  final List<String> batches = ['F1', 'F2', 'F3', 'F4', 'F5', 'F6', 'F7'];
  final List<String> courses = ['CSE', 'ECE'];
  final List<String> years = ['1', '2', '3', '4'];
  final List<String> days = [
    'Monday',
    'Tuesday',
    'Wednesday',
    'Thursday',
    'Friday',
    'Saturday'
  ];
  late String batch = batches.first;
  late String course = courses.first;
  late String year = years.first;
  late String day = days.first;

  void dropdownCallback(String? selectedValue) {
    if (selectedValue is String) {
      setState(() {
        batch = selectedValue;
      });
    }
  }

  List<String> classes = [];
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey.shade300,
      body: SafeArea(
        child: Container(
          child: Center(
            child: SingleChildScrollView(
              child: Column(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  SizedBox(
                    height: 75,
                  ),
                  Text(
                    'Update Time Table',
                    style: TextStyle(
                      color: Colors.black,
                      fontSize: 30,
                      fontWeight: FontWeight.w600,
                    ),
                  ),
                  SizedBox(
                    height: 30,
                  ),
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 25),
                    child: Container(
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(12),
                        color: Colors.grey.shade200,
                        border: Border.all(color: Colors.white),
                      ),
                      child: DropdownButton(
                        items: batches
                            .map<DropdownMenuItem<String>>((String value) {
                          return DropdownMenuItem<String>(
                            value: value,
                            child: Text(value),
                          );
                        }).toList(),
                        value: batch,
                        onChanged: dropdownCallback,
                        iconSize: 20,
                        iconEnabledColor: Colors.purpleAccent,
                      ),
                    ),
                  ),
                  SizedBox(height: 30),
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 25),
                    child: Container(
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(12),
                        color: Colors.grey.shade200,
                        border: Border.all(color: Colors.white),
                      ),
                      child: DropdownButton(
                        items: courses
                            .map<DropdownMenuItem<String>>((String value) {
                          return DropdownMenuItem<String>(
                            value: value,
                            child: Text(value),
                          );
                        }).toList(),
                        value: course,
                        onChanged: dropdownCallback,
                        iconSize: 20,
                        iconEnabledColor: Colors.purpleAccent,
                      ),
                    ),
                  ),
                  SizedBox(
                    height: 20,
                  ),
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 25),
                    child: Container(
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(12),
                        color: Colors.grey.shade200,
                        border: Border.all(color: Colors.white),
                      ),
                      child: DropdownButton(
                        items:
                            years.map<DropdownMenuItem<String>>((String value) {
                          return DropdownMenuItem<String>(
                            value: value,
                            child: Text(value),
                          );
                        }).toList(),
                        value: year,
                        onChanged: dropdownCallback,
                        iconSize: 20,
                        iconEnabledColor: Colors.purpleAccent,
                      ),
                    ),
                  ),
                  SizedBox(height: 30),
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 25),
                    child: Container(
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(12),
                        color: Colors.grey.shade200,
                        border: Border.all(color: Colors.white),
                      ),
                      child: DropdownButton(
                        items:
                            days.map<DropdownMenuItem<String>>((String value) {
                          return DropdownMenuItem<String>(
                            value: value,
                            child: Text(value),
                          );
                        }).toList(),
                        value: day,
                        onChanged: dropdownCallback,
                        iconSize: 20,
                        iconEnabledColor: Colors.purpleAccent,
                      ),
                    ),
                  ),
                  SizedBox(height: 30),
                ],
              ),
            ),
          ),
        ),
      ),
    );
  }
}

class EnterDetails extends StatefulWidget {
  @override
  _EnterDetailsState createState() => _EnterDetailsState();
}
