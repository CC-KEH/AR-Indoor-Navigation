import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class updateTimeTableScreen extends StatefulWidget {
  @override
  _updateTimeTableScreenState createState() => _updateTimeTableScreenState();
}

class _updateTimeTableScreenState extends State<updateTimeTableScreen> {
  TextEditingController _batchController = TextEditingController();
  TextEditingController _yearController = TextEditingController();
  TextEditingController _courseController = TextEditingController();
  TextEditingController _dayController = TextEditingController();
  TextEditingController _9to10 = TextEditingController();
  TextEditingController _10to11 = TextEditingController();
  TextEditingController _11to12 = TextEditingController();
  TextEditingController _12to1 = TextEditingController();
  TextEditingController _1to2 = TextEditingController();
  TextEditingController _2to3 = TextEditingController();
  TextEditingController _3to4 = TextEditingController();
  TextEditingController _4to5 = TextEditingController();
  @override
  void dispose() {
    _batchController.dispose();
    _yearController.dispose();
    _courseController.dispose();
    _dayController.dispose();
    _9to10.dispose();
    _10to11.dispose();
    _11to12.dispose();
    _12to1.dispose();
    _1to2.dispose();
    _2to3.dispose();
    _3to4.dispose();
    _4to5.dispose();
    super.dispose();
  }

  Future updateClasses() async {
    classes[0] = _9to10.text.trim();
    classes[1] = _10to11.text.trim();
    classes[2] = _11to12.text.trim();
    classes[3] = _12to1.text.trim();
    classes[4] = _1to2.text.trim();
    classes[5] = _2to3.text.trim();
    classes[6] = _3to4.text.trim();
    classes[7] = _4to5.text.trim();
    addDetails(classes);
  }

  Future addDetails(List<String> times) async {
    await FirebaseFirestore.instance
        .collection('batches/${_batchController}/${_dayController}/')
        .add({'Classes': classes});
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
                      child: TextField(
                        controller: _9to10,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "9 - 10",
                          border: InputBorder.none,
                        ),
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
                      child: TextField(
                        controller: _10to11,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "10 - 11",
                          border: InputBorder.none,
                        ),
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
                      child: TextField(
                        controller: _11to12,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "11 - 12",
                          border: InputBorder.none,
                        ),
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
                      child: TextField(
                        controller: _12to1,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "12 - 1",
                          border: InputBorder.none,
                        ),
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
                      child: TextField(
                        controller: _1to2,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "1 - 2",
                          border: InputBorder.none,
                        ),
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
                      child: TextField(
                        controller: _2to3,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "2 - 3",
                          border: InputBorder.none,
                        ),
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
                      child: TextField(
                        controller: _3to4,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "3 - 4",
                          border: InputBorder.none,
                        ),
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
                      child: TextField(
                        controller: _4to5,
                        decoration: InputDecoration(
                          contentPadding: EdgeInsets.symmetric(horizontal: 20),
                          hintText: "4 - 5",
                          border: InputBorder.none,
                        ),
                      ),
                    ),
                  ),
                  SizedBox(
                    height: 20,
                  ),
                  SizedBox(
                    height: 30,
                  ),
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 25),
                    child: GestureDetector(
                      onTap: updateClasses,
                      child: Container(
                        padding: EdgeInsets.all(12),
                        decoration: BoxDecoration(
                          borderRadius: BorderRadius.circular(12),
                          color: Colors.indigo,
                        ),
                        child: Center(
                          child: Text(
                            'Update',
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
                    height: 30,
                  ),
                ],
              ),
            ),
          ),
        ),
      ),
    );
  }
}
