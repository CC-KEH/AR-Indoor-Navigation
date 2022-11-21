import 'package:ar_indoor_navigation/read%20data/get_user_name.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class Contacts extends StatefulWidget {
  @override
  State<Contacts> createState() => _ContactsState();
}

class _ContactsState extends State<Contacts> {
  List<String> docIDs = [];
  Future getDocId() async {
    await FirebaseFirestore.instance.collection('Users').get().then(
          (snapshot) => snapshot.docs.forEach(
            (document) {
              print(document.reference);
              docIDs.add(document.reference.id);
            },
          ),
        );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey.shade200,
      appBar: AppBar(
        title: Text(
          'Friends',
          style: TextStyle(fontSize: 22),
        ),
        actions: [
          GestureDetector(
              onTap: () {
                FirebaseAuth.instance.signOut();
              },
              child: Icon(Icons.logout)),
        ],
      ),
      body: Center(
        child: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Expanded(
                child: FutureBuilder(
                  future: getDocId(),
                  builder: (context, snapshot) {
                    return ListView.builder(
                      shrinkWrap: true,
                      itemCount: docIDs.length,
                      itemBuilder: (context, index) {
                        return Padding(
                          padding: EdgeInsets.symmetric(vertical: 2),
                          child: ListTile(
                            title: GetUserName(
                              documentId: docIDs[index],
                            ),
                            tileColor: Colors.deepPurpleAccent,
                          ),
                        );
                      },
                    );
                  },
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
