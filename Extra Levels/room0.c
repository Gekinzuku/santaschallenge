#include "room0.h"
#include "rooms.h"

int RoomData0(char cRoom[99][99])
{
   iMaxX = 10;
   iMaxY = 8;
   iLocX = 0; 
   iLocY = 0;
   cRoom[0][0] = 'w';
   cRoom[1][0] = 'w';
   cRoom[2][0] = 'w';
   cRoom[3][0] = 'w';
   cRoom[4][0] = 'w'; 
   cRoom[5][0] = 'w';
   cRoom[6][0] = 'w';
   cRoom[7][0] = 'w';

   cRoom[0][1] = 'w';
   cRoom[1][1] = 'e';
   cRoom[2][1] = 's';
   cRoom[3][1] = 'w';
   cRoom[4][1] = 'p';
   cRoom[5][1] = 't';
   cRoom[6][1] = 'f';
   cRoom[7][1] = 'f'; 

   cRoom[0][2] = 'w';
   cRoom[1][2] = 'f';
   cRoom[2][2] = 'i';
   cRoom[3][2] = 'f';
   cRoom[4][2] = 'w';
   cRoom[5][2] = 'i';
   cRoom[6][2] = 'f';
   cRoom[7][2] = 'f';

   cRoom[0][3] = 'w';
   cRoom[1][3] = 't';
   cRoom[2][3] = 'i';
   cRoom[3][3] = 'i';
   cRoom[4][3] = 'i';
   cRoom[5][3] = 'i';
   cRoom[6][3] = 'i';
   cRoom[7][3] = 'i';

   cRoom[0][4] = 'w';
   cRoom[1][4] = 't';
   cRoom[2][4] = 't';
   cRoom[3][4] = 'w';
   cRoom[4][4] = 'w';
   cRoom[5][4] = 'i';
   cRoom[6][4] = 'w';
   cRoom[7][4] = 'f';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 'w';
   cRoom[2][5] = 't';
   cRoom[3][5] = 'w';
   cRoom[4][5] = 'w';
   cRoom[5][5] = 'i';
   cRoom[6][5] = 'w';
   cRoom[7][5] = 'f';
   
   cRoom[0][6] = 'w';
   cRoom[1][6] = 'c';
   cRoom[2][6] = 't';
   cRoom[3][6] = 't';
   cRoom[4][6] = 't';
   cRoom[5][6] = 't';
   cRoom[6][6] = 'w';
   cRoom[7][6] = 'f';
   
   cRoom[0][7] = 'w';
   cRoom[1][7] = 'w';
   cRoom[2][7] = 'w';
   cRoom[3][7] = 'w';
   cRoom[4][7] = 'w';
   cRoom[5][7] = 'w';
   cRoom[6][7] = 'w';
   cRoom[7][7] = 'w';
   
   cRoom[8][0] = 'w';
   cRoom[8][1] = 'c';
   cRoom[8][2] = 'i';
   cRoom[8][3] = 't';
   cRoom[8][4] = 'i';   
   cRoom[8][5] = 'i';
   cRoom[8][6] = 'c';
   cRoom[8][7] = 'w';
   
   cRoom[9][0] = 'w';
   cRoom[9][1] = 'w';
   cRoom[9][2] = 'w';
   cRoom[9][3] = 'w';
   cRoom[9][4] = 'w';   
   cRoom[9][5] = 'w';
   cRoom[9][6] = 'w';
   cRoom[9][7] = 'w';
	   
   return 3;
}
