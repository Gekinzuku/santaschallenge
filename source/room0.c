#include "rooms.h"

int RoomData0(char cRoom[99][99])
{
   iMaxX = 15;
   iMaxY = 11;
   iLocX = 0; 
   iLocY = 3;
   iMoves = 140;

char cTemp[99][99] = { 
{'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'},
{'w','8','f','6','a','t','a','c','a','8','a','c','a','f','w'},
{'w','i','c','a','t','a','P','a','t','a','t','a','P','c','w'},
{'w','i','a','P','a','P','a','P','a','P','a','t','a','a','w'},
{'w','i','P','a','P','a','P','a','%','a','P','a','w','^','w'},
{'w','p','P','t','a','a','a','8','a','P','a','a','w','s','e'},
{'w','i','t','a','P','a','P','a','%','a','t','a','w','^','w'},
{'w','i','a','t','a','P','a','P','a','P','a','t','a','a','w'},
{'w','i','c','a','t','a','P','a','P','a','P','a','8','c','w'},
{'w','a','3','6','a','t','a','P','a','P','a','t','i','f','w'},
{'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'}};

unsigned short int i, i2;

for(i=0;i<15;++i)
{
	for(i2=0;i2<11;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 6;
}
