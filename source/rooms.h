//includes all of the rooms
#include "room0.h"
#include "room1.h"
#include "room2.h"
#include "room3.h"
#include "room4.h"
#include "room5.h"
#include "room6.h"
#include "room7.h"


void LevelSelect(void);

char cRoom[99][99];
short int iMaxX, iMaxY; //used to know the max size of the room
short int iLocX, iLocY; //used to keep the current location of the screen in the room
short int iChips;
short int iLevel; //used to know what number level it is
short int iMoves; //how many moves can be used to beat the level

