import 'package:get/get.dart';
import 'listellipsetwo1_item_model.dart';
import 'listellipsetwo_three_item_model.dart';
import 'listellipsetwo_five_item_model.dart';

class AndroidLargeTwoModel {
  RxList<Listellipsetwo1ItemModel> listellipsetwo1ItemList =
      RxList.filled(2, Listellipsetwo1ItemModel());

  RxList<ListellipsetwoThreeItemModel> listellipsetwoThreeItemList =
      RxList.filled(2, ListellipsetwoThreeItemModel());

  RxList<ListellipsetwoFiveItemModel> listellipsetwoFiveItemList =
      RxList.filled(5, ListellipsetwoFiveItemModel());
}
