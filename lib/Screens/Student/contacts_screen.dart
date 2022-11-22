import 'package:ar_indoor_navigation/Screens/Student/chat_screen.dart';
import 'package:ar_indoor_navigation/read%20data/get_user_name.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class Contacts extends StatefulWidget {
  @override
  State<Contacts> createState() => _ContactsState();
}

class _ContactsState extends State<Contacts> {
  Color mainColor = Color(0xff292F3F);
  bool isLoading = false;
  Map<String, dynamic>? userMap;
  List<String> docIDs = [];
  final TextEditingController _search = TextEditingController();
  final _auth = FirebaseAuth.instance.currentUser!;

  void onSearch() async {
    FirebaseFirestore _firestore = FirebaseFirestore.instance;

    setState(() {
      isLoading = true;
    });
    await _firestore
        .collection('Users')
        .where("Email", isEqualTo: _search.text)
        .get()
        .then((value) {
      setState(() {
        userMap = value.docs[0].data();
        isLoading = false;
      });
      print(userMap);
    });
  }

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

  String chatRoomId(String user1, String user2) {
    if (user1[0].toLowerCase().codeUnits[0] >
        user2.toLowerCase().codeUnits[0]) {
      return "$user1$user2";
    } else {
      return "$user2$user1";
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: mainColor,
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
              Padding(
                padding: const EdgeInsets.only(left: 25),
                child: Container(
                  height: 200,
                  width: 350,
                  alignment: Alignment.center,
                  child: Column(
                    children: [
                      Row(
                        crossAxisAlignment: CrossAxisAlignment.center,
                        children: [
                          Container(
                            height: 50,
                            width: 300,
                            child: TextField(
                              controller: _search,
                              decoration: InputDecoration(
                                hintText: "Search Users",
                                border: OutlineInputBorder(
                                  borderRadius: BorderRadius.circular(10),
                                ),
                              ),
                            ),
                          ),
                          SizedBox(
                            width: 10,
                          ),
                          Padding(
                            padding: const EdgeInsets.symmetric(vertical: 10),
                            child: GestureDetector(
                              onTap: onSearch,
                              child: isLoading
                                  ? Container(
                                      width: 40,
                                      child: CircularProgressIndicator(),
                                    )
                                  : Container(
                                      child: Icon(Icons.search_rounded),
                                    ),
                            ),
                          )
                        ],
                      ),
                      SizedBox(
                        height: 100,
                      ),
                      Container(
                        child: Text(
                          'Catch with your Batch mates',
                          style: TextStyle(
                              color: Colors.white,
                              fontWeight: FontWeight.bold,
                              fontSize: 25),
                        ),
                      )
                    ],
                  ),
                ),
              ),
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
                            onTap: () {
                              String roomId = chatRoomId(
                                  _auth.displayName!, userMap?['First Name']);
                              Navigator.of(context).push(
                                MaterialPageRoute(
                                  builder: (_) => ChatScreen(
                                    chatScreenId: roomId,
                                    userMap: userMap!,
                                  ),
                                ),
                              );
                            },
                            title: GetUserName(
                              documentId: docIDs[index],
                            ),
                            textColor: Colors.white,
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
