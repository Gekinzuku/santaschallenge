#include "rooms.h"

int RoomData7(char cRoom[99][99])
{
   iMaxX = 20;
   iMaxY = 18;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 400;

char cTemp[99][99] = {
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'},
{'w', 'p', 'P', 't', 'P', 't', 'P', 'P', 'P', 'c', 'P', 't', 'P', 'c', 'P', 't', 'w', 'B', 'c', 'w'},
{'w', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'B', 'B', 'w'},
{'w', 't', 'P', 't', 'P', 'P', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 't', 'w', 'w', 'w'},
{'w', 'P', 'P', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'w'},
{'w', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 'w'},
{'w', 'P', 'c', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'w'},
{'w', 't', 'P', 't', 'P', 'P', 'P', 't', 'P', 'P', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 'w'},
{'w', 'P', 'P', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'w'},
{'w', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 'w'},
{'w', 'P', 't', 'P', 't', 'P', 't', 'P', 'P', 'P', 't', 'P', 't', 'P', 'c', 'P', 't', 'P', 't', 'w'},
{'w', 'c', 'c', 'c', 'P', 'P', 'P', 'c', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 'w'},
{'w', 'c', 'c', 'w', 'w', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 'c', 'P', 'c', 'w'},
{'w', 'B', 'w', 'w', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', '/', '/', '/', 'P', 'w'},
{'w', 'w', 'w', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 'c', '/', 's', 's', 'w', 'w'},
{'w', '5', '?', 't', 't', 't', 'P', 't', 'P', 't', 'P', 't', 'P', 't', 'P', '/', 's', 'P', 'a', 'w'},
{'w', 'c', '/', 't', 't', 'P', 'c', 'P', 'c', 'P', 't', 'P', 't', 'P', 't', 'P', 'w', 'a', '%', 'e'},
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'e', 'e'}};

unsigned short int i, i2;

for(i=0;i<20;++i)
{
	for(i2=0;i2<18;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 17;
}

#include "rooms.h"

int RoomData8(char cRoom[99][99])
{
   iMaxX = 30;
   iMaxY = 18;
   iLocX = 22; 
   iLocY = 12;
   iMoves = 575;
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
   cRoom[20][0] = 'w';
   cRoom[21][0] = 'w';
   cRoom[22][0] = 'w';
   cRoom[23][0] = 'w';
   cRoom[24][0] = 'w';
   cRoom[25][0] = 'w';
   cRoom[26][0] = 'w';
   cRoom[27][0] = 'w';
   cRoom[28][0] = 'w';
   cRoom[29][0] = 'w';

   cRoom[0][1] = 'w';
   cRoom[1][1] = 'I';
   cRoom[2][1] = 'i';
   cRoom[3][1] = '2';
   cRoom[4][1] = 'w';
   cRoom[5][1] = '6';
   cRoom[6][1] = 'a';
   cRoom[7][1] = 'a';
   cRoom[8][1] = 'a';
   cRoom[9][1] = 'a';
   cRoom[10][1] = 't';
   cRoom[11][1] = 'P';
   cRoom[12][1] = 't';
   cRoom[13][1] = 't';
   cRoom[14][1] = 't';
   cRoom[15][1] = 't';
   cRoom[16][1] = 't';
   cRoom[17][1] = 'i';
   cRoom[18][1] = '2';
   cRoom[19][1] = 'i';
   cRoom[20][1] = 'i';
   cRoom[21][1] = 'i';
   cRoom[22][1] = 't';
   cRoom[23][1] = '(';
   cRoom[24][1] = '*';
   cRoom[25][1] = '^';
   cRoom[26][1] = '%';
   cRoom[27][1] = 's';
   cRoom[28][1] = 'e';
   cRoom[29][1] = 'w';	   

   cRoom[0][2] = 'w';
   cRoom[1][2] = '1';
   cRoom[2][2] = '2';
   cRoom[3][2] = 'i';
   cRoom[4][2] = 'w';
   cRoom[5][2] = 'w';
   cRoom[6][2] = 'w';
   cRoom[7][2] = 'w';
   cRoom[8][2] = 'w';
   cRoom[9][2] = 'w';
   cRoom[10][2] = 'P';
   cRoom[11][2] = 'c';
   cRoom[12][2] = 'P';
   cRoom[13][2] = 't';
   cRoom[14][2] = 't';
   cRoom[15][2] = 't';
   cRoom[16][2] = 'c';
   cRoom[17][2] = 'P';
   cRoom[18][2] = 'i';
   cRoom[19][2] = 'w';
   cRoom[20][2] = 'w';
   cRoom[21][2] = 'w';
   cRoom[22][2] = 'w';
   cRoom[23][2] = 'w';
   cRoom[24][2] = 'w';
   cRoom[25][2] = 'w';
   cRoom[26][2] = 'w';
   cRoom[27][2] = 'w';
   cRoom[28][2] = 'w';
   cRoom[29][2] = 'w';

   cRoom[0][3] = 'w';
   cRoom[1][3] = 'i';
   cRoom[2][3] = 'i';
   cRoom[3][3] = 'i';
   cRoom[4][3] = 'w';
   cRoom[5][3] = 't';
   cRoom[6][3] = 'i';
   cRoom[7][3] = 't';
   cRoom[8][3] = 'w';
   cRoom[9][3] = '1';
   cRoom[10][3] = 't';
   cRoom[11][3] = 'P';
   cRoom[12][3] = 't';
   cRoom[13][3] = 't';
   cRoom[14][3] = 't';
   cRoom[15][3] = 't';
   cRoom[16][3] = 'w';
   cRoom[17][3] = 'c';
   cRoom[18][3] = 't';
   cRoom[19][3] = 'w';
   cRoom[20][3] = '1';
   cRoom[21][3] = 'i';
   cRoom[22][3] = '2';
   cRoom[23][3] = 'i';
   cRoom[24][3] = '1';
   cRoom[25][3] = 'i';
   cRoom[26][3] = 'i';
   cRoom[27][3] = 'i';
   cRoom[28][3] = 'B';
   cRoom[29][3] = 'w';

   cRoom[0][4] = 'w';
   cRoom[1][4] = '3';
   cRoom[2][4] = 'i';
   cRoom[3][4] = 't';
   cRoom[4][4] = 'w';
   cRoom[5][4] = 'i';
   cRoom[6][4] = 'F';
   cRoom[7][4] = 'i';
   cRoom[8][4] = 'w';
   cRoom[9][4] = 'i';
   cRoom[10][4] = 'w';
   cRoom[11][4] = 't';
   cRoom[12][4] = 't';
   cRoom[13][4] = 't';
   cRoom[14][4] = '1';
   cRoom[15][4] = 'i';
   cRoom[16][4] = 't';
   cRoom[17][4] = 't';
   cRoom[18][4] = 't';
   cRoom[19][4] = 'w';
   cRoom[20][4] = 'i';
   cRoom[21][4] = 'c';
   cRoom[22][4] = 't';
   cRoom[23][4] = 'i';
   cRoom[24][4] = '2';
   cRoom[25][4] = 'i';
   cRoom[26][4] = 'i';
   cRoom[27][4] = 'i';
   cRoom[28][4] = 'i';
   cRoom[29][4] = 'w';

   cRoom[0][5] = 'w';
   cRoom[1][5] = '1';
   cRoom[2][5] = '4';
   cRoom[3][5] = 'i';
   cRoom[4][5] = 'i';
   cRoom[5][5] = 't';
   cRoom[6][5] = 'w';
   cRoom[7][5] = '3';
   cRoom[8][5] = 'i';
   cRoom[9][5] = '4';
   cRoom[10][5] = '9';
   cRoom[11][5] = 'w';
   cRoom[12][5] = 'w';
   cRoom[13][5] = 'w';
   cRoom[14][5] = 'i';
   cRoom[15][5] = 'P';
   cRoom[16][5] = 'c';
   cRoom[17][5] = 't';
   cRoom[18][5] = 'T';
   cRoom[19][5] = 'w';
   cRoom[20][5] = 'i';
   cRoom[21][5] = 't';
   cRoom[22][5] = 'i';
   cRoom[23][5] = 'i';
   cRoom[24][5] = 'i';
   cRoom[25][5] = 'i';
   cRoom[26][5] = 'i';
   cRoom[27][5] = '2';
   cRoom[28][5] = 'i';
   cRoom[29][5] = 'w';

   cRoom[0][6] = 'w';
   cRoom[1][6] = 'i';
   cRoom[2][6] = 'i';
   cRoom[3][6] = 'i';
   cRoom[4][6] = 'i';
   cRoom[5][6] = 'w';
   cRoom[6][6] = 'w';
   cRoom[7][6] = '1';
   cRoom[8][6] = 'i';
   cRoom[9][6] = '2';
   cRoom[10][6] = 'w';
   cRoom[11][6] = 't';
   cRoom[12][6] = 't';
   cRoom[13][6] = 't';
   cRoom[14][6] = 't';
   cRoom[15][6] = 'c';
   cRoom[16][6] = 't';
   cRoom[17][6] = 't';
   cRoom[18][6] = 't';
   cRoom[19][6] = 'w';
   cRoom[20][6] = 'i';
   cRoom[21][6] = 'i';
   cRoom[22][6] = 'i';
   cRoom[23][6] = 'i';
   cRoom[24][6] = 'i';
   cRoom[25][6] = 'i';
   cRoom[26][6] = '8';
   cRoom[27][6] = 'i';
   cRoom[28][6] = 'i';
   cRoom[29][6] = 'w';

   cRoom[0][7] = 'w';
   cRoom[1][7] = 't';
   cRoom[2][7] = 'i';
   cRoom[3][7] = '3';
   cRoom[4][7] = 'i';
   cRoom[5][7] = 'w';
   cRoom[6][7] = 't';
   cRoom[7][7] = '4';
   cRoom[8][7] = 'i';
   cRoom[9][7] = '3';
   cRoom[10][7] = 'i';
   cRoom[11][7] = 't';
   cRoom[12][7] = 'f';
   cRoom[13][7] = 't';
   cRoom[14][7] = 't';
   cRoom[15][7] = 't';
   cRoom[16][7] = 't';
   cRoom[17][7] = 't';
   cRoom[18][7] = 't';
   cRoom[19][7] = 'w';
   cRoom[20][7] = '3';
   cRoom[21][7] = 'i';
   cRoom[22][7] = 'i';
   cRoom[23][7] = 'i';
   cRoom[24][7] = '/';
   cRoom[25][7] = 'i';
   cRoom[26][7] = 'i';
   cRoom[27][7] = 'i';
   cRoom[28][7] = 'i';
   cRoom[29][7] = 'w';

   cRoom[0][8] = 'w';
   cRoom[1][8] = 'w';
   cRoom[2][8] = 'w';
   cRoom[3][8] = 'i';
   cRoom[4][8] = 'w';
   cRoom[5][8] = 'w';
   cRoom[6][8] = '/';
   cRoom[7][8] = 'w';
   cRoom[8][8] = 'w';
   cRoom[9][8] = 'w';
   cRoom[10][8] = 'w';
   cRoom[11][8] = 'w';
   cRoom[12][8] = 'w';
   cRoom[13][8] = 'w';
   cRoom[14][8] = 'w';
   cRoom[15][8] = 'w';
   cRoom[16][8] = 'a';
   cRoom[17][8] = 'a';
   cRoom[18][8] = 'a';
   cRoom[19][8] = 'w';
   cRoom[20][8] = '1';
   cRoom[21][8] = 'i';
   cRoom[22][8] = '1';
   cRoom[23][8] = 'i';
   cRoom[24][8] = '?';
   cRoom[25][8] = 'i';
   cRoom[26][8] = 'i';
   cRoom[27][8] = '4';
   cRoom[28][8] = 'i';
   cRoom[29][8] = 'w';

   cRoom[0][9] = 'w';
   cRoom[1][9] = 'c';
   cRoom[2][9] = 't';
   cRoom[3][9] = 'f';
   cRoom[4][9] = 'c';
   cRoom[5][9] = 't';
   cRoom[6][9] = 't';
   cRoom[7][9] = 'f';
   cRoom[8][9] = 'c';
   cRoom[9][9] = 'f';
   cRoom[10][9] = 't';
   cRoom[11][9] = 't';
   cRoom[12][9] = 't';
   cRoom[13][9] = 'f';
   cRoom[14][9] = '5';
   cRoom[15][9] = 'w';
   cRoom[16][9] = 'c';
   cRoom[17][9] = 'P';
   cRoom[18][9] = 'c';
   cRoom[19][9] = 'w';
   cRoom[20][9] = 'i';
   cRoom[21][9] = 'i';
   cRoom[22][9] = '3';
   cRoom[23][9] = 'i';
   cRoom[24][9] = 'i';
   cRoom[25][9] = 'i';
   cRoom[26][9] = 'i';
   cRoom[27][9] = 'i';
   cRoom[28][9] = '4';
   cRoom[29][9] = 'w';

   cRoom[0][10] = 'w';
   cRoom[1][10] = 'f';
   cRoom[2][10] = 't';
   cRoom[3][10] = 'f';
   cRoom[4][10] = 'f';
   cRoom[5][10] = 'u';
   cRoom[6][10] = 'f';
   cRoom[7][10] = 'f';
   cRoom[8][10] = 't';
   cRoom[9][10] = 't';
   cRoom[10][10] = 't';
   cRoom[11][10] = 'f';
   cRoom[12][10] = 't';
   cRoom[13][10] = 't';
   cRoom[14][10] = 'f';
   cRoom[15][10] = 'w';
   cRoom[16][10] = 'c';
   cRoom[17][10] = 'P';
   cRoom[18][10] = 'c';
   cRoom[19][10] = 'w';
   cRoom[20][10] = 'W';
   cRoom[21][10] = 'w';
   cRoom[22][10] = 'w';
   cRoom[23][10] = 'w';
   cRoom[24][10] = 't';
   cRoom[25][10] = 'w';
   cRoom[26][10] = 'w';
   cRoom[27][10] = 'w';
   cRoom[28][10] = 'w';
   cRoom[29][10] = 'w';

   cRoom[0][11] = 'w';
   cRoom[1][11] = 'f';
   cRoom[2][11] = 't';
   cRoom[3][11] = 't';
   cRoom[4][11] = 't';
   cRoom[5][11] = 't';
   cRoom[6][11] = 't';
   cRoom[7][11] = 'f';
   cRoom[8][11] = 't';
   cRoom[9][11] = 'f';
   cRoom[10][11] = 'f';
   cRoom[11][11] = 'f';
   cRoom[12][11] = 'f';
   cRoom[13][11] = 't';
   cRoom[14][11] = 'f';
   cRoom[15][11] = 'w';
   cRoom[16][11] = 'c';
   cRoom[17][11] = 'P';
   cRoom[18][11] = 'c';
   cRoom[19][11] = 'w';
   cRoom[20][11] = 'c';
   cRoom[21][11] = 'a';
   cRoom[22][11] = 'a';
   cRoom[23][11] = 't';
   cRoom[24][11] = 't';
   cRoom[25][11] = 't';
   cRoom[26][11] = 'P';
   cRoom[27][11] = 't';
   cRoom[28][11] = 'c';
   cRoom[29][11] = 'w';	   

   cRoom[0][12] = 'w';
   cRoom[1][12] = 'f';
   cRoom[2][12] = 't';
   cRoom[3][12] = 'f';
   cRoom[4][12] = 'f';
   cRoom[5][12] = 'f';
   cRoom[6][12] = 't';
   cRoom[7][12] = 'f';
   cRoom[8][12] = 't';
   cRoom[9][12] = 't';
   cRoom[10][12] = 'f';
   cRoom[11][12] = 'c';
   cRoom[12][12] = 't';
   cRoom[13][12] = 't';
   cRoom[14][12] = 't';
   cRoom[15][12] = 'w';
   cRoom[16][12] = 'c';
   cRoom[17][12] = 'c';
   cRoom[18][12] = 'a';
   cRoom[19][12] = 'a';
   cRoom[20][12] = 'a';
   cRoom[21][12] = 'a';
   cRoom[22][12] = 'a';
   cRoom[23][12] = 'P';
   cRoom[24][12] = '?';
   cRoom[25][12] = 'P';
   cRoom[26][12] = 't';
   cRoom[27][12] = 'P';
   cRoom[28][12] = 't';
   cRoom[29][12] = 'w';

   cRoom[0][13] = 'w';
   cRoom[1][13] = 'f';
   cRoom[2][13] = 't';
   cRoom[3][13] = 'f';
   cRoom[4][13] = 't';
   cRoom[5][13] = 't';
   cRoom[6][13] = 't';
   cRoom[7][13] = 'f';
   cRoom[8][13] = 'f';
   cRoom[9][13] = 't';
   cRoom[10][13] = 'f';
   cRoom[11][13] = 'f';
   cRoom[12][13] = 'f';
   cRoom[13][13] = 't';
   cRoom[14][13] = 'f';
   cRoom[15][13] = 'w';
   cRoom[16][13] = 'w';
   cRoom[17][13] = 'w';
   cRoom[18][13] = 'w';
   cRoom[19][13] = 'a';
   cRoom[20][13] = 'a';
   cRoom[21][13] = 'a';
   cRoom[22][13] = 'a';
   cRoom[23][13] = 'a';
   cRoom[24][13] = 'P';
   cRoom[25][13] = 't';
   cRoom[26][13] = 'P';
   cRoom[27][13] = 't';
   cRoom[28][13] = 't';
   cRoom[29][13] = 'w';

   cRoom[0][14] = 'w';
   cRoom[1][14] = 't';
   cRoom[2][14] = 't';
   cRoom[3][14] = 'f';
   cRoom[4][14] = 'c';
   cRoom[5][14] = 'f';
   cRoom[6][14] = 't';
   cRoom[7][14] = '?';
   cRoom[8][14] = 't';
   cRoom[9][14] = 't';
   cRoom[10][14] = 'f';
   cRoom[11][14] = 't';
   cRoom[12][14] = 't';
   cRoom[13][14] = 't';
   cRoom[14][14] = 't';
   cRoom[15][14] = 'w';
   cRoom[16][14] = 'B';
   cRoom[17][14] = 'B';
   cRoom[18][14] = 'B';
   cRoom[19][14] = 'a';
   cRoom[20][14] = 'a';
   cRoom[21][14] = 'a';
   cRoom[22][14] = 'a';
   cRoom[23][14] = 'a';
   cRoom[24][14] = 'a';
   cRoom[25][14] = 'P';
   cRoom[26][14] = '?';
   cRoom[27][14] = 't';
   cRoom[28][14] = 't';
   cRoom[29][14] = 'w';

   cRoom[0][15] = 'w';
   cRoom[1][15] = 'f';
   cRoom[2][15] = 't';
   cRoom[3][15] = 'f';
   cRoom[4][15] = 'f';
   cRoom[5][15] = 'f';
   cRoom[6][15] = 't';
   cRoom[7][15] = 'f';
   cRoom[8][15] = 'f';
   cRoom[9][15] = 'f';
   cRoom[10][15] = 'f';
   cRoom[11][15] = 't';
   cRoom[12][15] = 'f';
   cRoom[13][15] = 'f';
   cRoom[14][15] = 'u';
   cRoom[15][15] = '?';
   cRoom[16][15] = 'B';
   cRoom[17][15] = 'B';
   cRoom[18][15] = 'B';
   cRoom[19][15] = 't';
   cRoom[20][15] = 'a';
   cRoom[21][15] = 'a';
   cRoom[22][15] = 'a';
   cRoom[23][15] = 'a';
   cRoom[24][15] = 'c';
   cRoom[25][15] = 'a';
   cRoom[26][15] = 'P';
   cRoom[27][15] = 't';
   cRoom[28][15] = 't';
   cRoom[29][15] = 'w';

   cRoom[0][16] = 'w';
   cRoom[1][16] = 'B';
   cRoom[2][16] = 't';
   cRoom[3][16] = 't';
   cRoom[4][16] = 't';
   cRoom[5][16] = 'f';
   cRoom[6][16] = 't';
   cRoom[7][16] = 'f';
   cRoom[8][16] = 'c';
   cRoom[9][16] = 't';
   cRoom[10][16] = 't';
   cRoom[11][16] = 't';
   cRoom[12][16] = 'f';
   cRoom[13][16] = 'c';
   cRoom[14][16] = 't';
   cRoom[15][16] = 'w';
   cRoom[16][16] = 'B';
   cRoom[17][16] = 'B';
   cRoom[18][16] = 'B';
   cRoom[19][16] = 'c';
   cRoom[20][16] = 't';
   cRoom[21][16] = 'a';
   cRoom[22][16] = 'w';
   cRoom[23][16] = 'a';
   cRoom[24][16] = 'a';
   cRoom[25][16] = 'a';
   cRoom[26][16] = 'a';
   cRoom[27][16] = 'a';
   cRoom[28][16] = 'p';
   cRoom[29][16] = 'w';

   cRoom[0][17] = 'w';
   cRoom[1][17] = 'w';
   cRoom[2][17] = 'w';
   cRoom[3][17] = 'w';
   cRoom[4][17] = 'w';
   cRoom[5][17] = 'w';
   cRoom[6][17] = 'w';
   cRoom[7][17] = 'w';
   cRoom[8][17] = 'w';
   cRoom[9][17] = 'w';
   cRoom[10][17] = 'w';
   cRoom[11][17] = 'w';
   cRoom[12][17] = 'w';
   cRoom[13][17] = 'w';
   cRoom[14][17] = 'w';
   cRoom[15][17] = 'w';
   cRoom[16][17] = 'w';
   cRoom[17][17] = 'w';
   cRoom[18][17] = 'w';
   cRoom[19][17] = 'w';
   cRoom[20][17] = 'w';
   cRoom[21][17] = 'w';
   cRoom[22][17] = 'w';
   cRoom[23][17] = 'w';
   cRoom[24][17] = 'w';
   cRoom[25][17] = 'w';
   cRoom[26][17] = 'w';
   cRoom[27][17] = 'w';
   cRoom[28][17] = 'w';
   cRoom[29][17] = 'w';

   return 25;
}

int RoomData9(char cRoom[99][99])
{
   iMaxX = 11;
   iMaxY = 17;
   iLocX = 2; 
   iLocY = 1;
   iMoves = 300;

char cTemp[99][99] = {
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'},
{'w', 'a', 't', 't', 't', 'a', 't', 't', 't', 'a', 'w'},
{'w', 't', 'P', 'c', 'P', 'c', 'P', 'c', 'P', 't', 'w'},
{'w', 't', 'c', 'P', 'c', 'p', 'c', 'P', 'c', 't', 'w'},
{'1', 't', 'P', 'c', 'P', 'c', 'P', 'c', 'P', 't', '2'},
{'3', 't', 't', 't', 't', 't', 't', 't', 't', 't', '4'},
{'3', 'a', 'a', 'c', 'a', 'f', 'c', 'a', 'a', 'a', '4'},
{'3', 'a', 'a', 'a', 'a', 'f', 'a', 'c', 'a', 'a', '4'},
{'3', 'a', 'c', 'a', 'a', 'f', 'a', 'a', 'a', 'a', '4'},
{'3', 'a', 'a', 'a', 'c', 'f', 'c', 'a', 'c', 'c', '4'},
{'3', 'c', 'c', 'a', 'a', 'f', 'a', 'c', 'c', 'a', '4'},
{'3', 'a', 'a', 'c', 'a', 'f', 'a', 'a', 'a', 'a', '4'},
{'3', 'a', 'a', 'a', 'a', 'f', 'a', 'c', 'c', 'a', '4'},
{'3', 'a', 'a', 'c', 'a', 'f', 'a', 'a', 'a', 'a', '4'},
{'3', 't', 't', 't', 't', 't', 't', 't', 't', 't', '4'},
{'3', 't', 't', 's', 's', 's', 's', 's', 't', 't', '4'},
{'w', 'w', 'w', 'w', 'e', 'e', 'e', 'w', 'w', 'w', 'w'}};
unsigned short int i, i2;

for(i=0;i<11;++i)
{
	for(i2=0;i2<17;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 26;
}int RoomData10(char cRoom[99][99])
{
   iMaxX = 15;
   iMaxY = 15;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 100;

char cTemp[99][99] = {
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'},
{'w', 'p', 'i', 't', 'i', 't', 'i', 't', 'i', 't', 'i', 't', 'i', 't', 'w'},
{'w', 'i', 'w', 'c', 'w', 'c', 'w', 'c', 'w', 'c', 'w', 'c', 'w', 'c', 'w'},
{'w', 't', 'c', '3', 'i', 'i', 'i', 'i', 'i', 'i', 'i', '2', 'i', 'i', 'a'},
{'w', 'i', 'w', 'i', 'i', 'i', '1', 'i', '1', 'i', 'i', 'i', '2', 'i', 'a'},
{'w', 't', 'c', 'i', 'i', 'i', 'i', '2', 'i', 'i', '1', 'i', 'i', 'i', 'a'},
{'w', 'i', 'w', 'i', 'i', 'i', 'i', 'i', 'i', 'c', 'i', 'i', 'i', 'i', 'a'},
{'w', 't', 'c', 'i', 'i', '4', 'i', 'i', 's', 'i', 'i', 'i', 'i', 'i', 'a'},
{'w', 'i', 'w', 'i', 'i', 'i', 'i', '9', 'i', 'i', 'i', 'i', '3', 'i', 'a'},
{'w', 't', 'c', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'i', '4', 'i', 'i', 'a'},
{'w', 'i', 'w', '1', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'i', '4', 'a'},
{'w', 't', 'c', 'i', 'i', 'i', 'i', '4', 'i', 'i', 'i', 'i', 'i', 'i', 'a'},
{'w', 'i', 'w', 'i', '1', 'i', 'c', 'i', 'i', 'c', 'i', 'i', 'c', 'i', 'a'},
{'w', 't', 'c', '2', 'i', 'i', '4', 'i', '(', '3', '4', '3', '4', 'i', 'a'},
{'w', 'w', 'w', 'a', 'a', 'a', 'a', 'a', 'e', 'a', 'a', 'a', 'a', 'a', 'a'}};
unsigned short int i, i2;

for(i=0;i<15;++i)
{
	for(i2=0;i2<15;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 16;
}

int RoomData11(char cRoom[99][99])
{
   iMaxX = 10;
   iMaxY = 10;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 43;

char cTemp[99][99] = {
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'},
{'w', 'p', 'a', 'c', 'a', 'P', 'a', 'P', 'c', 'w'},
{'w', 'P', 'a', 'P', 'a', 'a', 'a', 'a', 'a', 'w'},
{'w', 'a', 'a', 'a', 'a', 'e', 's', 'a', 'P', 'w'},
{'w', 'P', 'a', 'P', 'a', 's', 'a', 'a', 'a', 'w'},
{'w', 'a', 'a', 'a', 'a', 'a', 'P', 'a', 'P', 'w'},
{'w', 'P', 'a', 'c', 'P', 'a', 'c', 'a', 'a', 'w'},
{'w', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'P', 'w'},
{'w', 'c', 'P', 'a', 'P', 'a', 'P', 'a', 'c', 'w'},
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'}};
unsigned short int i, i2;

for(i=0;i<10;++i)
{
	for(i2=0;i2<10;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 6;
}

int RoomData12(char cRoom[99][99])
{
   iMaxX = 17;
   iMaxY = 17;
   iLocX = 5; 
   iLocY = 0;
   iMoves = 50;

char cTemp[99][99] = {
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'},
{'w', 'a', 'u', 'a', 'u', 'a', 'u', 'w', 'p', 'a', 'u', 'a', 'u', 'a', 'u', 'a', 'w'},
{'w', 'u', 'u', 'u', 'u', 'u', 'u', 'w', 'u', 'u', 'c', 'u', 'u', 'u', 'u', 'u', 'w'},
{'w', 'a', 'u', 'a', 'a', 'a', 'u', 'w', 'w', 'w', 'u', 'a', 'a', 'a', 'u', 'a', 'w'},
{'w', 'u', 'u', 'a', 'c', 'u', 'u', 'u', 'u', 'u', 'u', 'u', 'c', 'a', 'u', 'c', 'w'},
{'w', 'a', 'u', 'a', 'a', 'a', 'a', 'a', 'u', 'a', 'u', 'a', 'u', 'a', 'a', 'a', 'w'},
{'w', 'u', 'c', 'u', 'u', 'a', 'c', 'a', 'c', 'a', 'u', 'u', 'u', 'a', 'u', 'c', 'w'},
{'w', 'a', 'u', 'a', 'u', 'a', 'u', 'a', 'a', 'a', 'a', 'a', 'u', 'a', 'u', 'a', 'w'},
{'w', 'c', 'u', 'a', 'u', 'u', 'u', 'a', 'c', 'u', 'u', 'u', 'u', 'u', 'u', 'c', 'w'},
{'w', 'w', 'a', 'e', 'a', 'w', 'i', 'w', 'a', 'a', 'a', 'w', 'a', 'w', 'a', 'a', 'w'},
{'w', 'i', 'i', '3', 'i', '2', 'i', '1', 'i', 's', 'i', 'i', 'i', 'i', 'i', '2', 'w'},
{'a', 'i', 'c', 'i', 'u', 'i', 'c', 'i', 'u', 'i', 'c', 'i', 'u', 'i', 'c', 'i', 'a'},
{'w', '1', 'i', 'i', 'i', 'i', 'i', '2', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'w'},
{'a', 'i', 'u', 'i', 'c', 'i', 'u', 'i', 'c', 'i', 'u', 'i', 'c', 'i', 'u', '3', 'a'},
{'w', '3', 'i', 'i', 'i', '4', 'i', '3', 'i', '4', 'i', 'i', 'i', 'i', 'i', 'i', 'w'},
{'a', 'i', 'c', 'i', 'u', 'i', 'c', 'i', 'u', 'i', 'c', 'i', 'u', 'i', 'c', '4', 'a'},
{'w', 'w', 'a', 'w', 'a', 'w', 'a', 'w', 'a', 'w', 'a', 'w', 'a', 'w', 'a', 'w', 'w'}};
unsigned short int i, i2;

for(i=0;i<17;++i)
{
	for(i2=0;i2<17;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 13;
}

int RoomData13(char cRoom[99][99])
{
   iMaxX = 25;
   iMaxY = 24;
   iLocX = 9; 
   iLocY = 0;
   iMoves = 1299;

char cTemp[99][99] = {
{'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w', 'f', 'w'},
{'w', 'w', 'w', '6', 'w', 'w', 'w', 'w', 'w', 'c', 'w', 't', 'p', 't', 'w', 'c', 'w', 'w', 'w', 'w', 'w', '9', 'w', 'w', 'w'},
{'w', 'f', 'w', 'c', 't', 't', 't', 't', 'P', '(', 't', 't', 't', 't', 't', '(', 'P', 't', 't', 't', 't', 'c', 'w', 'f', 'w'},
{'w', 'w', 'w', 't', 'w', 'w', 't', 'w', 'w', 't', 'w', 't', 'P', 't', 'w', 't', 'w', 'w', 't', 'w', 'w', 't', 'w', 'w', 'w'},
{'w', 'f', 'w', 't', 'w', 'c', 'P', 'c', 'w', 't', 'w', 'w', 't', 'w', 'w', 't', 'w', 'c', 'P', 'c', 'w', 't', 'w', 'f', 'w'},
{'w', 'w', 'w', 't', 't', 'P', 't', 'P', 't', 't', 'w', '9', 'a', 'c', 'w', 't', 't', 'P', 't', 'P', 't', 't', 'w', 'w', 'w'},
{'w', 'f', 'w', 't', 'w', 'c', 't', 'c', 'w', 't', 'w', 'w', 'a', 'w', 'w', 't', 'w', 'c', 't', 'c', 'w', 't', 'w', 'f', 'w'},
{'w', 'w', 'w', 't', 'w', 'w', 'P', 'w', 'w', 't', 'w', 'c', 'a', '9', 'w', 't', 'w', 'w', 'P', 'w', 'w', 't', 'w', 'w', 'w'},
{'w', 'c', 'P', 't', '%', 't', 't', 't', 't', 't', 'w', 'w', 'a', 'w', 'w', 't', 't', 't', 't', 't', '^', 't', 'P', 'c', 'w'},
{'w', 't', 'w', '(', 'w', 'w', 'w', 'w', 't', 't', 'w', 't', 'a', '5', 'w', 't', 't', 'w', 'w', 'w', 'w', '(', 'w', 't', 'w'},
{'w', 't', 't', '5', 'w', 'c', 'f', 'c', 'w', 'w', 't', 't', 'a', 'w', 'w', 'w', 'w', 't', 't', 't', 'w', 't', 't', 't', 'w'},
{'w', 'w', 'w', 'w', 'w', 't', 'f', 't', 't', 't', 't', 'w', 'a', 't', 't', 'c', 'c', 't', 'f', 't', 'w', 'w', 'w', 'w', 'w'},
{'w', 'c', '6', 'w', 't', 'c', 't', 'c', 'w', 't', 'w', 'c', 'a', 'w', 'w', 'c', 'f', 'f', 'f', 't', 't', 'w', '5', 'c', 'w'},
{'w', 't', 'w', 't', 't', 'w', 't', 'w', 'w', 't', 'w', 'w', 'a', '9', 'w', 'c', 'c', 't', 'f', 'f', 't', 't', 'w', 'i', 'w'},
{'w', 'a', 'w', '9', 'w', 'w', 't', 't', 't', 'c', 'w', 'c', 'a', 'w', 'w', 'w', 'w', 't', 't', 'f', 'f', 'c', 'w', 'i', 'w'},
{'w', 'a', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'a', 'w', 't', 'c', 'w', 'w', 't', 't', 'c', '8', 'w', 'i', 'w'},
{'w', 't', 'c', 't', 't', 'c', 't', 't', 'c', 't', 't', '%', '%', '%', 'P', 't', 'c', 'w', 'w', 'w', 'w', 'w', 'w', 'i', 'w'},
{'w', 'c', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'c', 't', 'w', '^', 'w', 't', 'P', 't', 't', 't', 'f', 't', 'c', '2', 'i', 'w'},
{'w', 't', 'c', 't', 't', 'c', 't', 't', 'c', 't', 'w', 'w', '(', 'w', 'w', 't', 't', 't', 't', 'c', 't', 'f', '3', '4', 'w'},
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 't', '*', 't', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'},
{'w', 'c', 'c', 'c', 't', 't', 't', 'P', 't', 'P', 't', 't', 's', 't', 't', 't', 'a', 't', 't', 'a', '5', 'w', 'I', 't', 'w'},
{'w', 'c', '1', 'i', 'i', 'i', 'i', 'i', 'i', 'i', '4', 's', 's', 's', 't', 'c', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'c', 'w'},
{'w', 'c', '1', '4', '4', '4', '4', '4', '4', '4', 'w', 'w', '%', 'w', 'w', 't', 'c', 't', 'c', 't', 'c', 't', 'c', 't', 'w'},
{'w', 'w', 'a', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'e', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'}};
unsigned short int i, i2;

for(i=0;i<25;++i)
{
	for(i2=0;i2<24;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 55;
}

int RoomData14(char cRoom[99][99])
{
   iMaxX = 17;
   iMaxY = 8;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 125;
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

   cRoom[0][1] = 'w';
   cRoom[1][1] = 'c';
   cRoom[2][1] = 'w';
   cRoom[3][1] = 'p';
   cRoom[4][1] = 't';
   cRoom[5][1] = 't';
   cRoom[6][1] = 't';
   cRoom[7][1] = 'f';
   cRoom[8][1] = 't';
   cRoom[9][1] = 't';
   cRoom[10][1] = 't';
   cRoom[11][1] = 't';
   cRoom[12][1] = 't';
   cRoom[13][1] = 't';
   cRoom[14][1] = 't';
   cRoom[15][1] = 't';
   cRoom[16][1] = 'w';

   cRoom[0][2] = 'w';
   cRoom[1][2] = 't';
   cRoom[2][2] = 'w';
   cRoom[3][2] = 't';
   cRoom[4][2] = 't';
   cRoom[5][2] = 'i';
   cRoom[6][2] = 'i';
   cRoom[7][2] = 'i';
   cRoom[8][2] = 't';
   cRoom[9][2] = 'f';
   cRoom[10][2] = 'f';
   cRoom[11][2] = 'f';
   cRoom[12][2] = 't';
   cRoom[13][2] = 't';
   cRoom[14][2] = 'f';
   cRoom[15][2] = 'c';
   cRoom[16][2] = 'w';

   cRoom[0][3] = 'w';
   cRoom[1][3] = 't';
   cRoom[2][3] = 'w';
   cRoom[3][3] = 't';
   cRoom[4][3] = 't';
   cRoom[5][3] = 'f';
   cRoom[6][3] = 'i';
   cRoom[7][3] = 'e';
   cRoom[8][3] = 'f';
   cRoom[9][3] = 'f';
   cRoom[10][3] = 'f';
   cRoom[11][3] = 'f';
   cRoom[12][3] = 'f';
   cRoom[13][3] = 't';
   cRoom[14][3] = 't';
   cRoom[15][3] = 'f';
   cRoom[16][3] = 'w';

   cRoom[0][4] = 'w';
   cRoom[1][4] = 't';
   cRoom[2][4] = 't';
   cRoom[3][4] = 't';
   cRoom[4][4] = 't';
   cRoom[5][4] = 'f';
   cRoom[6][4] = '3';
   cRoom[7][4] = 'i';
   cRoom[8][4] = 't';
   cRoom[9][4] = 't';
   cRoom[10][4] = 't';
   cRoom[11][4] = 't';
   cRoom[12][4] = 'f';
   cRoom[13][4] = 't';
   cRoom[14][4] = 's';
   cRoom[15][4] = 'I';
   cRoom[16][4] = 'w';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 't';
   cRoom[2][5] = 'w';
   cRoom[3][5] = 't';
   cRoom[4][5] = 't';
   cRoom[5][5] = 'f';
   cRoom[6][5] = 'f';
   cRoom[7][5] = 'f';
   cRoom[8][5] = 't';
   cRoom[9][5] = 'f';
   cRoom[10][5] = 'f';
   cRoom[11][5] = 't';
   cRoom[12][5] = 't';
   cRoom[13][5] = 'f';
   cRoom[14][5] = 'f';
   cRoom[15][5] = 'f';
   cRoom[16][5] = 'w';

   cRoom[0][6] = 'w';
   cRoom[1][6] = 'c';
   cRoom[2][6] = 'w';
   cRoom[3][6] = 't';
   cRoom[4][6] = 't';
   cRoom[5][6] = 't';
   cRoom[6][6] = 'c';
   cRoom[7][6] = 'f';
   cRoom[8][6] = 't';
   cRoom[9][6] = 't';
   cRoom[10][6] = 'c';
   cRoom[11][6] = 'f';
   cRoom[12][6] = 't';
   cRoom[13][6] = 't';
   cRoom[14][6] = 't';
   cRoom[15][6] = 'c';
   cRoom[16][6] = 'w';

   cRoom[0][7] = 'w';
   cRoom[1][7] = 'w';
   cRoom[2][7] = 'w';
   cRoom[3][7] = 'w';
   cRoom[4][7] = 'w';
   cRoom[5][7] = 'w';
   cRoom[6][7] = 'w';
   cRoom[7][7] = 'w';
   cRoom[8][7] = 'w';
   cRoom[9][7] = 'w';
   cRoom[10][7] = 'w';
   cRoom[11][7] = 'w';
   cRoom[12][7] = 'w';
   cRoom[13][7] = 'w';
   cRoom[14][7] = 'w';
   cRoom[15][7] = 'w';
   cRoom[16][7] = 'w';

   return 6;
}int RoomData15(char cRoom[99][99])
{
   iMaxX = 13;
   iMaxY = 10;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 40;
   cRoom[0][0] = 'w';
   cRoom[1][0] = 'w';
   cRoom[2][0] = 'e';
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

   cRoom[0][1] = 'w';
   cRoom[1][1] = 'p';
   cRoom[2][1] = 's';
   cRoom[3][1] = '1';
   cRoom[4][1] = 'i';
   cRoom[5][1] = '2';
   cRoom[6][1] = 'S';
   cRoom[7][1] = '2';
   cRoom[8][1] = '1';
   cRoom[9][1] = 'i';
   cRoom[10][1] = 'i';
   cRoom[11][1] = '2';
   cRoom[12][1] = 'w';

   cRoom[0][2] = 'w';
   cRoom[1][2] = 'u';
   cRoom[2][2] = 'w';
   cRoom[3][2] = 'i';
   cRoom[4][2] = 'I';
   cRoom[5][2] = '4';
   cRoom[6][2] = 'f';
   cRoom[7][2] = 'i';
   cRoom[8][2] = 'i';
   cRoom[9][2] = 'c';
   cRoom[10][2] = 'c';
   cRoom[11][2] = 'i';
   cRoom[12][2] = 'w';

   cRoom[0][3] = 'w';
   cRoom[1][3] = 't';
   cRoom[2][3] = 'i';
   cRoom[3][3] = '4';
   cRoom[4][3] = 'f';
   cRoom[5][3] = 'c';
   cRoom[6][3] = 'f';
   cRoom[7][3] = 'i';
   cRoom[8][3] = 'i';
   cRoom[9][3] = 'c';
   cRoom[10][3] = 'c';
   cRoom[11][3] = 'i';
   cRoom[12][3] = 't';

   cRoom[0][4] = 'w';
   cRoom[1][4] = 't';
   cRoom[2][4] = 'i';
   cRoom[3][4] = 'i';
   cRoom[4][4] = 'i';
   cRoom[5][4] = 'i';
   cRoom[6][4] = 'S';
   cRoom[7][4] = '4';
   cRoom[8][4] = 't';
   cRoom[9][4] = 'c';
   cRoom[10][4] = 'c';
   cRoom[11][4] = 'i';
   cRoom[12][4] = 't';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 'S';
   cRoom[2][5] = 'w';
   cRoom[3][5] = 'w';
   cRoom[4][5] = 'w';
   cRoom[5][5] = 'w';
   cRoom[6][5] = 'w';
   cRoom[7][5] = 'w';
   cRoom[8][5] = 'w';
   cRoom[9][5] = 'w';
   cRoom[10][5] = 'w';
   cRoom[11][5] = 'S';
   cRoom[12][5] = 'w';

   cRoom[0][6] = 'w';
   cRoom[1][6] = 'i';
   cRoom[2][6] = 't';
   cRoom[3][6] = 'f';
   cRoom[4][6] = 't';
   cRoom[5][6] = 'i';
   cRoom[6][6] = 'i';
   cRoom[7][6] = 'i';
   cRoom[8][6] = 'i';
   cRoom[9][6] = 'f';
   cRoom[10][6] = 'w';
   cRoom[11][6] = 'i';
   cRoom[12][6] = 'w';

   cRoom[0][7] = 'w';
   cRoom[1][7] = 'i';
   cRoom[2][7] = 'F';
   cRoom[3][7] = '2';
   cRoom[4][7] = 't';
   cRoom[5][7] = 'w';
   cRoom[6][7] = 'w';
   cRoom[7][7] = 'w';
   cRoom[8][7] = 'w';
   cRoom[9][7] = 'c';
   cRoom[10][7] = 'w';
   cRoom[11][7] = 'i';
   cRoom[12][7] = 'w';

   cRoom[0][8] = 'w';
   cRoom[1][8] = '3';
   cRoom[2][8] = 'i';
   cRoom[3][8] = '4';
   cRoom[4][8] = 't';
   cRoom[5][8] = 'i';
   cRoom[6][8] = 'i';
   cRoom[7][8] = 'i';
   cRoom[8][8] = 'i';
   cRoom[9][8] = 'i';
   cRoom[10][8] = 'i';
   cRoom[11][8] = '4';
   cRoom[12][8] = 'w';

   cRoom[0][9] = 'w';
   cRoom[1][9] = 'w';
   cRoom[2][9] = 'w';
   cRoom[3][9] = 'w';
   cRoom[4][9] = 'w';
   cRoom[5][9] = 'w';
   cRoom[6][9] = 'w';
   cRoom[7][9] = 'w';
   cRoom[8][9] = 'w';
   cRoom[9][9] = 'w';
   cRoom[10][9] = 'w';
   cRoom[11][9] = 'w';
   cRoom[12][9] = 'w';
   return 8;
}

int RoomData16(char cRoom[99][99])
{
   iMaxX = 10;
   iMaxY = 8;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 35;
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

int RoomData17(char cRoom[99][99])
{
   iMaxX = 9;
   iMaxY = 8;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 39;
   cRoom[0][0] = 'w';
   cRoom[1][0] = 'w';
   cRoom[2][0] = 'w';
   cRoom[3][0] = 'w';
   cRoom[4][0] = 'w';
   cRoom[5][0] = 'w';
   cRoom[6][0] = 'w';
   cRoom[7][0] = 'w';

   cRoom[0][1] = 'w';
   cRoom[1][1] = 'w';
   cRoom[2][1] = 'c';
   cRoom[3][1] = 'W';
   cRoom[4][1] = 'p';
   cRoom[5][1] = 'T';
   cRoom[6][1] = 'e';
   cRoom[7][1] = 'w';

   cRoom[0][2] = 'w';
   cRoom[1][2] = 't';
   cRoom[2][2] = 'T';
   cRoom[3][2] = 'w';
   cRoom[4][2] = 'i';
   cRoom[5][2] = 'w';
   cRoom[6][2] = 'W';
   cRoom[7][2] = 'w';

   cRoom[0][3] = 'w';
   cRoom[1][3] = 't';
   cRoom[2][3] = 't';
   cRoom[3][3] = 't';
   cRoom[4][3] = 'i';
   cRoom[5][3] = 'i';
   cRoom[6][3] = 'i';
   cRoom[7][3] = 'a';

   cRoom[0][4] = 'w';
   cRoom[1][4] = 'c';
   cRoom[2][4] = 'T';
   cRoom[3][4] = 't';
   cRoom[4][4] = 'i';
   cRoom[5][4] = 'i';
   cRoom[6][4] = 'i';
   cRoom[7][4] = 's';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 'T';
   cRoom[2][5] = 't';
   cRoom[3][5] = 't';
   cRoom[4][5] = 'i';
   cRoom[5][5] = 'a';
   cRoom[6][5] = 'i';
   cRoom[7][5] = 'i';
   
   cRoom[0][6] = 'w';
   cRoom[1][6] = 'w';
   cRoom[2][6] = 'w';
   cRoom[3][6] = 't';
   cRoom[4][6] = 't';
   cRoom[5][6] = 'w';
   cRoom[6][6] = 'w';
   cRoom[7][6] = 'I';
   
   cRoom[0][7] = 'w';
   cRoom[1][7] = 'w';
   cRoom[2][7] = 'w';
   cRoom[3][7] = 'w';
   cRoom[4][7] = 'w';
   cRoom[5][7] = 'w';
   cRoom[6][7] = 'w';
   cRoom[7][7] = 'w';
   
   cRoom[8][0] = 'w';
   cRoom[8][1] = 'w';
   cRoom[8][2] = 'w';
   cRoom[8][3] = 'w';
   cRoom[8][4] = 'w';   
   cRoom[8][5] = 'w';
   cRoom[8][6] = 'w';
   cRoom[8][7] = 'w';
	   
   return 2;
}
int RoomData18(char cRoom[99][99])
{
  iMaxX = 10;
   iMaxY = 8;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 13;
   cRoom[0][0] = 'f';
   cRoom[1][0] = 'f';
   cRoom[2][0] = 'f';
   cRoom[3][0] = 'f';
   cRoom[4][0] = 'f'; 
   cRoom[5][0] = 'f';
   cRoom[6][0] = 'f'; 
   cRoom[7][0] = 'f';

   cRoom[0][1] = 'f';
   cRoom[1][1] = 'p';
   cRoom[2][1] = 'i';
   cRoom[3][1] = '2';
   cRoom[4][1] = '1';
   cRoom[5][1] = '3';
   cRoom[6][1] = 'i';
   cRoom[7][1] = 'i';

   cRoom[0][2] = 'f';
   cRoom[1][2] = '3';
   cRoom[2][2] = '1';
   cRoom[3][2] = '4';
   cRoom[4][2] = 'i';
   cRoom[5][2] = 'i';
   cRoom[6][2] = 'f';
   cRoom[7][2] = 'i';

   cRoom[0][3] = 'e';
   cRoom[1][3] = 's';
   cRoom[2][3] = '3';
   cRoom[3][3] = 'i';
   cRoom[4][3] = '4';
   cRoom[5][3] = '3';
   cRoom[6][3] = 'c';
   cRoom[7][3] = '1';

   cRoom[0][4] = 'f';
   cRoom[1][4] = '3';
   cRoom[2][4] = 'i';
   cRoom[3][4] = 'i';
   cRoom[4][4] = '2';
   cRoom[5][4] = '1';
   cRoom[6][4] = '4';
   cRoom[7][4] = 'i';

   cRoom[0][5] = 'f';
   cRoom[1][5] = 'i';
   cRoom[2][5] = 'a';
   cRoom[3][5] = 't';
   cRoom[4][5] = 'i';
   cRoom[5][5] = 'i';
   cRoom[6][5] = 'i';
   cRoom[7][5] = 'i';
   
   cRoom[0][6] = 'f';
   cRoom[1][6] = '3';
   cRoom[2][6] = 'i';
   cRoom[3][6] = '4';
   cRoom[4][6] = 'c';
   cRoom[5][6] = '3';
   cRoom[6][6] = 'i';
   cRoom[7][6] = 'i';
   
   cRoom[8][0] = 'f';
   cRoom[8][1] = 't';
   cRoom[8][2] = '2';
   cRoom[8][3] = 't';
   cRoom[8][4] = 'i';   
   cRoom[8][5] = 'i';
   cRoom[8][6] = 't';
   cRoom[8][7] = 'f';
   
   cRoom[0][7] = 'f';
   cRoom[1][7] = 'f'; 
   cRoom[2][7] = 'f';
   cRoom[3][7] = 'f';
   cRoom[4][7] = 'f';
   cRoom[5][7] = 'f';
   cRoom[6][7] = 'f';
   cRoom[7][7] = 'f';
   
   cRoom[9][0] = 'f';
   cRoom[9][1] = 'f';
   cRoom[9][2] = 'f';
   cRoom[9][3] = '2';
   cRoom[9][4] = 'i';   
   cRoom[9][5] = '4';
   cRoom[9][6] = 'f';
   cRoom[9][7] = 'f';
	   
   return 2;
}int RoomData19(char cRoom[99][99])
{
   iMaxX = 10;
   iMaxY = 10;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 45;
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
   
   cRoom[0][1] = 'w';
   cRoom[1][1] = 'p';
   cRoom[2][1] = 't';
   cRoom[3][1] = 't';
   cRoom[4][1] = 'W';
   cRoom[5][1] = 'w';
   cRoom[6][1] = 'c';
   cRoom[7][1] = 't';
   cRoom[8][1] = '2';
   cRoom[9][1] = 'w';
   
   cRoom[0][2] = 'w';
   cRoom[1][2] = 'w';
   cRoom[2][2] = 'w';
   cRoom[3][2] = 'w';
   cRoom[4][2] = 't';
   cRoom[5][2] = 'f';
   cRoom[6][2] = '1';
   cRoom[7][2] = 'i';
   cRoom[8][2] = '4';
   cRoom[9][2] = 'w';
   
   cRoom[0][3] = 'w';
   cRoom[1][3] = 'c';
   cRoom[2][3] = 'c';
   cRoom[3][3] = 'w';
   cRoom[4][3] = 't';
   cRoom[5][3] = 'f';
   cRoom[6][3] = 'i';
   cRoom[7][3] = 'w';
   cRoom[8][3] = 'w';
   cRoom[9][3] = 'w';
   
   cRoom[0][4] = 'w';
   cRoom[1][4] = 'W';
   cRoom[2][4] = 'w';
   cRoom[3][4] = 'w';
   cRoom[4][4] = 't';
   cRoom[5][4] = 't';
   cRoom[6][4] = 't';
   cRoom[7][4] = 't';
   cRoom[8][4] = 't';
   cRoom[9][4] = 'w';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 'I';
   cRoom[2][5] = 't';
   cRoom[3][5] = 'w';
   cRoom[4][5] = 'W';
   cRoom[5][5] = 'w';
   cRoom[6][5] = 'w';
   cRoom[7][5] = 'w';
   cRoom[8][5] = 't';
   cRoom[9][5] = 'w';
   
   cRoom[0][6] = 'w';
   cRoom[1][6] = 'W';
   cRoom[2][6] = 't';
   cRoom[3][6] = 't';
   cRoom[4][6] = 'w';
   cRoom[5][6] = 'e';
   cRoom[6][6] = 'w';
   cRoom[7][6] = 'w';
   cRoom[8][6] = 'i';
   cRoom[9][6] = 'w';
   
   cRoom[0][7] = 'w';
   cRoom[1][7] = 'W';
   cRoom[2][7] = 'w';
   cRoom[3][7] = 'i';
   cRoom[4][7] = 'w';
   cRoom[5][7] = 's';
   cRoom[6][7] = 'w';
   cRoom[7][7] = 'w';
   cRoom[8][7] = 'i';
   cRoom[9][7] = 'w';
   
   cRoom[0][8] = 'w';
   cRoom[1][8] = 'c';
   cRoom[2][8] = 'w';
   cRoom[3][8] = '3';
   cRoom[4][8] = 'i';
   cRoom[5][8] = '4';
   cRoom[6][8] = 'i';
   cRoom[7][8] = 'i';
   cRoom[8][8] = '4';
   cRoom[9][8] = 'w';
   
   cRoom[0][9] = 'w';
   cRoom[1][9] = 'w';
   cRoom[2][9] = 'w';
   cRoom[3][9] = 'w';
   cRoom[4][9] = 'w';
   cRoom[5][9] = 'w';
   cRoom[6][9] = 'w';
   cRoom[7][9] = 'w';
   cRoom[8][9] = 'w';
   cRoom[9][9] = 'w';
   
   return 4;
}

int RoomData20(char cRoom[99][99])
{
   iMaxX = 17;
   iMaxY = 31;
   iLocX = 9; 
   iLocY = 25;
   iMoves = 499;
   cRoom[0][0] = 'f';
   cRoom[1][0] = 'f';
   cRoom[2][0] = 'f';
   cRoom[3][0] = 'f';
   cRoom[4][0] = 'f';
   cRoom[5][0] = 'f';
   cRoom[6][0] = 'f';
   cRoom[7][0] = 'f';
   cRoom[8][0] = 'f';
   cRoom[9][0] = 'f';
   cRoom[10][0] = 'f';
   cRoom[11][0] = 'f';
   cRoom[12][0] = 'f';
   cRoom[13][0] = 'f';
   cRoom[14][0] = 'f';
   cRoom[15][0] = 'f';
   cRoom[16][0] = 'f';

   cRoom[0][1] = 'f';
   cRoom[1][1] = 'B';
   cRoom[2][1] = '?';
   cRoom[3][1] = 't';
   cRoom[4][1] = 'f';
   cRoom[5][1] = 't';
   cRoom[6][1] = 't';
   cRoom[7][1] = 't';
   cRoom[8][1] = 'f';
   cRoom[9][1] = 'f';
   cRoom[10][1] = 'c';
   cRoom[11][1] = 'f';
   cRoom[12][1] = '1';
   cRoom[13][1] = 'i';
   cRoom[14][1] = 'i';
   cRoom[15][1] = '2';
   cRoom[16][1] = 'f';   

   cRoom[0][2] = 'f';
   cRoom[1][2] = 't';
   cRoom[2][2] = 'f';
   cRoom[3][2] = 't';
   cRoom[4][2] = 't';
   cRoom[5][2] = 'c';
   cRoom[6][2] = 'P';
   cRoom[7][2] = '?';
   cRoom[8][2] = 'B';
   cRoom[9][2] = '/';
   cRoom[10][2] = 'a';
   cRoom[11][2] = 'c';
   cRoom[12][2] = 'c';
   cRoom[13][2] = 'c';
   cRoom[14][2] = 't';
   cRoom[15][2] = 't';
   cRoom[16][2] = 'f';

   cRoom[0][3] = 'f';
   cRoom[1][3] = 't';
   cRoom[2][3] = 'f';
   cRoom[3][3] = 't';
   cRoom[4][3] = 'f';
   cRoom[5][3] = 'f';
   cRoom[6][3] = 'f';
   cRoom[7][3] = 'f';
   cRoom[8][3] = '?';
   cRoom[9][3] = 'f';
   cRoom[10][3] = 'c';
   cRoom[11][3] = 'f';
   cRoom[12][3] = 't';
   cRoom[13][3] = 't';
   cRoom[14][3] = 't';
   cRoom[15][3] = 'f';
   cRoom[16][3] = 'f';

   cRoom[0][4] = 'f';
   cRoom[1][4] = 't';
   cRoom[2][4] = 'f';
   cRoom[3][4] = 'a';
   cRoom[4][4] = 'f';
   cRoom[5][4] = 'I';
   cRoom[6][4] = 't';
   cRoom[7][4] = 'f';
   cRoom[8][4] = 'W';
   cRoom[9][4] = 'f';
   cRoom[10][4] = 'f';
   cRoom[11][4] = '6';
   cRoom[12][4] = 'f';
   cRoom[13][4] = 'f';
   cRoom[14][4] = 'P';
   cRoom[15][4] = 'f';
   cRoom[16][4] = 'f';

   cRoom[0][5] = 'f';
   cRoom[1][5] = 't';
   cRoom[2][5] = 'f';
   cRoom[3][5] = 't';
   cRoom[4][5] = 't';
   cRoom[5][5] = 'f';
   cRoom[6][5] = '3';
   cRoom[7][5] = 'f';
   cRoom[8][5] = 't';
   cRoom[9][5] = 't';
   cRoom[10][5] = 'f';
   cRoom[11][5] = '1';
   cRoom[12][5] = 't';
   cRoom[13][5] = 't';
   cRoom[14][5] = 't';
   cRoom[15][5] = 'i';
   cRoom[16][5] = 'f';

   cRoom[0][6] = 'f';
   cRoom[1][6] = 't';
   cRoom[2][6] = 'f';
   cRoom[3][6] = 'f';
   cRoom[4][6] = 't';
   cRoom[5][6] = '1';
   cRoom[6][6] = 't';
   cRoom[7][6] = 'f';
   cRoom[8][6] = 't';
   cRoom[9][6] = 't';
   cRoom[10][6] = 't';
   cRoom[11][6] = '4';
   cRoom[12][6] = 'f';
   cRoom[13][6] = 'f';
   cRoom[14][6] = 'i';
   cRoom[15][6] = 'c';
   cRoom[16][6] = 'f';

   cRoom[0][7] = 'f';
   cRoom[1][7] = '3';
   cRoom[2][7] = '2';
   cRoom[3][7] = 'f';
   cRoom[4][7] = 'f';
   cRoom[5][7] = 'f';
   cRoom[6][7] = 'f';
   cRoom[7][7] = '1';
   cRoom[8][7] = 't';
   cRoom[9][7] = 'f';
   cRoom[10][7] = 'f';
   cRoom[11][7] = 'f';
   cRoom[12][7] = 'f';
   cRoom[13][7] = 'f';
   cRoom[14][7] = 'f';
   cRoom[15][7] = 'f';
   cRoom[16][7] = 'f';

   cRoom[0][8] = 'f';
   cRoom[1][8] = '8';
   cRoom[2][8] = '3';
   cRoom[3][8] = 't';
   cRoom[4][8] = '/';
   cRoom[5][8] = 't';
   cRoom[6][8] = 't';
   cRoom[7][8] = 't';
   cRoom[8][8] = '?';
   cRoom[9][8] = 'i';
   cRoom[10][8] = 'i';
   cRoom[11][8] = 'i';
   cRoom[12][8] = 'i';
   cRoom[13][8] = 'i';
   cRoom[14][8] = 'i';
   cRoom[15][8] = '2';
   cRoom[16][8] = 'f';

   cRoom[0][9] = 'f';
   cRoom[1][9] = 'f';
   cRoom[2][9] = 'f';
   cRoom[3][9] = 'f';
   cRoom[4][9] = 'f';
   cRoom[5][9] = 'f';
   cRoom[6][9] = 'f';
   cRoom[7][9] = 'f';
   cRoom[8][9] = 'f';
   cRoom[9][9] = 'c';
   cRoom[10][9] = 'c';
   cRoom[11][9] = 'c';
   cRoom[12][9] = 'c';
   cRoom[13][9] = 'c';
   cRoom[14][9] = 'c';
   cRoom[15][9] = 'i';
   cRoom[16][9] = 'f';

   cRoom[0][10] = 'w';
   cRoom[1][10] = 'a';
   cRoom[2][10] = 'a';
   cRoom[3][10] = 'a';
   cRoom[4][10] = 'a';
   cRoom[5][10] = 'a';
   cRoom[6][10] = 'a';
   cRoom[7][10] = 'a';
   cRoom[8][10] = 'a';
   cRoom[9][10] = '1';
   cRoom[10][10] = 'i';
   cRoom[11][10] = 'i';
   cRoom[12][10] = 'i';
   cRoom[13][10] = 'i';
   cRoom[14][10] = 'i';
   cRoom[15][10] = '4';
   cRoom[16][10] = 'f';

   cRoom[0][11] = 'w';
   cRoom[1][11] = 'a';
   cRoom[2][11] = 'a';
   cRoom[3][11] = 'a';
   cRoom[4][11] = 'a';
   cRoom[5][11] = 'a';
   cRoom[6][11] = 'a';
   cRoom[7][11] = 'a';
   cRoom[8][11] = 'a';
   cRoom[9][11] = 'f';
   cRoom[10][11] = 'f';
   cRoom[11][11] = 'f';
   cRoom[12][11] = 'f';
   cRoom[13][11] = 'f';
   cRoom[14][11] = 'f';
   cRoom[15][11] = 'f';
   cRoom[16][11] = 'f';	   

   cRoom[0][12] = 'w';
   cRoom[1][12] = 'a';
   cRoom[2][12] = 'a';
   cRoom[3][12] = 'a';
   cRoom[4][12] = 'a';
   cRoom[5][12] = 'a';
   cRoom[6][12] = 'a';
   cRoom[7][12] = 'a';
   cRoom[8][12] = 'a';
   cRoom[9][12] = 'f';
   cRoom[10][12] = '1';
   cRoom[11][12] = 'i';
   cRoom[12][12] = '?';
   cRoom[13][12] = 't';
   cRoom[14][12] = 'i';
   cRoom[15][12] = '2';
   cRoom[16][12] = 'f';

   cRoom[0][13] = 'w';
   cRoom[1][13] = 't';
   cRoom[2][13] = 't';
   cRoom[3][13] = 't';
   cRoom[4][13] = 't';
   cRoom[5][13] = 't';
   cRoom[6][13] = 't';
   cRoom[7][13] = 't';
   cRoom[8][13] = 'c';
   cRoom[9][13] = 'f';
   cRoom[10][13] = 'i';
   cRoom[11][13] = 'i';
   cRoom[12][13] = 'i';
   cRoom[13][13] = 'i';
   cRoom[14][13] = 'i';
   cRoom[15][13] = 'i';
   cRoom[16][13] = 'f';

   cRoom[0][14] = 'w';
   cRoom[1][14] = 't';
   cRoom[2][14] = 'c';
   cRoom[3][14] = 't';
   cRoom[4][14] = 'P';
   cRoom[5][14] = 't';
   cRoom[6][14] = 't';
   cRoom[7][14] = 't';
   cRoom[8][14] = 'P';
   cRoom[9][14] = 'f';
   cRoom[10][14] = 'i';
   cRoom[11][14] = 'i';
   cRoom[12][14] = 'i';
   cRoom[13][14] = '3';
   cRoom[14][14] = 'i';
   cRoom[15][14] = 'i';
   cRoom[16][14] = 'f';

   cRoom[0][15] = 'w';
   cRoom[1][15] = 't';
   cRoom[2][15] = 'P';
   cRoom[3][15] = 'f';
   cRoom[4][15] = 'f';
   cRoom[5][15] = 'f';
   cRoom[6][15] = '/';
   cRoom[7][15] = 'f';
   cRoom[8][15] = 'a';
   cRoom[9][15] = 'f';
   cRoom[10][15] = 'i';
   cRoom[11][15] = 'i';
   cRoom[12][15] = 'i';
   cRoom[13][15] = 'i';
   cRoom[14][15] = 'i';
   cRoom[15][15] = 'i';
   cRoom[16][15] = 'f';

   cRoom[0][16] = 'w';
   cRoom[1][16] = 'c';
   cRoom[2][16] = '?';
   cRoom[3][16] = 'f';
   cRoom[4][16] = 't';
   cRoom[5][16] = 'P';
   cRoom[6][16] = 't';
   cRoom[7][16] = 't';
   cRoom[8][16] = 't';
   cRoom[9][16] = 'f';
   cRoom[10][16] = 't';
   cRoom[11][16] = 'i';
   cRoom[12][16] = 'i';
   cRoom[13][16] = 'i';
   cRoom[14][16] = '2';
   cRoom[15][16] = 'i';
   cRoom[16][16] = 'f';

   cRoom[0][17] = 'w';
   cRoom[1][17] = 'f';
   cRoom[2][17] = 'f';
   cRoom[3][17] = 't';
   cRoom[4][17] = 't';
   cRoom[5][17] = 'f';
   cRoom[6][17] = 'f';
   cRoom[7][17] = 'f';
   cRoom[8][17] = '?';
   cRoom[9][17] = 'f';
   cRoom[10][17] = 'i';
   cRoom[11][17] = 'i';
   cRoom[12][17] = '5';
   cRoom[13][17] = 'i';
   cRoom[14][17] = 'i';
   cRoom[15][17] = 'i';
   cRoom[16][17] = 'f';

   cRoom[0][18] = 'w';
   cRoom[1][18] = 't';
   cRoom[2][18] = '/';
   cRoom[3][18] = 't';
   cRoom[4][18] = 't';
   cRoom[5][18] = 't';
   cRoom[6][18] = 't';
   cRoom[7][18] = '/';
   cRoom[8][18] = 'B';
   cRoom[9][18] = 'f';
   cRoom[10][18] = 'i';
   cRoom[11][18] = '3';
   cRoom[12][18] = 'i';
   cRoom[13][18] = 'i';
   cRoom[14][18] = 't';
   cRoom[15][18] = '4';
   cRoom[16][18] = 'f';

   cRoom[0][19] = 'w';
   cRoom[1][19] = 'S';
   cRoom[2][19] = 'f';
   cRoom[3][19] = 'f';
   cRoom[4][19] = 'f';
   cRoom[5][19] = 'f';
   cRoom[6][19] = 'f';
   cRoom[7][19] = 'f';
   cRoom[8][19] = 'f';
   cRoom[9][19] = 'f';
   cRoom[10][19] = 'i';
   cRoom[11][19] = 'f';
   cRoom[12][19] = 'f';
   cRoom[13][19] = 'f';
   cRoom[14][19] = 'f';
   cRoom[15][19] = 'f';
   cRoom[16][19] = 'f';

   cRoom[0][20] = 'w';
   cRoom[1][20] = 'i';
   cRoom[2][20] = 'f';
   cRoom[3][20] = 'c';
   cRoom[4][20] = 't';
   cRoom[5][20] = 't';
   cRoom[6][20] = 't';
   cRoom[7][20] = '/';
   cRoom[8][20] = 't';
   cRoom[9][20] = 't';
   cRoom[10][20] = 't';
   cRoom[11][20] = 'f';
   cRoom[12][20] = '1';
   cRoom[13][20] = 'i';
   cRoom[14][20] = 'i';
   cRoom[15][20] = '2';
   cRoom[16][20] = 'f';    

   cRoom[0][21] = 'w';
   cRoom[1][21] = 'i';
   cRoom[2][21] = 'f';
   cRoom[3][21] = 'f';
   cRoom[4][21] = 'f';
   cRoom[5][21] = 'f';
   cRoom[6][21] = 'f';
   cRoom[7][21] = 'f';
   cRoom[8][21] = 't';
   cRoom[9][21] = 'f';
   cRoom[10][21] = 'f';
   cRoom[11][21] = 'f';
   cRoom[12][21] = 'i';
   cRoom[13][21] = 'f';
   cRoom[14][21] = 'f';
   cRoom[15][21] = 't';
   cRoom[16][21] = 'f';

   cRoom[0][22] = 'w';
   cRoom[1][22] = 'i';
   cRoom[2][22] = 'f';
   cRoom[3][22] = 't';
   cRoom[4][22] = 't';
   cRoom[5][22] = '/';
   cRoom[6][22] = 'f';
   cRoom[7][22] = 'c';
   cRoom[8][22] = 't';
   cRoom[9][22] = 't';
   cRoom[10][22] = 'c';
   cRoom[11][22] = 'f';
   cRoom[12][22] = 'i';
   cRoom[13][22] = 'f';
   cRoom[14][22] = '1';
   cRoom[15][22] = '%';
   cRoom[16][22] = 'f';
   
   cRoom[0][23] = 'w';
   cRoom[1][23] = 'i';
   cRoom[2][23] = 'f';
   cRoom[3][23] = 't';
   cRoom[4][23] = 'f';
   cRoom[5][23] = '9';
   cRoom[6][23] = 'f';
   cRoom[7][23] = 'f';
   cRoom[8][23] = 'f';
   cRoom[9][23] = 't';
   cRoom[10][23] = 'f';
   cRoom[11][23] = 'f';
   cRoom[12][23] = 'i';
   cRoom[13][23] = 'f';
   cRoom[14][23] = 'i';
   cRoom[15][23] = 'f';
   cRoom[16][23] = 'f';

   cRoom[0][24] = 'w';
   cRoom[1][24] = 'i';
   cRoom[2][24] = 'f';
   cRoom[3][24] = 't';
   cRoom[4][24] = 'f';
   cRoom[5][24] = 'f';
   cRoom[6][24] = 'f';
   cRoom[7][24] = 't';
   cRoom[8][24] = 't';
   cRoom[9][24] = 't';
   cRoom[10][24] = 't';
   cRoom[11][24] = 'f';
   cRoom[12][24] = 'i';
   cRoom[13][24] = 'f';
   cRoom[14][24] = '3';
   cRoom[15][24] = '*';
   cRoom[16][24] = 'f';

   cRoom[0][25] = 'w';
   cRoom[1][25] = 'i';
   cRoom[2][25] = 'f';
   cRoom[3][25] = 't';
   cRoom[4][25] = 'f';
   cRoom[5][25] = 't';
   cRoom[6][25] = 't';
   cRoom[7][25] = 't';
   cRoom[8][25] = 't';
   cRoom[9][25] = 'f';
   cRoom[10][25] = 't';
   cRoom[11][25] = 'f';
   cRoom[12][25] = 'i';
   cRoom[13][25] = 'f';
   cRoom[14][25] = 'f';
   cRoom[15][25] = 'i';
   cRoom[16][25] = 'f';

   cRoom[0][26] = 'w';
   cRoom[1][26] = 'i';
   cRoom[2][26] = 'f';
   cRoom[3][26] = 't';
   cRoom[4][26] = 'f';
   cRoom[5][26] = 't';
   cRoom[6][26] = 'f';
   cRoom[7][26] = 'f';
   cRoom[8][26] = 'f';
   cRoom[9][26] = 'f';
   cRoom[10][26] = 't';
   cRoom[11][26] = 'f';
   cRoom[12][26] = 'i';
   cRoom[13][26] = 'f';
   cRoom[14][26] = '1';
   cRoom[15][26] = '4';
   cRoom[16][26] = 'f';

   cRoom[0][27] = 'w';
   cRoom[1][27] = 'i';
   cRoom[2][27] = 'f';
   cRoom[3][27] = 't';
   cRoom[4][27] = 't';
   cRoom[5][27] = 't';
   cRoom[6][27] = 't';
   cRoom[7][27] = 't';
   cRoom[8][27] = 'c';
   cRoom[9][27] = 'f';
   cRoom[10][27] = 'B';
   cRoom[11][27] = 'f';
   cRoom[12][27] = '4';
   cRoom[13][27] = 'f';
   cRoom[14][27] = 's';
   cRoom[15][27] = 'e';
   cRoom[16][27] = 'f';

   cRoom[0][28] = 'w';
   cRoom[1][28] = 'i';
   cRoom[2][28] = 'f';
   cRoom[3][28] = 'f';
   cRoom[4][28] = 'f';
   cRoom[5][28] = 'f';
   cRoom[6][28] = 'f';
   cRoom[7][28] = '/';
   cRoom[8][28] = 'f';
   cRoom[9][28] = 'f';
   cRoom[10][28] = 'f';
   cRoom[11][28] = 'f';
   cRoom[12][28] = '^';
   cRoom[13][28] = 'f';
   cRoom[14][28] = 'f';
   cRoom[15][28] = 'f';
   cRoom[16][28] = 'f';

   cRoom[0][29] = 'w';
   cRoom[1][29] = '3';
   cRoom[2][29] = 'i';
   cRoom[3][29] = 'i';
   cRoom[4][29] = 'i';
   cRoom[5][29] = 'i';
   cRoom[6][29] = '(';
   cRoom[7][29] = 't';
   cRoom[8][29] = 'i';
   cRoom[9][29] = 'i';
   cRoom[10][29] = 'i';
   cRoom[11][29] = 'i';
   cRoom[12][29] = 't';
   cRoom[13][29] = 'i';
   cRoom[14][29] = 'i';
   cRoom[15][29] = 'p';
   cRoom[16][29] = 'w';

   cRoom[0][30] = 'w';
   cRoom[1][30] = 'w';
   cRoom[2][30] = 'w';
   cRoom[3][30] = 'w';
   cRoom[4][30] = 'w';
   cRoom[5][30] = 'w';
   cRoom[6][30] = 'w';
   cRoom[7][30] = 'w';
   cRoom[8][30] = 'w';
   cRoom[9][30] = 'w';
   cRoom[10][30] = 'w';
   cRoom[11][30] = 'w';
   cRoom[12][30] = 'w';
   cRoom[13][30] = 'w';
   cRoom[14][30] = 'w';
   cRoom[15][30] = 'w';
   cRoom[16][30] = 'w';

   return 20;
}
int RoomData21(char cRoom[99][99])
{
   iMaxX = 16;
   iMaxY = 11;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 43;

char cTemp[99][99] = {
{'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
{'a', 'p', 'i', 'c', 'i', 'u', 'i', 'c', '2', '1', 's', 'u', 'i', 'u', '2', 'a'},
{'e', 'i', '2', '3', 'i', '4', 'i', 'i', '4', '3', 'i', 'i', 'c', 'i', 'u', 'a'},
{'a', '3', 'i', 'u', 'i', 'c', '2', 'a', 'c', '2', 'i', 'u', 'i', 'u', 'i', 'a'},
{'a', 'i', 'i', '2', '1', 'i', '4', 'c', 'i', '2', 'i', 'i', 'u', 'i', 'u', 'a'},
{'a', 'a', 'i', 'u', 'i', 'u', '2', 'i', 'i', 'u', 'i', 'c', 'i', 'u', 'i', 'a'},
{'a', 'i', 'i', '2', '3', 'i', 'i', '2', 'i', 'i', 'i', 'i', 'u', 'i', 'c', 'a'},
{'a', 'u', 'i', 'u', 'i', 'a', 'i', 'c', 'i', 'c', 'i', 'u', 'i', 'u', '4', 'a'},
{'a', 'i', '3', 'i', 'i', 'i', 'i', 'i', 'i', 'i', '4', 'i', 'c', 'i', 'u', 'a'},
{'a', 'c', 'i', '3', 'i', 'c', '4', 'u', '3', 'u', 'i', 'c', 'i', 'c', 'i', 'a'},
{'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'}};
unsigned short int i, i2;

for(i=0;i<16;++i)
{
	for(i2=0;i2<11;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 15;
}

int RoomData22(char cRoom[99][99])
{
   iMaxX = 20;
   iMaxY = 17;
   iLocX = 12; 
   iLocY = 5;
   iMoves = 165;
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
   cRoom[1][1] = 'i';
   cRoom[2][1] = '5';
   cRoom[3][1] = 'i';
   cRoom[4][1] = 'i';
   cRoom[5][1] = 'i';
   cRoom[6][1] = 'i';
   cRoom[7][1] = 'i';
   cRoom[8][1] = 'i';
   cRoom[9][1] = '5';
   cRoom[10][1] = 'i';
   cRoom[11][1] = 'i';
   cRoom[12][1] = 'i';
   cRoom[13][1] = 'i';
   cRoom[14][1] = 'i';
   cRoom[15][1] = 'i';
   cRoom[16][1] = 'i';
   cRoom[17][1] = 'c';
   cRoom[18][1] = '5';
   cRoom[19][1] = 'w';

   cRoom[0][2] = 'w';
   cRoom[1][2] = 'i';
   cRoom[2][2] = 'a';
   cRoom[3][2] = '5';
   cRoom[4][2] = 'a';
   cRoom[5][2] = 'a';
   cRoom[6][2] = 'a';
   cRoom[7][2] = 'i';
   cRoom[8][2] = 'a';
   cRoom[9][2] = 'i';
   cRoom[10][2] = 'a';
   cRoom[11][2] = 'a';
   cRoom[12][2] = 'a';
   cRoom[13][2] = 'i';
   cRoom[14][2] = 'c';
   cRoom[15][2] = 'a';
   cRoom[16][2] = 'a';
   cRoom[17][2] = 'i';
   cRoom[18][2] = 'i';
   cRoom[19][2] = 'w';

   cRoom[0][3] = 'w';
   cRoom[1][3] = '5';
   cRoom[2][3] = 'a';
   cRoom[3][3] = 'a';
   cRoom[4][3] = 'a';
   cRoom[5][3] = 'a';
   cRoom[6][3] = 'a';
   cRoom[7][3] = 'i';
   cRoom[8][3] = 'a';
   cRoom[9][3] = 'i';
   cRoom[10][3] = 'a';
   cRoom[11][3] = 'a';
   cRoom[12][3] = 'a';
   cRoom[13][3] = 'i';
   cRoom[14][3] = 'i';
   cRoom[15][3] = 'a';
   cRoom[16][3] = 'a';
   cRoom[17][3] = 'i';
   cRoom[18][3] = 'i';
   cRoom[19][3] = 'w';

   cRoom[0][4] = 'w';
   cRoom[1][4] = 'i';
   cRoom[2][4] = 'c';
   cRoom[3][4] = 'i';
   cRoom[4][4] = 'i';
   cRoom[5][4] = 'i';
   cRoom[6][4] = 'i';
   cRoom[7][4] = 'i';
   cRoom[8][4] = 'i';
   cRoom[9][4] = 'i';
   cRoom[10][4] = 'i';
   cRoom[11][4] = 'i';
   cRoom[12][4] = 'i';
   cRoom[13][4] = '5';
   cRoom[14][4] = 'i';
   cRoom[15][4] = 't';
   cRoom[16][4] = 't';
   cRoom[17][4] = 'i';
   cRoom[18][4] = 'i';
   cRoom[19][4] = 'w';

   cRoom[0][5] = 'w';
   cRoom[1][5] = 'i';
   cRoom[2][5] = '5';
   cRoom[3][5] = 'i';
   cRoom[4][5] = 'i';
   cRoom[5][5] = 'i';
   cRoom[6][5] = 'i';
   cRoom[7][5] = '5';
   cRoom[8][5] = 'i';
   cRoom[9][5] = 'i';
   cRoom[10][5] = 'i';
   cRoom[11][5] = 'i';
   cRoom[12][5] = 'i';
   cRoom[13][5] = 'i';
   cRoom[14][5] = 'i';
   cRoom[15][5] = 'a';
   cRoom[16][5] = 'a';
   cRoom[17][5] = 'a';
   cRoom[18][5] = 'c';
   cRoom[19][5] = 'w';

   cRoom[0][6] = 'w';
   cRoom[1][6] = '5';
   cRoom[2][6] = 'i';
   cRoom[3][6] = 'i';
   cRoom[4][6] = '5';
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
   cRoom[15][6] = 'a';
   cRoom[16][6] = 'c';
   cRoom[17][6] = 'c';
   cRoom[18][6] = 'c';
   cRoom[19][6] = 'w';

   cRoom[0][7] = 'w';
   cRoom[1][7] = 'w';
   cRoom[2][7] = 'w';
   cRoom[3][7] = 'a';
   cRoom[4][7] = 'i';
   cRoom[5][7] = 'a';
   cRoom[6][7] = 'a';
   cRoom[7][7] = 'i';
   cRoom[8][7] = 'a';
   cRoom[9][7] = 'i';
   cRoom[10][7] = 'a';
   cRoom[11][7] = 'a';
   cRoom[12][7] = 'a';
   cRoom[13][7] = 'i';
   cRoom[14][7] = 'i';
   cRoom[15][7] = 'a';
   cRoom[16][7] = 'c';
   cRoom[17][7] = 'w';
   cRoom[18][7] = 'w';
   cRoom[19][7] = 'w';

   cRoom[0][8] = 'w';
   cRoom[1][8] = 'I';
   cRoom[2][8] = 'w';
   cRoom[3][8] = 'a';
   cRoom[4][8] = 'c';
   cRoom[5][8] = 'i';
   cRoom[6][8] = 'i';
   cRoom[7][8] = 'i';
   cRoom[8][8] = 'i';
   cRoom[9][8] = '5';
   cRoom[10][8] = 'a';
   cRoom[11][8] = 'a';
   cRoom[12][8] = 'a';
   cRoom[13][8] = 'i';
   cRoom[14][8] = 'i';
   cRoom[15][8] = 'i';
   cRoom[16][8] = 'f';
   cRoom[17][8] = 'w';
   cRoom[18][8] = 'p';
   cRoom[19][8] = 'w';

   cRoom[0][9] = 'w';
   cRoom[1][9] = 's';
   cRoom[2][9] = 'w';
   cRoom[3][9] = 'a';
   cRoom[4][9] = 'i';
   cRoom[5][9] = 'a';
   cRoom[6][9] = 'a';
   cRoom[7][9] = 'i';
   cRoom[8][9] = 'a';
   cRoom[9][9] = 'i';
   cRoom[10][9] = 'a';
   cRoom[11][9] = 'a';
   cRoom[12][9] = 'a';
   cRoom[13][9] = 'i';
   cRoom[14][9] = 'i';
   cRoom[15][9] = 'i';
   cRoom[16][9] = 'i';
   cRoom[17][9] = 'w';
   cRoom[18][9] = 't';
   cRoom[19][9] = 'w';

   cRoom[0][10] = 'w';
   cRoom[1][10] = 't';
   cRoom[2][10] = 'w';
   cRoom[3][10] = 'c';
   cRoom[4][10] = 'i';
   cRoom[5][10] = 'i';
   cRoom[6][10] = 'i';
   cRoom[7][10] = 'i';
   cRoom[8][10] = 'i';
   cRoom[9][10] = 'i';
   cRoom[10][10] = 'i';
   cRoom[11][10] = 'i';
   cRoom[12][10] = 'i';
   cRoom[13][10] = 'i';
   cRoom[14][10] = '5';
   cRoom[15][10] = 'i';
   cRoom[16][10] = '5';
   cRoom[17][10] = 'w';
   cRoom[18][10] = 't';
   cRoom[19][10] = 'w';

   cRoom[0][11] = 'w';
   cRoom[1][11] = 't';
   cRoom[2][11] = 'w';
   cRoom[3][11] = '5';
   cRoom[4][11] = 'i';
   cRoom[5][11] = 'i';
   cRoom[6][11] = 'i';
   cRoom[7][11] = '5';
   cRoom[8][11] = 'i';
   cRoom[9][11] = 'f';
   cRoom[10][11] = 'a';
   cRoom[11][11] = 'a';
   cRoom[12][11] = 'a';
   cRoom[13][11] = 'i';
   cRoom[14][11] = 'a';
   cRoom[15][11] = 'a';
   cRoom[16][11] = 'a';
   cRoom[17][11] = 'w';
   cRoom[18][11] = 't';
   cRoom[19][11] = 'w';

   cRoom[0][12] = 'w';
   cRoom[1][12] = 't';
   cRoom[2][12] = 'w';
   cRoom[3][12] = 'w';
   cRoom[4][12] = 't';
   cRoom[5][12] = 'w';
   cRoom[6][12] = 'w';
   cRoom[7][12] = 'w';
   cRoom[8][12] = 'w';
   cRoom[9][12] = 'w';
   cRoom[10][12] = 'w';
   cRoom[11][12] = 'w';
   cRoom[12][12] = 'w';
   cRoom[13][12] = 't';
   cRoom[14][12] = 'w';
   cRoom[15][12] = 'w';
   cRoom[16][12] = 'w';
   cRoom[17][12] = 'w';
   cRoom[18][12] = 't';
   cRoom[19][12] = 'w';

   cRoom[0][13] = 'w';
   cRoom[1][13] = 't';
   cRoom[2][13] = 't';
   cRoom[3][13] = 't';
   cRoom[4][13] = 't';
   cRoom[5][13] = 't';
   cRoom[6][13] = 't';
   cRoom[7][13] = 't';
   cRoom[8][13] = 't';
   cRoom[9][13] = 't';
   cRoom[10][13] = 't';
   cRoom[11][13] = 't';
   cRoom[12][13] = 't';
   cRoom[13][13] = 't';
   cRoom[14][13] = 't';
   cRoom[15][13] = 't';
   cRoom[16][13] = 't';
   cRoom[17][13] = 't';
   cRoom[18][13] = 't';
   cRoom[19][13] = 'w';

   cRoom[0][14] = 'w';
   cRoom[1][14] = '%';
   cRoom[2][14] = 'w';
   cRoom[3][14] = 'w';
   cRoom[4][14] = 'w';
   cRoom[5][14] = 'w';
   cRoom[6][14] = 'w';
   cRoom[7][14] = 'w';
   cRoom[8][14] = 'w';
   cRoom[9][14] = 'w';
   cRoom[10][14] = 'w';
   cRoom[11][14] = 'w';
   cRoom[12][14] = 'w';
   cRoom[13][14] = 'w';
   cRoom[14][14] = 'w';
   cRoom[15][14] = 'w';
   cRoom[16][14] = 'w';
   cRoom[17][14] = 'w';
   cRoom[18][14] = 'w';
   cRoom[19][14] = 'w';

   cRoom[0][15] = 'w';
   cRoom[1][15] = '%';
   cRoom[2][15] = '%';
   cRoom[3][15] = '%';
   cRoom[4][15] = '%';
   cRoom[5][15] = '%';
   cRoom[6][15] = '%';
   cRoom[7][15] = '%';
   cRoom[8][15] = '%';
   cRoom[9][15] = '%';
   cRoom[10][15] = '%';
   cRoom[11][15] = '%';
   cRoom[12][15] = '%';
   cRoom[13][15] = '%';
   cRoom[14][15] = '%';
   cRoom[15][15] = 's';
   cRoom[16][15] = 's';
   cRoom[17][15] = 's';
   cRoom[18][15] = 'e';
   cRoom[19][15] = 'w';

   cRoom[0][16] = 'w';
   cRoom[1][16] = 'w';
   cRoom[2][16] = 'w';
   cRoom[3][16] = 'w';
   cRoom[4][16] = 'w';
   cRoom[5][16] = 'w';
   cRoom[6][16] = 'w';
   cRoom[7][16] = 'w';
   cRoom[8][16] = 'w';
   cRoom[9][16] = 'w';
   cRoom[10][16] = 'w';
   cRoom[11][16] = 'w';
   cRoom[12][16] = 'w';
   cRoom[13][16] = 'w';
   cRoom[14][16] = 'w';
   cRoom[15][16] = 'w';
   cRoom[16][16] = 'w';
   cRoom[17][16] = 'w';
   cRoom[18][16] = 'w';
   cRoom[19][16] = 'w';

   return 10;
}
int RoomData23(char cRoom[99][99])
{
   iMaxX = 20;
   iMaxY = 16;
   iMoves = 60;
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
