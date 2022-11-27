import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/animation/Fadeanimation.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:ar_indoor_navigation/Authentication/methods.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
import 'package:ar_indoor_navigation/core/utils/validation_functions.dart';
import 'package:ar_indoor_navigation/widgets/custom_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_icon_button.dart';
import 'package:ar_indoor_navigation/widgets/custom_text_form_field.dart';
import 'package:ar_indoor_navigation/domain/googleauth/google_auth_helper.dart';
import 'package:ar_indoor_navigation/Screens/Student/contacts_screen.dart';
import 'package:flutter/services.dart';
import 'package:ar_indoor_navigation/Authentication/methods.dart';
import 'package:ar_indoor_navigation/Authentication/registration_screen.dart';

class BatchDetails extends StatefulWidget {
  @override
  _BatchDetailsState createState() => _BatchDetailsState();
}

class _BatchDetailsState extends State<BatchDetails> {
  TextEditingController _branchController = TextEditingController();
  TextEditingController _yearController = TextEditingController();
  TextEditingController _batchController = TextEditingController();
  TextEditingController _campusController = TextEditingController();
  TextEditingController _dayController = TextEditingController();
  TextEditingController _9_10Controller = TextEditingController();
  TextEditingController _10_11Controller = TextEditingController();
  TextEditingController _11_12Controller = TextEditingController();
  TextEditingController _12_1Controller = TextEditingController();
  TextEditingController _1_2Controller = TextEditingController();
  TextEditingController _2_3Controller = TextEditingController();
  TextEditingController _3_4Controller = TextEditingController();
  TextEditingController _4_5Controller = TextEditingController();

  Map<String, dynamic>? batchMap;
  List<String> docIDs = [];
  bool isUpdating = false;
  bool updated = false;
  @override
  void disposeDetails() {
    _branchController.dispose();
    _yearController.dispose();
    _batchController.dispose();
    _campusController.dispose();
    super.dispose();
  }

  Future accessDetails(
    String batch,
    String branch,
    int year,
    String campus,
  ) async {
    print("Accessing details for batch");
    FirebaseFirestore _firestore = FirebaseFirestore.instance;

    setState(() {
      isUpdating = true;
    });

    QuerySnapshot snapshot = await _firestore
        .collection('batches')
        .doc("$batch")
        .collection("Campus")
        .doc("$campus")
        .collection("Branch")
        .doc("$branch")
        .collection("Years")
        .doc("$year")
        .collection("Days")
        .get();
    final allData = snapshot.docs.map((doc) => doc.data()).toList();
    print(allData);
  }

  @override
  void disposetimeTable() {
    _batchController.dispose();
    _yearController.dispose();
  }

