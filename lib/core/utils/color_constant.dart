import 'dart:ui';
import 'package:flutter/material.dart';

class ColorConstant {
  static Color black9007e = fromHex('#7e000000');

  static Color black9000c = fromHex('#0c000000');

  static Color gray200 = fromHex('#eae9e9');

  static Color gray201 = fromHex('#ebeaea');

  static Color bluegray700 = fromHex('#4a3f69');

  static Color black90099 = fromHex('#99000000');

  static Color black900 = fromHex('#000000');

  static Color bluegray400 = fromHex('#888888');

  static Color bluegray7007f = fromHex('#7f4a3f69');

  static Color pink600 = fromHex('#dd1a49');

  static Color deepPurpleA200 = fromHex('#9747ff');

  static Color whiteA700 = fromHex('#ffffff');

  static Color black90026 = fromHex('#26000000');

  static Color fromHex(String hexString) {
    final buffer = StringBuffer();
    if (hexString.length == 6 || hexString.length == 7) buffer.write('ff');
    buffer.write(hexString.replaceFirst('#', ''));
    return Color(int.parse(buffer.toString(), radix: 16));
  }
}
