#include "room2.h"
#include "rooms.h"

int RoomData4(char cRoom[99][99])
{
   iMaxX = 20;
   iMaxY = 16;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 60;
   cRoom[0][0] = 'w';
   cRoom[1][0] = 'w';
   cRoom[2][0] = 'w';
   cRoom[3][0] = 'w';
   cRoom[4][0] = 'w';
   cRoom[5][0] = 'w';
   cRoom[6][0] = 'w';
   cRoom[7][0] = 'w';
   cRoom[8][0] = 'w';
   cRoom[9][0] = 'w';
   cRoom[10][0] = 'w';
   cRoom[11][0] = 'w';
   cRoom[12][0] = 'w';
   cRoom[13][0] = 'w';
   cRoom[14][0] = 'w';
   cRoom[15][0] = 'w';
   cRoom[16][0] = 'w';
   cRoom[17][0] = 'w';
   cRoom[18][0] = 'w';
   cRoom[19][0] = 'w';

   cRoom[0][1] = 'w';
   cRoom[1][1] = 'p';
   cRoom[2][1] = 'c';
   cRoom[3][1] = 't';
   cRoom[4][1] = 'c';
   cRoom[5][1] = 'c';
   cRoom[6][1] = 't';
   cRoom[7][1] = 'c';
   cRoom[8][1] = 't';
   cRoom[9][1] = 'c';
   cRoom[10][1] = 'c';
   cRoom[11][1] = 't';
   cRoom[12][1] = 'c';
   cRoom[13][1] = 't';
   cRoom[14][1] = 'c';
   cRoom[15][1] = 'c';
   cRoom[16][1] = 't';
   cRoom[17][1] = 'c';
   cRoom[18][1] = 't';
   cRoom[19][1] = 'w';

   cRoom[0][2] = 'w';
   cRoom[1][2] = 'w';
   cRoom[2][2] = 'i';
   cRoom[3][2] = 'w';
   cRoom[4][2] = 'w';
   cRoom[5][2] = 'w';
   cRoom[6][2] = 'w';
   cRoom[7][2] = 'i';
   cRoom[8][2] = 'w';
   cRoom[9][2] = 'w';
   cRoom[10][2] = 'w';
   cRoom[11][2] = 'w';
   cRoom[12][2] = 'i';
   cRoom[13][2] = 'w';
   cRoom[14][2] = 'w';
   cRoom[15][2] = 'w';
   cRoom[16][2] = 'w';
   cRoom[17][2] = 'i';
   cRoom[18][2] = 'w';
   cRoom[19][2] = 'w';

   cRoom[0][3] = 'w';
   cRoom[1][3] = 'a';
   cRoom[2][3] = 'i';
   cRoom[3][3] = 'a';
   cRoom[4][3] = 'a';
   cRoom[5][3] = 'a';
   cRoom[6][3] = 'a';
   cRoom[7][3] = 'i';
   cRoom[8][3] = 'a';
   cRoom[9][3] = 'a';
   cRoom[10][3] = 'a';
   cRoom[11][3] = 'a';
   cRoom[12][3] = '3';
   cRoom[13][3] = 'i';
   cRoom[14][3] = 'i';
   cRoom[15][3] = 'i';
   cRoom[16][3] = 'i';
   cRoom[17][3] = 'i';
   cRoom[18][3] = '2';
   cRoom[19][3] = 'w';

   cRoom[0][4] = 'w';
   cRoom[1][4] = 'a';
   cRoom[2][4] = 'i';
   cRoom[3][4] = 'i';
   cRoom[4][4] = 'i';
   cRoom[5][4] = 'i';
   cRoom[6][4] = 'c';
   cRoom[7][4] = 'i';
   cRoom[8][4] = 'i';
   cRoom[9][4] = 'i';
   cRoom[10][4] = '2';
   cRoom[11][4] = 'i';
   cRoom[12][4] = 'i';
   cRoom[13][4] = '2';
   cRoom[14][4] = 'i';
   cRoom[15][4] = 'i';
   cRoom[16][4] = 'i';
   cRoom[17][4] = 'i';
   cRoom[18][4] = 'i';
   cRoom[19][4] = 'w';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 'i';
   cRoom[2][5] = 'i';
   cRoom[3][5] = 'i';
   cRoom[4][5] = 'i';
   cRoom[5][5] = 'i';
   cRoom[6][5] = 'i';
   cRoom[7][5] = 'i';
   cRoom[8][5] = 'i';
   cRoom[9][5] = 'i';
   cRoom[10][5] = 'i';
   cRoom[11][5] = 'i';
   cRoom[12][5] = 'i';
   cRoom[13][5] = 'i';
   cRoom[14][5] = 'i';
   cRoom[15][5] = 'i';
   cRoom[16][5] = 'i';
   cRoom[17][5] = 'i';
   cRoom[18][5] = 'i';
   cRoom[19][5] = 'w';

   cRoom[0][6] = 'w';
   cRoom[1][6] = 'i';
   cRoom[2][6] = '1';
   cRoom[3][6] = 'i';
   cRoom[4][6] = 'i';
   cRoom[5][6] = 'i';
   cRoom[6][6] = 'i';
   cRoom[7][6] = 'i';
   cRoom[8][6] = 'i';
   cRoom[9][6] = 'i';
   cRoom[10][6] = 'i';
   cRoom[11][6] = 'i';
   cRoom[12][6] = 'i';
   cRoom[13][6] = 'i';
   cRoom[14][6] = 'i';
   cRoom[15][6] = 'c';
   cRoom[16][6] = 'c';
   cRoom[17][6] = 'i';
   cRoom[18][6] = 'i';
   cRoom[19][6] = 'w';

   cRoom[0][7] = 'w';
   cRoom[1][7] = '1';
   cRoom[2][7] = 'i';
   cRoom[3][7] = 'i';
   cRoom[4][7] = 'i';
   cRoom[5][7] = 'i';
   cRoom[6][7] = 'i';
   cRoom[7][7] = 'i';
   cRoom[8][7] = 'i';
   cRoom[9][7] = 'i';
   cRoom[10][7] = 'i';
   cRoom[11][7] = 'i';
   cRoom[12][7] = 'i';
   cRoom[13][7] = 'i';
   cRoom[14][7] = 'i';
   cRoom[15][7] = 'i';
   cRoom[16][7] = '2';
   cRoom[17][7] = 'i';
   cRoom[18][7] = 'i';
   cRoom[19][7] = 'w';

   cRoom[0][8] = 'w';
   cRoom[1][8] = 'c';
   cRoom[2][8] = 'i';
   cRoom[3][8] = 'i';
   cRoom[4][8] = 'i';
   cRoom[5][8] = 'i';
   cRoom[6][8] = '2';
   cRoom[7][8] = 'i';
   cRoom[8][8] = 'i';
   cRoom[9][8] = 'i';
   cRoom[10][8] = 'i';
   cRoom[11][8] = 'i';
   cRoom[12][8] = 'i';
   cRoom[13][8] = 'i';
   cRoom[14][8] = 'i';
   cRoom[15][8] = 'i';
   cRoom[16][8] = '3';
   cRoom[17][8] = '4';
   cRoom[18][8] = 'i';
   cRoom[19][8] = 'w';

   cRoom[0][9] = 'w';
   cRoom[1][9] = 'i';
   cRoom[2][9] = 'i';
   cRoom[3][9] = '1';
   cRoom[4][9] = 'i';
   cRoom[5][9] = 'i';
   cRoom[6][9] = 'i';
   cRoom[7][9] = 'i';
   cRoom[8][9] = 'c';
   cRoom[9][9] = 'i';
   cRoom[10][9] = 'i';
   cRoom[11][9] = 'i';
   cRoom[12][9] = 'i';
   cRoom[13][9] = 'i';
   cRoom[14][9] = 'i';
   cRoom[15][9] = 'i';
   cRoom[16][9] = 'i';
   cRoom[17][9] = 'i';
   cRoom[18][9] = '2';
   cRoom[19][9] = 'w';

   cRoom[0][10] = 'w';
   cRoom[1][10] = 'c';
   cRoom[2][10] = 'i';
   cRoom[3][10] = 'i';
   cRoom[4][10] = 'i';
   cRoom[5][10] = 'i';
   cRoom[6][10] = 'i';
   cRoom[7][10] = 'i';
   cRoom[8][10] = 'i';
   cRoom[9][10] = '2';
   cRoom[10][10] = 'i';
   cRoom[11][10] = 'F';
   cRoom[12][10] = 'i';
   cRoom[13][10] = 'i';
   cRoom[14][10] = 'i';
   cRoom[15][10] = 'i';
   cRoom[16][10] = '2';
   cRoom[17][10] = 'i';
   cRoom[18][10] = 'i';
   cRoom[19][10] = 'w';

   cRoom[0][11] = 'w';
   cRoom[1][11] = 'i';
   cRoom[2][11] = 'i';
   cRoom[3][11] = 'i';
   cRoom[4][11] = 'i';
   cRoom[5][11] = 'i';
   cRoom[6][11] = 'i';
   cRoom[7][11] = 'i';
   cRoom[8][11] = 'i';
   cRoom[9][11] = 'i';
   cRoom[10][11] = 'i';
   cRoom[11][11] = 'i';
   cRoom[12][11] = 'i';
   cRoom[13][11] = 'i';
   cRoom[14][11] = 'i';
   cRoom[15][11] = '3';
   cRoom[16][11] = '3';
   cRoom[17][11] = 'i';
   cRoom[18][11] = 'i';
   cRoom[19][11] = 'w';

   cRoom[0][12] = 'w';
   cRoom[1][12] = '3';
   cRoom[2][12] = 'i';
   cRoom[3][12] = 'i';
   cRoom[4][12] = 'i';
   cRoom[5][12] = 'i';
   cRoom[6][12] = 'i';
   cRoom[7][12] = 'i';
   cRoom[8][12] = 'i';
   cRoom[9][12] = 'i';
   cRoom[10][12] = 'i';
   cRoom[11][12] = 'i';
   cRoom[12][12] = 'i';
   cRoom[13][12] = 'c';
   cRoom[14][12] = 'i';
   cRoom[15][12] = 'i';
   cRoom[16][12] = 'i';
   cRoom[17][12] = 'i';
   cRoom[18][12] = 'i';
   cRoom[19][12] = 'w';

   cRoom[0][13] = 'w';
   cRoom[1][13] = 'i';
   cRoom[2][13] = 'i';
   cRoom[3][13] = 'i';
   cRoom[4][13] = 'i';
   cRoom[5][13] = 'i';
   cRoom[6][13] = 'i';
   cRoom[7][13] = 'i';
   cRoom[8][13] = '2';
   cRoom[9][13] = 'i';
   cRoom[10][13] = '4';
   cRoom[11][13] = 'i';
   cRoom[12][13] = 'i';
   cRoom[13][13] = 'a';
   cRoom[14][13] = 'i';
   cRoom[15][13] = 'i';
   cRoom[16][13] = 'w';
   cRoom[17][13] = 'w';
   cRoom[18][13] = 'w';
   cRoom[19][13] = 'w';

   cRoom[0][14] = 'w';
   cRoom[1][14] = 'i';
   cRoom[2][14] = '4';
   cRoom[3][14] = '4';
   cRoom[4][14] = 'i';
   cRoom[5][14] = 'i';
   cRoom[6][14] = 'i';
   cRoom[7][14] = '3';
   cRoom[8][14] = '4';
   cRoom[9][14] = '3';
   cRoom[10][14] = 'i';
   cRoom[11][14] = 'i';
   cRoom[12][14] = '3';
   cRoom[13][14] = 'i';
   cRoom[14][14] = 'i';
   cRoom[15][14] = 'i';
   cRoom[16][14] = 's';
   cRoom[17][14] = 'f';
   cRoom[18][14] = 'e';
   cRoom[19][14] = 'w';

   cRoom[0][15] = 'w';
   cRoom[1][15] = 'w';
   cRoom[2][15] = 'w';
   cRoom[3][15] = 'w';
   cRoom[4][15] = 'w';
   cRoom[5][15] = 'w';
   cRoom[6][15] = 'w';
   cRoom[7][15] = 'w';
   cRoom[8][15] = 'w';
   cRoom[9][15] = 'w';
   cRoom[10][15] = 'w';
   cRoom[11][15] = 'w';
   cRoom[12][15] = 'w';
   cRoom[13][15] = 'w';
   cRoom[14][15] = 'w';
   cRoom[15][15] = 'w';
   cRoom[16][15] = 'w';
   cRoom[17][15] = 'w';
   cRoom[18][15] = 'w';
   cRoom[19][15] = 'w';

   return 17;
}
