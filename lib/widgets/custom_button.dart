import 'package:flutter/material.dart';
import 'package:ar_indoor_navigation/core/app_export.dart';

class CustomButton extends StatelessWidget {
  CustomButton(
      {this.shape,
      this.padding,
      this.variant,
      this.fontStyle,
      this.alignment,
      this.onTap,
      this.width,
      this.margin,
      this.prefixWidget,
      this.suffixWidget,
      this.text});

  ButtonShape? shape;

  ButtonPadding? padding;

  ButtonVariant? variant;

  ButtonFontStyle? fontStyle;

  Alignment? alignment;

  VoidCallback? onTap;

  double? width;

  EdgeInsetsGeometry? margin;

  Widget? prefixWidget;

  Widget? suffixWidget;

  String? text;

  @override
  Widget build(BuildContext context) {
    return alignment != null
        ? Align(
            alignment: alignment ?? Alignment.center,
            child: _buildButtonWidget(),
          )
        : _buildButtonWidget();
  }

  _buildButtonWidget() {
    return GestureDetector(
      onTap: onTap,
      child: Container(
        width: getHorizontalSize(width ?? 0),
        margin: margin,
        padding: _setPadding(),
        decoration: _buildDecoration(),
        child: Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            prefixWidget ?? SizedBox(),
            Text(
              text ?? "",
              textAlign: TextAlign.center,
              style: _setFontStyle(),
            ),
            suffixWidget ?? SizedBox(),
          ],
        ),
      ),
    );
  }

  _buildDecoration() {
    return BoxDecoration(
      color: _setColor(),
      border: _setBorder(),
      borderRadius: _setBorderRadius(),
    );
  }

  _setPadding() {
    switch (padding) {
      case ButtonPadding.PaddingAll11:
        return getPadding(
          all: 11,
        );
      case ButtonPadding.PaddingAll7:
        return getPadding(
          all: 7,
        );
      default:
        return getPadding(
          all: 18,
        );
    }
  }

  _setColor() {
    switch (variant) {
      case ButtonVariant.FillBluegray800:
        return ColorConstant.bluegray800;
      case ButtonVariant.FillBluegray900:
        return ColorConstant.bluegray900;
      case ButtonVariant.OutlineGray900:
        return ColorConstant.whiteA700;
      case ButtonVariant.FillLightblue500:
        return ColorConstant.lightBlue500;
      case ButtonVariant.FillBluegray901:
        return ColorConstant.bluegray901;
      default:
        return ColorConstant.gray900;
    }
  }

  _setBorder() {
    switch (variant) {
      case ButtonVariant.OutlineGray900:
        return Border.all(
          color: ColorConstant.gray900,
          width: getHorizontalSize(
            1.00,
          ),
        );
      case ButtonVariant.FillGray900:
      case ButtonVariant.FillBluegray800:
      case ButtonVariant.FillBluegray900:
      case ButtonVariant.FillLightblue500:
      case ButtonVariant.FillBluegray901:
        return null;
      default:
        return null;
    }
  }

  _setBorderRadius() {
    switch (shape) {
      case ButtonShape.CircleBorder20:
        return BorderRadius.circular(
          getHorizontalSize(
            20.00,
          ),
        );
      case ButtonShape.CircleBorder17:
        return BorderRadius.circular(
          getHorizontalSize(
            17.00,
          ),
        );
      case ButtonShape.Square:
        return BorderRadius.circular(0);
      default:
        return BorderRadius.circular(
          getHorizontalSize(
            8.00,
          ),
        );
    }
  }

  _setFontStyle() {
    switch (fontStyle) {
      case ButtonFontStyle.RobotoLight13:
        return TextStyle(
          color: ColorConstant.whiteA700,
          fontSize: getFontSize(
            13,
          ),
          fontFamily: 'Roboto',
          fontWeight: FontWeight.w300,
        );
      case ButtonFontStyle.UrbanistRomanSemiBold15Gray900:
        return TextStyle(
          color: ColorConstant.gray900,
          fontSize: getFontSize(
            15,
          ),
          fontFamily: 'Urbanist',
          fontWeight: FontWeight.w600,
        );
      case ButtonFontStyle.RobotoRegular20:
        return TextStyle(
          color: ColorConstant.whiteA700,
          fontSize: getFontSize(
            20,
          ),
          fontFamily: 'Roboto',
          fontWeight: FontWeight.w400,
        );
      case ButtonFontStyle.DMSansRegular18:
        return TextStyle(
          color: ColorConstant.bluegray901,
          fontSize: getFontSize(
            18,
          ),
          fontFamily: 'DM Sans',
          fontWeight: FontWeight.w400,
        );
      default:
        return TextStyle(
          color: ColorConstant.whiteA700,
          fontSize: getFontSize(
            15,
          ),
          fontFamily: 'Urbanist',
          fontWeight: FontWeight.w600,
        );
    }
  }
}

enum ButtonShape {
  Square,
  RoundedBorder8,
  CircleBorder20,
  CircleBorder17,
}

enum ButtonPadding {
  PaddingAll18,
  PaddingAll11,
  PaddingAll7,
}

enum ButtonVariant {
  FillGray900,
  FillBluegray800,
  FillBluegray900,
  OutlineGray900,
  FillLightblue500,
  FillBluegray901,
}

enum ButtonFontStyle {
  UrbanistRomanSemiBold15,
  RobotoLight13,
  UrbanistRomanSemiBold15Gray900,
  RobotoRegular20,
  DMSansRegular18,
}
