#include "rooms.h"

void LevelSelect()
{
   if(iLevel==0)iChips = RoomData16(cRoom);//sets all the room data plus gets number of chips
   else if(iLevel==1)iChips = RoomData14(cRoom);
   else if(iLevel==2)iChips = RoomData11(cRoom);
   else if(iLevel==3)iChips = RoomData17(cRoom);
   else if(iLevel==4)iChips = RoomData19(cRoom);
   else if(iLevel==5)iChips = RoomData18(cRoom);
   else if(iLevel==6)iChips = RoomData15(cRoom);
   else if(iLevel==7)iChips = RoomData22(cRoom);
   else if(iLevel==8)iChips = RoomData10(cRoom);
   else if(iLevel==9)iChips = RoomData21(cRoom);
   else if(iLevel==10)iChips = RoomData1(cRoom);
   else if(iLevel==11)iChips = RoomData23(cRoom);
   else if(iLevel==12)iChips = RoomData0(cRoom);
   else if(iLevel==13)iChips = RoomData5(cRoom);
   else if(iLevel==14)iChips = RoomData2(cRoom);
   else if(iLevel==15)iChips = RoomData12(cRoom);
   else if(iLevel==16)iChips = RoomData9(cRoom);
   else if(iLevel==17)iChips = RoomData20(cRoom);
   else if(iLevel==18)iChips = RoomData6(cRoom);
   else if(iLevel==19)iChips = RoomData8(cRoom);
   else if(iLevel==20)iChips = RoomData3(cRoom);
   else if(iLevel==21)iChips = RoomData4(cRoom);
   else if(iLevel==22)iChips = RoomData7(cRoom);
   else if(iLevel==23)iChips = RoomData13(cRoom);
   else {iLevel = 0; InitRoom();}
}

