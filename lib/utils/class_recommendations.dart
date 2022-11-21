import 'package:flutter/material.dart';

class ClassRecommendation extends StatelessWidget {
  final String roomNO;
  final String imagePath;

  ClassRecommendation({
    required this.roomNO,
    required this.imagePath,
  });

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(left: 20),
      child: Expanded(
        child: Container(
          decoration: BoxDecoration(
            border: Border.all(color: Colors.black26),
            borderRadius: BorderRadius.circular(15),
            color: Colors.teal,
          ),
          width: 100,
          child: Column(
            children: [
              Row(
                crossAxisAlignment: CrossAxisAlignment.center,
                children: [
                  Container(
                    height: 30,
                    // child: Image.asset('lib/icons/jiit_logo.png')
                  ),
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Text('${roomNO}'),
                  ),
                ],
              ),
            ],
          ),
        ),
      ),
    );
  }
}
