import 'dart:js';

import 'package:flutter/material.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';

class ChatScreen extends StatelessWidget {
  Color mainColor = Color(0xff292F3F);
  late String messageText;
  late final String chatScreenId;
  final TextEditingController _message = TextEditingController();
  late final Map<String, dynamic> userMap;
  ChatScreen({required this.chatScreenId, required this.userMap});
  final _firestore = FirebaseFirestore.instance;
  final _auth = FirebaseAuth.instance.currentUser!;
  void onSendMessage() async {
    if (_message.text.isNotEmpty) {
      Map<String, dynamic> messages = {
        "sender": _auth.displayName,
        "message": _message.text,
        "time": FieldValue.serverTimestamp(),
      };
      await _firestore
          .collection('chatscreen')
          .doc(chatScreenId)
          .collection('chats')
          .add(messages);
      _message.clear();
    } else {
      print("Enter some text");
    }
  }
  // void messagesStream() async {
  //   await for (var snapshot in _firestore
  //       .collection('chatScreen')
  //       .doc(chatScreenId)
  //       .collection('chats')
  //       .orderBy("time", descending: false)
  //       .snapshots()) {
  //     for (var message in snapshot.docs) {
  //       print(message.data());
  //     }
  //   }
  // }

  @override
  Widget build(BuildContext context) {
    final size = MediaQuery.of(context).size;
    return Scaffold(
      backgroundColor: mainColor,
      appBar: AppBar(
        leading: null,
        actions: <Widget>[
          IconButton(
              icon: Icon(Icons.close),
              onPressed: () {
                Navigator.pushNamed(context, "");
              }),
        ],
        title: Text(userMap['Firse Name']),
        backgroundColor: mainColor,
      ),
      body: SingleChildScrollView(
        child: Column(
          children: [
            Container(
              height: 40,
              width: 400,
              child: StreamBuilder<QuerySnapshot>(
                stream: _firestore
                    .collection('chatscreen')
                    .doc(chatScreenId)
                    .collection('chats')
                    .orderBy("time", descending: false)
                    .snapshots(),
                builder: (BuildContext context,
                    AsyncSnapshot<QuerySnapshot> snapshot) {
                  if (snapshot.data != null) {
                    return ListView.builder(
                        itemCount: snapshot.data?.docs.length,
                        itemBuilder: (context, index) {
                          return Text(snapshot.data?.docs[index]['message']);
                        });
                  } else {
                    return Container();
                  }
                },
              ),
            ),
            Container(
              height: 50,
              width: 500,
              alignment: Alignment.center,
              child: Container(
                height: 40,
                width: 450,
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    Container(
                      height: 40,
                      width: 440,
                      child: TextField(
                        controller: _message,
                        decoration: InputDecoration(
                          border: OutlineInputBorder(
                              borderRadius: BorderRadius.circular(10)),
                        ),
                      ),
                    ),
                    IconButton(
                      onPressed: () {
                        onSendMessage;
                      },
                      icon: Icon(Icons.send),
                    )
                  ],
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
// SafeArea(
// child: SingleChildScrollView(
// child: Column(
// mainAxisAlignment: MainAxisAlignment.end,
// crossAxisAlignment: CrossAxisAlignment.stretch,
// children: <Widget>[
// Container(
// child: Row(
// crossAxisAlignment: CrossAxisAlignment.center,
// children: <Widget>[
// Expanded(
// child: TextField(
// onChanged: (value) {
// messageText = value;
// },
// decoration: InputDecoration(
// border: OutlineInputBorder(
// borderRadius: BorderRadius.circular(8),
// ),
// ),
// ),
// ),
// TextButton(
// onPressed: () {
// _firestore.collection('messages').add({
// 'text': messageText,
// 'sender': _user.email!,
// });
// messagesStream();
// },
// child: Text(
// 'Send',
// ),
// ),
// ],
// ),
// ),
// ],
// ),
// ),
// ),

//
// class ChatScreen extends StatefulWidget {
//   @override
//   _ChatScreenState createState() => _ChatScreenState();
// }
//
// class _ChatScreenState extends State<ChatScreen> {
//   Color mainColor = Color(0xff292F3F);
//   late final Map<String, dynamic> userMap;
//   late String messageText;
//   late final String chatScreenId;
//   ChatScreen({this.chatScreenId, this.userMap});
//   final TextEditingController _message = TextEditingController();
//   final _firestore = FirebaseFirestore.instance;
//   final _user = FirebaseAuth.instance.currentUser!;
//
//   //Streams triggers the function when there is a new data
//   void messagesStream() async {
//     await for (var snapshot in _firestore.collection('messages').snapshots()) {
//       for (var message in snapshot.docs) {
//         print(message.data());
//       }
//     }
//   }
//
//   @override
//   Widget build(BuildContext context) {
//     return Scaffold(
//       backgroundColor: mainColor,
//       appBar: AppBar(
//         leading: null,
//         actions: <Widget>[
//           IconButton(
//               icon: Icon(Icons.close),
//               onPressed: () {
//                 Navigator.pushNamed(context, "");
//               }),
//         ],
//         title: Text('⚡️Chat'),
//         backgroundColor: mainColor,
//       ),
//       body: SafeArea(
//         child: Column(
//           mainAxisAlignment: MainAxisAlignment.end,
//           crossAxisAlignment: CrossAxisAlignment.stretch,
//           children: <Widget>[
//             Container(
//               child: Row(
//                 crossAxisAlignment: CrossAxisAlignment.center,
//                 children: <Widget>[
//                   Expanded(
//                     child: TextField(
//                       onChanged: (value) {
//                         messageText = value;
//                       },
//                       decoration: InputDecoration(
//                         border: OutlineInputBorder(
//                           borderRadius: BorderRadius.circular(8),
//                         ),
//                       ),
//                     ),
//                   ),
//                   TextButton(
//                     onPressed: () {
//                       _firestore.collection('messages').add({
//                         'text': messageText,
//                         'sender': _user.email!,
//                       });
//                       messagesStream();
//                     },
//                     child: Text(
//                       'Send',
//                     ),
//                   ),
//                 ],
//               ),
//             ),
//           ],
//         ),
//       ),
//     );
//   }
// }
