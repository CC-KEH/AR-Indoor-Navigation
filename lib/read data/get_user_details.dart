import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';
class GetUserDetails extends StatefulWidget {
  const GetUserDetails({Key? key}) : super(key: key);
  @override
  State<GetUserDetails> createState() => _GetUserDetailsState();
}



class _GetUserDetailsState extends State<GetUserDetails> {
  late String documentId;
  late Map<String,dynamic>? classes;

  Future accessDetails(
      String batch,
      String branch,
      int year,
      String campus,
      String day
      ) async {
    print("Accessing details for batch");
    FirebaseFirestore _firestore = FirebaseFirestore.instance;

    QuerySnapshot snapshot = await _firestore
        .collection('batches')
        .doc("$batch")
        .collection("Campus")
        .doc("$campus")
        .collection("Branch")
        .doc("$branch")
        .collection("Years")
        .doc("$year")
        .collection("Days").get();
    final allData = snapshot.docs.map((doc) => doc.data()).toList();
    print(allData[DateTime.now().weekday]);
  }

@override
  Widget build(BuildContext context) {
    CollectionReference users = FirebaseFirestore.instance.collection('Users');
    return FutureBuilder<DocumentSnapshot>(
      future: users.doc(documentId).get(),
      builder: ((context, snapshot) {
        if (snapshot.connectionState == ConnectionState.done) {
          Map<String, dynamic> data =
          snapshot.data!.data() as Map<String, dynamic>;
          final date = DateTime.parse(DateTime.now().weekday.toString());
          accessDetails(data["Batc"], data["Branch"], data["Year"], data["Campus"],data["$date"]);
        }
        return Text('Loading...');
      }),
    );
  }
}
Widget process(){
  return Padding(
    padding: const EdgeInsets.symmetric(horizontal: 8.0),
    child: Container(
      height: size.height / 4,
      width: size.width / 4,
      decoration: AppDecoration.outlineBlack90072.copyWith(
        borderRadius: BorderRadiusStyle.roundedBorder30,
      ),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Align(
            alignment: Alignment.centerLeft,
            child: Padding(
              padding: getPadding(
                left: 30,
                top: 80,
                right: 15,
              ),
              child: Text(
                "MPH".tr,
                overflow: TextOverflow.ellipsis,
                textAlign: TextAlign.left,
                style: AppStyle.txtRobotoRegular12.copyWith(
                  letterSpacing: 1.00,
                ),
              ),
            ),
          ),
          Align(
            alignment: Alignment.centerRight,
            child: Padding(
              padding: getPadding(
                left: 50,
                top: 1,
                right: 10,
                bottom: 30,
              ),
              child: CommonImageView(
                svgPath: ImageConstant.imgClock,
                height: getSize(
                  17.00,
                ),
                width: getSize(
                  17.00,
                ),
              ),
            ),
          ),
        ],
      ),
    ),
  );
}
