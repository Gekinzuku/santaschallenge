#include "room0.h"
#include "rooms.h"

int RoomData5(char cRoom[99][99])
{
   iMaxX = 20;
   iMaxY = 20;
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
   cRoom[2][1] = '1';
   cRoom[3][1] = '2';
   cRoom[4][1] = 'i';
   cRoom[5][1] = 'i';
   cRoom[6][1] = '1';
   cRoom[7][1] = 'i';
   cRoom[8][1] = 'B';
   cRoom[9][1] = 'a';
   cRoom[10][1] = 'e';
   cRoom[11][1] = 's';
   cRoom[12][1] = '/';
   cRoom[13][1] = 't';
   cRoom[14][1] = 't';
   cRoom[15][1] = 't';
   cRoom[16][1] = 't';
   cRoom[17][1] = '%';
   cRoom[18][1] = 'B';
   cRoom[19][1] = 'w';

   cRoom[0][2] = 'w';
   cRoom[1][2] = 'i';
   cRoom[2][2] = 'i';
   cRoom[3][2] = 'i';
   cRoom[4][2] = 'i';
   cRoom[5][2] = 'i';
   cRoom[6][2] = 'i';
   cRoom[7][2] = 'i';
   cRoom[8][2] = 'i';
   cRoom[9][2] = 'a';
   cRoom[10][2] = 'a';
   cRoom[11][2] = 'a';
   cRoom[12][2] = 'a';
   cRoom[13][2] = 'a';
   cRoom[14][2] = '?';
   cRoom[15][2] = 'a';
   cRoom[16][2] = 'a';
   cRoom[17][2] = 'a';
   cRoom[18][2] = 'a';
   cRoom[19][2] = 'w';

   cRoom[0][3] = 'w';
   cRoom[1][3] = 'i';
   cRoom[2][3] = 'i';
   cRoom[3][3] = 'i';
   cRoom[4][3] = 'i';
   cRoom[5][3] = 'i';
   cRoom[6][3] = 'i';
   cRoom[7][3] = 'i';
   cRoom[8][3] = 'i';
   cRoom[9][3] = 'a';
   cRoom[10][3] = '1';
   cRoom[11][3] = 'i';
   cRoom[12][3] = 'i';
   cRoom[13][3] = '3';
   cRoom[14][3] = 't';
   cRoom[15][3] = '4';
   cRoom[16][3] = 'i';
   cRoom[17][3] = 'i';
   cRoom[18][3] = '2';
   cRoom[19][3] = 'w';

   cRoom[0][4] = 'w';
   cRoom[1][4] = 'i';
   cRoom[2][4] = 'i';
   cRoom[3][4] = 'i';
   cRoom[4][4] = 'i';
   cRoom[5][4] = 'i';
   cRoom[6][4] = 'i';
   cRoom[7][4] = 'i';
   cRoom[8][4] = 'i';
   cRoom[9][4] = 'a';
   cRoom[10][4] = 'i';
   cRoom[11][4] = 'i';
   cRoom[12][4] = 'i';
   cRoom[13][4] = 'i';
   cRoom[14][4] = 'i';
   cRoom[15][4] = 'i';
   cRoom[16][4] = 'i';
   cRoom[17][4] = 'i';
   cRoom[18][4] = 'i';
   cRoom[19][4] = 'w';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 'i';
   cRoom[2][5] = '2';
   cRoom[3][5] = 'i';
   cRoom[4][5] = '2';
   cRoom[5][5] = 'i';
   cRoom[6][5] = 'i';
   cRoom[7][5] = 'i';
   cRoom[8][5] = 'i';
   cRoom[9][5] = 'a';
   cRoom[10][5] = '1';
   cRoom[11][5] = 'i';
   cRoom[12][5] = 'i';
   cRoom[13][5] = 'i';
   cRoom[14][5] = 'i';
   cRoom[15][5] = 'i';
   cRoom[16][5] = 'i';
   cRoom[17][5] = 'i';
   cRoom[18][5] = '4';
   cRoom[19][5] = 'w';

   cRoom[0][6] = 'w';
   cRoom[1][6] = 'i';
   cRoom[2][6] = 'i';
   cRoom[3][6] = 'i';
   cRoom[4][6] = 'i';
   cRoom[5][6] = 'i';
   cRoom[6][6] = 'i';
   cRoom[7][6] = 'i';
   cRoom[8][6] = 'i';
   cRoom[9][6] = 'a';
   cRoom[10][6] = 'i';
   cRoom[11][6] = 'a';
   cRoom[12][6] = 'a';
   cRoom[13][6] = 'a';
   cRoom[14][6] = 'a';
   cRoom[15][6] = 'a';
   cRoom[16][6] = 'a';
   cRoom[17][6] = 'a';
   cRoom[18][6] = 'a';
   cRoom[19][6] = 'w';

   cRoom[0][7] = 'w';
   cRoom[1][7] = 'i';
   cRoom[2][7] = 'i';
   cRoom[3][7] = '3';
   cRoom[4][7] = 'i';
   cRoom[5][7] = '2';
   cRoom[6][7] = 'i';
   cRoom[7][7] = '1';
   cRoom[8][7] = 'i';
   cRoom[9][7] = 'a';
   cRoom[10][7] = 'f';
   cRoom[11][7] = 'f';
   cRoom[12][7] = 'f';
   cRoom[13][7] = 'f';
   cRoom[14][7] = 'f';
   cRoom[15][7] = 'f';
   cRoom[16][7] = 'f';
   cRoom[17][7] = 'f';
   cRoom[18][7] = 'f';
   cRoom[19][7] = 'w';

   cRoom[0][8] = 'w';
   cRoom[1][8] = 'c';
   cRoom[2][8] = 'i';
   cRoom[3][8] = '2';
   cRoom[4][8] = '5';
   cRoom[5][8] = '3';
   cRoom[6][8] = 'i';
   cRoom[7][8] = 'c';
   cRoom[8][8] = 'i';
   cRoom[9][8] = 'a';
   cRoom[10][8] = 'i';
   cRoom[11][8] = 'i';
   cRoom[12][8] = '1';
   cRoom[13][8] = '1';
   cRoom[14][8] = 'i';
   cRoom[15][8] = 'i';
   cRoom[16][8] = '2';
   cRoom[17][8] = 'a';
   cRoom[18][8] = 'c';
   cRoom[19][8] = 'w';

   cRoom[0][9] = 'w';
   cRoom[1][9] = 'i';
   cRoom[2][9] = 'i';
   cRoom[3][9] = 'i';
   cRoom[4][9] = 'i';
   cRoom[5][9] = 'i';
   cRoom[6][9] = 'i';
   cRoom[7][9] = 'i';
   cRoom[8][9] = 'i';
   cRoom[9][9] = 'a';
   cRoom[10][9] = 't';
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
   cRoom[1][10] = '3';
   cRoom[2][10] = 'i';
   cRoom[3][10] = 'i';
   cRoom[4][10] = 'i';
   cRoom[5][10] = 'i';
   cRoom[6][10] = 'i';
   cRoom[7][10] = 'i';
   cRoom[8][10] = 'i';
   cRoom[9][10] = 'a';
   cRoom[10][10] = 'w';
   cRoom[11][10] = 't';
   cRoom[12][10] = 'i';
   cRoom[13][10] = 'i';
   cRoom[14][10] = 'i';
   cRoom[15][10] = 'i';
   cRoom[16][10] = 'i';
   cRoom[17][10] = 'c';
   cRoom[18][10] = 'i';
   cRoom[19][10] = 'w';

   cRoom[0][11] = 'w';
   cRoom[1][11] = '1';
   cRoom[2][11] = 'i';
   cRoom[3][11] = 'i';
   cRoom[4][11] = 'i';
   cRoom[5][11] = 'i';
   cRoom[6][11] = 'i';
   cRoom[7][11] = 'i';
   cRoom[8][11] = 'i';
   cRoom[9][11] = 'a';
   cRoom[10][11] = 'i';
   cRoom[11][11] = 'i';
   cRoom[12][11] = 'i';
   cRoom[13][11] = 'i';
   cRoom[14][11] = 'i';
   cRoom[15][11] = 'i';
   cRoom[16][11] = 'c';
   cRoom[17][11] = 'i';
   cRoom[18][11] = 'i';
   cRoom[19][11] = 'w';

   cRoom[0][12] = 'w';
   cRoom[1][12] = 'i';
   cRoom[2][12] = 'i';
   cRoom[3][12] = 'c';
   cRoom[4][12] = 'i';
   cRoom[5][12] = 'i';
   cRoom[6][12] = '2';
   cRoom[7][12] = 'i';
   cRoom[8][12] = 'i';
   cRoom[9][12] = 'a';
   cRoom[10][12] = 'i';
   cRoom[11][12] = 'i';
   cRoom[12][12] = 'i';
   cRoom[13][12] = 'i';
   cRoom[14][12] = 'i';
   cRoom[15][12] = 'F';
   cRoom[16][12] = 'i';
   cRoom[17][12] = 'i';
   cRoom[18][12] = '4';
   cRoom[19][12] = 'w';

   cRoom[0][13] = 'w';
   cRoom[1][13] = 'c';
   cRoom[2][13] = 'i';
   cRoom[3][13] = 'i';
   cRoom[4][13] = 'i';
   cRoom[5][13] = 'i';
   cRoom[6][13] = 'i';
   cRoom[7][13] = '2';
   cRoom[8][13] = 'i';
   cRoom[9][13] = 'a';
   cRoom[10][13] = 'i';
   cRoom[11][13] = 'i';
   cRoom[12][13] = 'i';
   cRoom[13][13] = 'i';
   cRoom[14][13] = '5';
   cRoom[15][13] = 'i';
   cRoom[16][13] = 'i';
   cRoom[17][13] = 'i';
   cRoom[18][13] = 'i';
   cRoom[19][13] = 'w';

   cRoom[0][14] = 'w';
   cRoom[1][14] = 'i';
   cRoom[2][14] = 'i';
   cRoom[3][14] = 'i';
   cRoom[4][14] = 'i';
   cRoom[5][14] = 'i';
   cRoom[6][14] = 'i';
   cRoom[7][14] = 'i';
   cRoom[8][14] = 'i';
   cRoom[9][14] = 'a';
   cRoom[10][14] = 'i';
   cRoom[11][14] = 'i';
   cRoom[12][14] = 'i';
   cRoom[13][14] = 'c';
   cRoom[14][14] = 'i';
   cRoom[15][14] = 'i';
   cRoom[16][14] = 'i';
   cRoom[17][14] = 'i';
   cRoom[18][14] = 'i';
   cRoom[19][14] = 'w';

   cRoom[0][15] = 'w';
   cRoom[1][15] = 'i';
   cRoom[2][15] = 'i';
   cRoom[3][15] = 'i';
   cRoom[4][15] = 'i';
   cRoom[5][15] = 'i';
   cRoom[6][15] = 'i';
   cRoom[7][15] = 'i';
   cRoom[8][15] = 'i';
   cRoom[9][15] = 'a';
   cRoom[10][15] = '3';
   cRoom[11][15] = 'i';
   cRoom[12][15] = 'c';
   cRoom[13][15] = 'i';
   cRoom[14][15] = 'i';
   cRoom[15][15] = 'i';
   cRoom[16][15] = 'i';
   cRoom[17][15] = 'i';
   cRoom[18][15] = 'i';
   cRoom[19][15] = 'w';

   cRoom[0][16] = 'w';
   cRoom[1][16] = 'i';
   cRoom[2][16] = 'i';
   cRoom[3][16] = '3';
   cRoom[4][16] = 'i';
   cRoom[5][16] = 'i';
   cRoom[6][16] = 'a';
   cRoom[7][16] = 'i';
   cRoom[8][16] = 't';
   cRoom[9][16] = '%';
   cRoom[10][16] = 't';
   cRoom[11][16] = '1';
   cRoom[12][16] = 'i';
   cRoom[13][16] = 'i';
   cRoom[14][16] = 'i';
   cRoom[15][16] = 'i';
   cRoom[16][16] = 'i';
   cRoom[17][16] = '4';
   cRoom[18][16] = 'i';
   cRoom[19][16] = 'w';
   
   cRoom[0][17] = 'w';
   cRoom[1][17] = 'i';
   cRoom[2][17] = '3';
   cRoom[3][17] = 'i';
   cRoom[4][17] = '4';
   cRoom[5][17] = 'i';
   cRoom[6][17] = 'a';
   cRoom[7][17] = 'i';
   cRoom[8][17] = 'i';
   cRoom[9][17] = 'a';
   cRoom[10][17] = '1';
   cRoom[11][17] = 'i';
   cRoom[12][17] = '3';
   cRoom[13][17] = 'i';
   cRoom[14][17] = 'i';
   cRoom[15][17] = 'i';
   cRoom[16][17] = 'i';
   cRoom[17][17] = 'c';
   cRoom[18][17] = 'i';
   cRoom[19][17] = 'w';
   
   cRoom[0][18] = 'w';
   cRoom[1][18] = '3';
   cRoom[2][18] = 'i';
   cRoom[3][18] = 'i';
   cRoom[4][18] = 'i';
   cRoom[5][18] = 'i';
   cRoom[6][18] = 't';
   cRoom[7][18] = 'i';
   cRoom[8][18] = '4';
   cRoom[9][18] = 'a';
   cRoom[10][18] = 'i';
   cRoom[11][18] = 'i';
   cRoom[12][18] = 'i';
   cRoom[13][18] = 't';
   cRoom[14][18] = 'i';
   cRoom[15][18] = 'i';
   cRoom[16][18] = 'i';
   cRoom[17][18] = 'i';
   cRoom[18][18] = 'c';
   cRoom[19][18] = 'w';
   
   cRoom[0][19] = 'w';
   cRoom[1][19] = 'w';
   cRoom[2][19] = 'w';
   cRoom[3][19] = 'w';
   cRoom[4][19] = 'w';
   cRoom[5][19] = 'w';
   cRoom[6][19] = 'w';
   cRoom[7][19] = 'w';
   cRoom[8][19] = 'w';
   cRoom[9][19] = 'w';
   cRoom[10][19] = 'w';
   cRoom[11][19] = 'w';
   cRoom[12][19] = 'w';
   cRoom[13][19] = 'w';
   cRoom[14][19] = 'w';
   cRoom[15][19] = 'w';
   cRoom[16][19] = 'w';
   cRoom[17][19] = 'w';
   cRoom[18][19] = 'w';
   cRoom[19][19] = 'w';

   return 11;
}
