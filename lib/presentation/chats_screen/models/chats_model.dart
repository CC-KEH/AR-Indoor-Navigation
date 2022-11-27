import 'package:get/get.dart';
import 'chats_item_model.dart';

class ChatsModel {
  RxList<ChatsItemModel> chatsItemList = RxList.filled(3, ChatsItemModel());
}
