import 'dart:ui';
import 'package:flutter/material.dart';

class ColorConstant {
  static Color cyanA400 = fromHex('#00efff');

  static Color lightBlue500 = fromHex('#03a9f1');

  static Color black9003f = fromHex('#3f000000');

  static Color gray50 = fromHex('#f7f8f9');

  static Color whiteA70099 = fromHex('#99ffffff');

  static Color teal500 = fromHex('#00ac83');

  static Color yellowA400 = fromHex('#ffe81c');

  static Color black900 = fromHex('#000000');

  static Color teal800 = fromHex('#00665f');

  static Color pink800 = fromHex('#a0025a');

  static Color bluegray9007f = fromHex('#7f182f3f');

  static Color purple400 = fromHex('#b347ea');

  static Color gray600 = fromHex('#6a707c');

  static Color gray700 = fromHex('#555d6f');

  static Color gray601 = fromHex('#818181');

  static Color indigo50 = fromHex('#e8ecf4');

  static Color gray701 = fromHex('#606161');

  static Color gray602 = fromHex('#886997');

  static Color gray900 = fromHex('#1e232c');

  static Color indigo51 = fromHex('#dbd4ff');

  static Color gray702 = fromHex('#6b5959');

  static Color tealA401 = fromHex('#00ffcd');

  static Color gray100 = fromHex('#f6f7f8');

  static Color tealA400 = fromHex('#09f9bf');

  static Color bluegray900 = fromHex('#262a35');

  static Color bluegray801 = fromHex('#404656');

  static Color bluegray800 = fromHex('#363d4d');

  static Color bluegray402 = fromHex('#888888');

  static Color bluegray401 = fromHex('#838ba1');

  static Color black90072 = fromHex('#72000000');

  static Color bluegray400 = fromHex('#8390a1');

  static Color whiteA700 = fromHex('#ffffff');

  static Color cyan400 = fromHex('#34c2c1');

  static Color bluegray901 = fromHex('#292f3f');

  static Color bluegray802 = fromHex('#373e4e');

  static Color fromHex(String hexString) {
    final buffer = StringBuffer();
    if (hexString.length == 6 || hexString.length == 7) buffer.write('ff');
    buffer.write(hexString.replaceFirst('#', ''));
    return Color(int.parse(buffer.toString(), radix: 16));
  }
}