  Future updateTimeTable(
    String _9_10,
    String _10_11,
    String _11_12,
    String _12_1,
    String _1_2,
    String _2_3,
    String _3_4,
    String _4_5,
  ) async {
    FirebaseFirestore _firestore = FirebaseFirestore.instance;
    setState(() {
      isUpdating = false;
    });
    Map<String, dynamic> classes = {
      "9 - 10 am": _9_10,
      "10 - 11 am": _10_11,
      "11 - 12 pm": _11_12,
      "12 - 1 pm": _12_1,
      "1 - 2 pm": _1_2,
      "2 - 3 pm": _2_3,
      "3 - 4 pm": _3_4,
      "4 - 5 pm": _4_5,
    };
    await _firestore
        .collection('batches')
        .doc("${_batchController.text.trim()}")
        .collection("Campus")
        .doc("${_campusController.text.trim()}")
        .collection("Branch")
        .doc("${_branchController.text.trim()}")
        .collection("Years")
        .doc("${int.parse(_yearController.text.trim())}")
        .collection("Days")
        .doc("${_dayController.text.trim()}")
        .set(classes)
        .then((_) => updated = true);
    updated ? print("Details Updated!") : print("Not updated");
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
        child: isUpdating
            ? Container(
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
                          "${_batchController.text.trim()}",
                          style: TextStyle(
                              fontSize: 30, fontWeight: FontWeight.bold),
                        ),
                        // ),
                        SizedBox(
                          height: 10,
                        ),
                        //  FadeAnimation(
                        //  1.2,
                        Text(
                          "YEAR-${int.parse(_yearController.text.trim())} COURSE-${_branchController.text.trim()}",
                          style:
                              TextStyle(fontSize: 15, color: Colors.grey[700]),
                        ),
                        SizedBox(
                          height: 40,
                        ),
                        //),
                      ],
                    ),
                    Column(
                      children: <Widget>[
                        // FadeAnimation(
                        //   1.2,
                        entry('Day', _dayController, 'Monday'),
                        //),
                        // FadeAnimation(
                        //   1.3,
                        entry('9 - 10 am', _9_10Controller, 'SUBJECT NAME'),
                        entry('10 - 11 am', _10_11Controller, 'SUBJECT NAME'),
                        entry('11 - 12 pm', _11_12Controller, 'SUBJECT NAME'),
                        entry('12 - 1 pm', _12_1Controller, 'SUBJECT NAME'),
                        entry('1 - 2 pm', _1_2Controller, 'SUBJECT NAME'),
                        entry('2 - 3 pm', _2_3Controller, 'SUBJECT NAME'),
                        entry('3 - 4 pm', _3_4Controller, 'SUBJECT NAME'),
                        entry('4 - 5 pm', _4_5Controller, 'SUBJECT NAME'),
                        Container(
                          //padding: EdgeInsets.only(top: 3, left: 3),
                          decoration: BoxDecoration(
                            borderRadius: BorderRadius.circular(20),
                            border: Border(
                              bottom: BorderSide(color: Colors.black),
                              top: BorderSide(color: Colors.black),
                              left: BorderSide(color: Colors.black),
                              right: BorderSide(color: Colors.black),
                            ),
                          ),
                          child: updateButton(size),
                        ),
                        SizedBox(
                          height: 5,
                        ),
                      ],
                    ),
                  ],
                ),
              )
            : updated
                ? Container(
                    padding: EdgeInsets.symmetric(horizontal: 40),
                    //height: MediaQuery.of(context).size.height - 10,
                    width: double.infinity,
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                      children: <Widget>[
                        Column(
                          children: [
                            Text(
                              'Details Updated Successfully',
                              style: TextStyle(
                                  fontWeight: FontWeight.bold,
                                  color: Colors.greenAccent.shade700,
                                  fontSize: 25),
                            ),
                            SizedBox(height: size.height/1.75,),
                            GestureDetector(
                              onTap: () {
                                Navigator.of(context).push(MaterialPageRoute(builder: (_) => BatchDetails()));
                              },
                              child: Container(
                                  height: size.height / 14,
                                  width: size.width / 1.2,
                                  decoration: BoxDecoration(
                                    borderRadius: BorderRadius.circular(19),
                                    color: Colors.deepPurpleAccent,
                                  ),
                                  alignment: Alignment.center,
                                  child: Text(
                                    "Back",
                                    style: TextStyle(
                                      color: Colors.white,
                                      fontSize: 18,
                                      fontWeight: FontWeight.bold,
                                    ),
                                  )),
                            )
                          ],
                        ),
                      ],
                    ),
                  )
                : Container(
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
                              "Enter Batch Details",
                              style: TextStyle(
                                  fontSize: 30, fontWeight: FontWeight.bold),
                            ),
                            // ),
                            SizedBox(
                              height: 10,
                            ),
                            //  FadeAnimation(
                            //  1.2,
                            Text(
                              "Enter the details in Uppercase only",
                              style: TextStyle(
                                  fontSize: 15, color: Colors.grey[700]),
                            ),
                            SizedBox(
                              height: 40,
                            ),
                            //),
                          ],
                        ),
                        Column(
                          children: <Widget>[
                            entry('Year', _yearController, '3'),
                            entry('Branch', _branchController, 'CSE or ECE'),
                            entry('Batch No', _batchController, 'F2'),
                            entry('Campus', _campusController, '128'),
                            Container(
                              decoration: BoxDecoration(
                                borderRadius: BorderRadius.circular(20),
                                border: Border(
                                  bottom: BorderSide(color: Colors.black),
                                  top: BorderSide(color: Colors.black),
                                  left: BorderSide(color: Colors.black),
                                  right: BorderSide(color: Colors.black),
                                ),
                              ),
                              child: submitButton(size),
                            ),
                            SizedBox(
                              height: 5,
                            ),
                          ],
                        ),
                      ],
                    ),
                  ),
      ),
    );
  }
  Widget entry(String text, TextEditingController timecontroller, String hint) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: <Widget>[
        Text(
          '$text',
          style: TextStyle(
              fontSize: 15, fontWeight: FontWeight.w400, color: Colors.black87),
        ),
        SizedBox(
          height: 5,
        ),
        CustomTextFormField(
          width: 500,
          focusNode: FocusNode(),
          controller: timecontroller,
          hintText: "$hint".tr,
          variant: TextFormFieldVariant.OutlineIndigo50,
          alignment: Alignment.center,
          validator: (value) {
            if (value == null) {
              return "Please fill the fields";
            }
            return null;
          },
        ),
        SizedBox(
          height: 20,
        ),
      ],
    );
  }


  // Widget entry(String text, TextEditingController timecontroller, String hint) {
  //   return Column(
  //     crossAxisAlignment: CrossAxisAlignment.start,
  //     children: <Widget>[
  //       Text(
  //         '$text',
  //         style: TextStyle(
  //             fontSize: 15, fontWeight: FontWeight.w400, color: Colors.black87),
  //       ),
  //       SizedBox(
  //         height: 5,
  //       ),
  //       TextField(
  //         controller: timecontroller,
  //         obscureText: false,
  //         decoration: InputDecoration(
  //           hintText: "$hint",
  //           contentPadding: EdgeInsets.symmetric(vertical: 0, horizontal: 10),
  //           enabledBorder: OutlineInputBorder(
  //               borderSide: BorderSide(color: Colors.grey.shade400)),
  //           border: OutlineInputBorder(
  //               borderSide: BorderSide(color: Colors.grey.shade400)),
  //         ),
  //       ),
  //       SizedBox(
  //         height: 30,
  //       ),
  //     ],
  //   );
  // }

  Widget updateButton(Size size) {
    return GestureDetector(
      onTap: () {
        updateTimeTable(
          _9_10Controller.text.trim(),
          _10_11Controller.text.trim(),
          _11_12Controller.text.trim(),
          _12_1Controller.text.trim(),
          _1_2Controller.text.trim(),
          _2_3Controller.text.trim(),
          _3_4Controller.text.trim(),
          _4_5Controller.text.trim(),
        );
      },
      child: Container(
          height: size.height / 14,
          width: size.width / 1.2,
          decoration: BoxDecoration(
            borderRadius: BorderRadius.circular(19),
            color: Colors.black,
          ),
          alignment: Alignment.center,
          child: Text(
            "Update",
            style: TextStyle(
              color: Colors.white,
              fontSize: 18,
              fontWeight: FontWeight.bold,
            ),
          )),
    );
  }

  Widget submitButton(Size size) {
    return GestureDetector(
      onTap: () {
        accessDetails(
          _batchController.text.trim(),
          _branchController.text.trim(),
          int.parse(_yearController.text.trim()),
          _campusController.text.trim(),
        );
      },
      child: Container(
          height: size.height / 14,
          width: size.width / 1.2,
          decoration: BoxDecoration(
            borderRadius: BorderRadius.circular(19),
            color: Colors.black,
          ),
          alignment: Alignment.center,
          child: Text(
            "Submit",
            style: TextStyle(
              color: Colors.white,
              fontSize: 18,
              fontWeight: FontWeight.bold,
            ),
          )),
    );
  }
}
