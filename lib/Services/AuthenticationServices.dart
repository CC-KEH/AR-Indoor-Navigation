import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';

class AuthenticationServices {
  final FirebaseAuth _auth = FirebaseAuth.instance;

  //Registration
  Future createNewUser(String email, String password) async {
    try {
      UserCredential result = await _auth.createUserWithEmailAndPassword(
          email: email, password: password);
      User? user = result.user;
      return user;
    } catch (e) {
      print(e.toString());
    }
  }

  //Sign in
  // Future signIn(String email, String password) async {
  //   await _auth.signInWithEmailAndPassword(
  //     email: email,
  //     password: password,
  //   );
  // }

  //Sign out

}
