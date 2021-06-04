/***************************************************************************************************
 *
 *  Copyright 2007 by GeekyLink
 *  All Rights Reserved.
 *
 *
 *  Version    Date          Author             Log
 *  --------------------------------------------------------------------------------------
 *  0.10       10/18/07      GeekyLink          Inital version
 *  0.11       10/23/07      GeekyLink          Edited level setup
 *  0.20       10/26/07      GeekyLink          Added Scrolling
 *  0.21       10/27/07      GeekyLink          fixed minor bug and "cleaned" parts of code
 *  0.22       10/30/07      GeekyLink          fixed minor bug and coded ice
 *  0.30       11/03/07      GeekyLink          Edited code to allow for multiple levels
 *  0.31       11/18/07      GeekyLink          Added more tile usabilty
 *  0.4        11/29/07      GeekyLink          Major overhaul completed, lots of new tiles, sounds, and functions added
 *  0.41       12/06/07      GeekyLink          Added new stylus moving technique, and changed a few minor details
 **************************************************************************************************/

#include <PA9.h> // Include for PA_Lib
#include <stdlib.h>

//includes the sounds
#include "oof.h" //sound of hitting wall
#include "win.h" //sound of win
#include "pickupchip.h" //sound of picking up a chip
#include "die.h" //sound of chip dieing
#include "door.h" //sound used for door
#include "item.h" //sound used for items
#include "button.h" //sound used for button
#include "water.h" //sound used for water splash
//music
#include "music1.h" 
#include "music2.h"
#include "music3.h"
#include "music4.h"


//includes all the graphics
#include "gfx/all_gfx.c"
#include "gfx/all_gfx.h"

#include "rooms.h"//includes all the levels
#include "enemyengine.h"//the enemy engine

typedef struct//chip's struct
{
	s32 x, y; 
	s32 DesX, DesY;
	bool OnTheMove, Up;
} player;

player chip;
//chip

//the varibles
char cTile[8][6]; //holds the items for whatever is in every tile on screen
u8 iTilenum = 60;

u32 iMove; //number of moves
char cBusy = 't'; //if t the player can move
u8 iDire = 0; //0=down,1=up,2=right,3=left
bool bSwitch; //false = switch not pressed, true = pressed
u8 iMover = 0; //timer for moving with new stylus
u8 iMusic = 2; //used for song number
bool bKill = false; // used to kills music
u8 iSongClock = 0; //used for determining if song is over

//items
bool bSkates; //if chip has ice skates
bool bFireBoots; //if chip has fire boots
u8 iRedKey; //red key
u8 iGreenKey; //green key
u8 iBlueKey; //green key
u8 iYellowKey; //green key

//the functions
void SetRoom(void); //basically just sets the value for everything in the tile array
void InitRoom(void); //the first set room
u8 CheckSpot(void); //checks for running into a wall etc
void CreateAll(void); //creates all 109 tiles
void Move(void); // in charge of moving chip
void Slide(void); //slides the player
void SplashScreen(void); //in charge of the splash screen and stuff
void StylusControls(void); //used for advanced stylus coding
char TitleScreen(void); //used for the title screen of the game
void PlayGame(void); //used for running the game
void SetAll(bool); //if false it moves all the sprites off the screen, if true it puts them back in the right spots
void SaveGame(void); //saves game progress
void LoadGame(void); //loads game progress
void Music(void); //handles music
void Credits(void); //credits screen
void ArrangeTop(void); //arranges the graphics on the top screen
char PauseGame(void); //pause screen
void About(void); //About screen

/**************************************************************************************************/

//Main Function
int main(int argc, char ** argv)
{
	PA_Init();    // Initializes PA_Lib
	PA_InitVBL(); // Initializes a standard VBL
	PA_InitSound();  // Init the sound system
	CreateAll(); //creates every sprite

	char cSelect;
	
	SetAll(false); //moves all tiles to the side
	
	SplashScreen();//makes a splash screen
	while(1)
	{
		cSelect = TitleScreen();//title screen
		if(cSelect == 's') PlayGame(); //plays the game
		else if(cSelect == 'c') Credits(); //shows credits
		else if(cSelect == 'a') About(); //shows about screen
	}	
	
	return 0;
} // End of main()

/**************************************************************************************************/

void ArrangeTop()
{
	u8 Chips = iChips;
	u8 Level = iLevel + 1;
	u8 Red = iRedKey;
	u8 Blue = iBlueKey;
	u8 Green = iGreenKey;
	u8 Yellow = iYellowKey;
	u32 Moves = iMove;

	PA_SetSpriteAnim(1,29,2);
	PA_SetSpriteAnim(1,30,6);
	PA_SetSpriteAnim(1,31,9);
	
	PA_SetSpriteAnim(1,95,1);	
	PA_SetSpriteAnim(1,48,10);
	PA_SetSpriteAnim(1,49,11);

	//displays moves
	if(Moves>=1000){PA_SetSpriteAnim(1,0,1); Moves-=1000;}
	else PA_SetSpriteAnim(1,0,0);

	if(Moves>=900){PA_SetSpriteAnim(1,1,9); Moves-=900;}
	else if(Moves>=800){PA_SetSpriteAnim(1,1,8); Moves-=800;}
	else if(Moves>=700){PA_SetSpriteAnim(1,1,7); Moves-=700;}
	else if(Moves>=600){PA_SetSpriteAnim(1,1,6); Moves-=600;}
	else if(Moves>=500){PA_SetSpriteAnim(1,1,5); Moves-=500;}
	else if(Moves>=400){PA_SetSpriteAnim(1,1,4); Moves-=400;}
	else if(Moves>=300){PA_SetSpriteAnim(1,1,3); Moves-=300;}
	else if(Moves>=200){PA_SetSpriteAnim(1,1,2); Moves-=200;}
	else if(Moves>=100){PA_SetSpriteAnim(1,1,1); Moves-=100;}
	else PA_SetSpriteAnim(1,1,0);

	if(Moves>=90){PA_SetSpriteAnim(1,2,9); Moves-=90;}
	else if(Moves>=80){PA_SetSpriteAnim(1,2,8); Moves-=80;}
	else if(Moves>=70){PA_SetSpriteAnim(1,2,7); Moves-=70;}
	else if(Moves>=60){PA_SetSpriteAnim(1,2,6); Moves-=60;}
	else if(Moves>=50){PA_SetSpriteAnim(1,2,5); Moves-=50;}
	else if(Moves>=40){PA_SetSpriteAnim(1,2,4); Moves-=40;}
	else if(Moves>=30){PA_SetSpriteAnim(1,2,3); Moves-=30;}
	else if(Moves>=20){PA_SetSpriteAnim(1,2,2); Moves-=20;}
	else if(Moves>=10){PA_SetSpriteAnim(1,2,1); Moves-=10;}
	else PA_SetSpriteAnim(1,2,0);
	PA_SetSpriteAnim(1,3,Moves);

	//displays chips
	if(Chips>=90){PA_SetSpriteAnim(1,4,9); Chips-=90;}
	else if(Chips>=80){PA_SetSpriteAnim(1,4,8); Chips-=80;}
	else if(Chips>=70){PA_SetSpriteAnim(1,4,7); Chips-=70;}
	else if(Chips>=60){PA_SetSpriteAnim(1,4,6); Chips-=60;}
	else if(Chips>=50){PA_SetSpriteAnim(1,4,5); Chips-=50;}
	else if(Chips>=40){PA_SetSpriteAnim(1,4,4); Chips-=40;}
	else if(Chips>=30){PA_SetSpriteAnim(1,4,3); Chips-=30;}
	else if(Chips>=20){PA_SetSpriteAnim(1,4,2); Chips-=20;}
	else if(Chips>=10){PA_SetSpriteAnim(1,4,1); Chips-=10;}
	else PA_SetSpriteAnim(1,4,0);
	PA_SetSpriteAnim(1,5,Chips);

	//displays Level number
	if(Level>=20){PA_SetSpriteAnim(1,6,2); Level-=20;}
	else if(Level>=10){PA_SetSpriteAnim(1,6,1); Level-=10;}
	else PA_SetSpriteAnim(1,6,0);
	PA_SetSpriteAnim(1,7,Level);

	//displays red keys
	if(Red>=10){PA_SetSpriteAnim(1,8,1); Red-=10;}
	else PA_SetSpriteAnim(1,8,0);
	PA_SetSpriteAnim(1,9,Red);

	//displays blue keys
	if(Blue>=10){PA_SetSpriteAnim(1,10,1); Blue-=10;}
	else PA_SetSpriteAnim(1,10,0);
	PA_SetSpriteAnim(1,11,Blue);

	//displays green keys
	if(Green>=10){PA_SetSpriteAnim(1,12,1); Green-=10;}
	else PA_SetSpriteAnim(1,12,0);
	PA_SetSpriteAnim(1,13,Green);

	//displays yellow keys
	if(Yellow>=10){PA_SetSpriteAnim(1,14,1); Yellow-=10;}
	else PA_SetSpriteAnim(1,14,0);
	PA_SetSpriteAnim(1,15,Yellow);

	if(bSkates==true)PA_SetSpriteAnim(1,52,4);else PA_SetSpriteAnim(1,52,0);
	if(bFireBoots==true)PA_SetSpriteAnim(1,58,7);else PA_SetSpriteAnim(1,58,0);
}

/**************************************************************************************************/

void Music()
{
	bool bChange = false;

	if(bKill==true){
		PA_SetModVolume(0);
		if(Pad.Newpress.L) {bKill=false; bChange = true; PA_SetModVolume(20); ++iMusic;}
		if(Pad.Newpress.R){bKill=false; bChange = true; PA_SetModVolume(20); --iMusic;}
	} 
	
	if(bKill == false)
	{
		if(Pad.Newpress.R){++iMusic; bChange=true;};
		if(Pad.Newpress.L){--iMusic; bChange=true;};

		if((Pad.Held.L) && (Pad.Held.R))bKill=true;
		
		if(iMusic==4){
			if((PA_SoundChannelIsBusy(1))&&(PA_SoundChannelIsBusy(2))&&(!PA_SoundChannelIsBusy(3))&&(!PA_SoundChannelIsBusy(4))&&(!PA_SoundChannelIsBusy(5))&&(!PA_SoundChannelIsBusy(6))&&(!PA_SoundChannelIsBusy(7))&&(!PA_SoundChannelIsBusy(8)))
			++iSongClock;
			else iSongClock=0;
		}else{
		if((!PA_SoundChannelIsBusy(1))&&(!PA_SoundChannelIsBusy(2))&&(!PA_SoundChannelIsBusy(3))&&(!PA_SoundChannelIsBusy(4))&&(!PA_SoundChannelIsBusy(5))&&(!PA_SoundChannelIsBusy(6))&&(!PA_SoundChannelIsBusy(7))&&(!PA_SoundChannelIsBusy(8)))
		++iSongClock;
		else iSongClock=0;}
	
		if(iSongClock==180){ bChange=true; ++iMusic;}
	
		if(iMusic<2)iMusic=4;
		else if(iMusic>4)iMusic=2;
	
		if(bChange==true) {
			if(iMusic==2)	{PA_PlayMod(music2); }
			else if(iMusic==3)	{PA_PlayMod(music3);}
			else if(iMusic==4)	{PA_PlayMod(music4);}
			bChange=false;
		}
	}//if bKill == false
}

void SaveGame(void) //saves game progress
{
  	PA_ResetBgSys();
	s8 i;
   //Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();
	} 
	SetAll(false); //moves all tiles to the side
	PA_Init16bitBg(0, 3);
	PA_Load16bitBitmap(0, save_Bitmap);	
	PA_Init16bitBg(1, 3);
	PA_Load16bitBitmap(1, title1_Bitmap);
	
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();		   
	}	
  	
  	char cOption = 'a'; // a = nothing, y = yes, n = no
  	while(cOption == 'a') 
  	{
		if(Pad.Newpress.A)cOption = 'y';
		if(Pad.Newpress.B)cOption = 'n';
  	   if(Stylus.Newpress){
  	   	if((Stylus.X >= 52) && (Stylus.X <= 96) && (Stylus.Y >= 96) && (Stylus.Y <= 120))cOption = 'y';
  	   	if((Stylus.X >= 144) && (Stylus.X <= 185) && (Stylus.Y >= 96) && (Stylus.Y <= 120))cOption = 'n';
  		}   	
  		PA_WaitForVBL();
		Music();
	}  	
  	char cText[5]; //dummy :D
  	
  	if(cOption == 'y')
  	{
   	fatInitDefault(); //Initialise fat library	
		FILE* testWrite = fopen ("/SantasChallenge.sav", "wb"); //wb = create/truncate & write 
		sprintf(cText, "%d \n", iLevel);
		fwrite(cText, 5, 1, testWrite);
		fclose(testWrite);
	}		
	
	//Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();
	} 
	
	PA_ResetBgSys();
	PA_InitText(1, 0); //used for text on the top screen
	
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();		   
	}	
	
	SetAll(true);//puts all the tiles where they belong	
}

/**************************************************************************************************/

void LoadGame(void) //loads game progress
{
 	PA_ResetBgSys();
	s8 i;
   //Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();
	} 
	SetAll(false); //moves all tiles to the side
	PA_Init16bitBg(0, 3);
	PA_Load16bitBitmap(0, load_Bitmap);	
	PA_Init16bitBg(1, 3);
	PA_Load16bitBitmap(1, title1_Bitmap);
	
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();		   
	}	
  	
  	char cOption = 'a'; // a = nothing, y = yes, n = no
  	while(cOption == 'a') 
  	{
		if(Pad.Newpress.A)cOption = 'y';
		if(Pad.Newpress.B)cOption = 'n';
  	   if(Stylus.Newpress){
  	   	if((Stylus.X >= 52) && (Stylus.X <= 96) && (Stylus.Y >= 96) && (Stylus.Y <= 120))cOption = 'y';
  	   	if((Stylus.X >= 144) && (Stylus.X <= 185) && (Stylus.Y >= 96) && (Stylus.Y <= 120))cOption = 'n';
  		}   	
		Music();
  		PA_WaitForVBL();
	}  	
  	
	iLevel=0;

  	if(cOption == 'y')
  	{
	   	fatInitDefault(); //Initialise fat library
		FILE* testRead = fopen ("/SantasChallenge.sav", "rb"); //rb = read
		char filetext[10]; 
		fread(filetext, 2, 1, testRead);
		fclose(testRead);
		filetext[2] = 0;
	
		iLevel=atoi(filetext);  
	}
	
	//Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();
	} 
	
	PA_ResetBgSys();
	PA_InitText(1, 0); //used for text on the top screen
	
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();		   
	}	
	
	SetAll(true);//puts all the tiles where they belong
}

/**************************************************************************************************/

void PlayGame()
{
	LoadGame();
	PA_PlayMod(music2); //plays music
 	//sets all varibles used for moving the player to default
	chip.x=0;
	chip.y=0;
	chip.DesX = 0;
	chip.DesY = 0;
	chip.OnTheMove = false;
	chip.Up = true;
	
	PA_InitText(1, 0); //used for text on the top screen 

	SetAll(true);//puts all the tiles where they belong

	InitRoom(); //initilize the room  
	
	char cThing = 'g';
	// Main Game Loop
	while(cThing!='t')
	{

		//restarts
		if(Pad.Newpress.Select)InitRoom();

		if(cBusy == 't')
		{
			Move();//sees if it should move chip
			//pause system	
			if(Pad.Newpress.Start)cThing = PauseGame();
		}
		else Slide(); //slides chip on ice
		
     	SetRoom();//displays the tiles
		PA_SetSpriteXY(0, 0, chip.x, chip.y);//sets Chip's posistion
      
	      if(iMove+1 <= 0){
     	 InitRoom(); //restarts the room
		 PA_PlaySimpleSound(10, die);}
     
		Music();
      
     	PA_SetSpriteAnim(0,0,iDire);

		PA_WaitForVBL(); //waits a frame
	}  
	SetAll(false); //moves all tiles to the side
	PA_PlayMod(music1); 
	PA_SetModVolume(20);
}

/**************************************************************************************************/

char PauseGame()
{
	s32 TempX = chip.x;
	s32 TempY = chip.y;
 	PA_ResetBgSys();
	s8 i;
   //Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();
	} 
	SetAll(false); //moves all tiles to the side
	PA_Init16bitBg(0, 3);
	PA_Load16bitBitmap(0, pause_Bitmap);	
	PA_Init16bitBg(1, 3);
	PA_Load16bitBitmap(1, title1_Bitmap);
	
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();		   
	}	
  	
  	char cOption = 'a'; // a = nothing, t = title screen, s = save, r = return
  	while(cOption == 'a') 
  	{
		if(Pad.Newpress.Start)cOption = 'r';//return
  	   if(Stylus.Newpress){
  	   	if((Stylus.X >= 46) && (Stylus.X <= 86) && (Stylus.Y >= 99) && (Stylus.Y <= 122))cOption = 't';//title screen
  	   	if((Stylus.X >= 151) && (Stylus.X <= 191) && (Stylus.Y >= 98) && (Stylus.Y <= 121))cOption = 's';//save screen
  	   	if((Stylus.X >= 99) && (Stylus.X <= 139) && (Stylus.Y >= 73) && (Stylus.Y <= 96))cOption = 'r';//return
  		}   	
		Music();
  		PA_WaitForVBL();
	}  	
	
	//Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();
	} 
	
	PA_ResetBgSys(); //clears stuff while dark so you don't see anything nasty

	if(cOption=='s')SaveGame();

	chip.x = TempX;
	chip.y = TempY;
	
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		Music();
		PA_WaitForVBL();		   
	}	

	SetAll(true);//puts all the tiles where they belong

	return cOption;
}

/**************************************************************************************************/

void SetAll(bool bSet)
{
   u8 i, i2, iTilenum;
   	if(bSet == false){
     	for(i=0;i<118;++i)
      	{
         		chip.x = -32; chip.y = -32;
         		PA_SetSpriteXY(0, i, -32, -32);
			PA_SetSpriteXY(1, i, -32, -32);
   		}   
	} else {
	   
	PA_SetSpriteXY(0, 0, chip.x, chip.y);//sets Chip's posistion
	
 	  iTilenum = 10;
		for (i=0;i<8;i++)   //creates floor tiles
		{
			for(i2=0;i2<6;i2++)
			{
				++iTilenum;
				PA_SetSpriteXY(0, iTilenum, i*32, i2*32); //floor tiles
			}
		}
		
		iTilenum=59;
	
		for (i=0;i<8;i++)   //creates floor tiles
		{
			for(i2=0;i2<6;i2++)
			{
				++iTilenum;
				PA_SetSpriteXY(0, iTilenum, i*32, i2*32); //floor tiles
			}
		}
		//top screen
		iTilenum=20;
		for (i=0;i<8;i++)   //creates item tiles
		{
			for(i2=0;i2<6;i2++)
			{
				++iTilenum;
				PA_SetSpriteXY(1, iTilenum, i*32, i2*32); //floor tiles
				if((i==0)||(i==7)||(i2==0)||(i2==5))
				{
					PA_SetSpriteAnim(1,iTilenum,1);
				}
			}
		}
	
		for (i=0;i<8;i++)   //creates floor tiles
		{
			for(i2=0;i2<6;i2++)
			{
				++iTilenum;
				PA_SetSpriteXY(1, iTilenum, i*32, i2*32); //floor tiles
			}
		}
		//number tiles
		PA_SetSpriteXY(1, 0, 32, 32); 
		PA_SetSpriteXY(1, 1, 64, 32); 
		PA_SetSpriteXY(1, 2, 96, 32); 
		PA_SetSpriteXY(1, 3, 128, 32); 

		//presents
		PA_SetSpriteXY(1, 4, 64, 64);
		PA_SetSpriteXY(1, 5, 96, 64);
	
		//level
		PA_SetSpriteXY(1, 6, 160, 64);
		PA_SetSpriteXY(1, 7, 192, 64);
	
		//red key
		PA_SetSpriteXY(1, 8, 64, 96);
		PA_SetSpriteXY(1, 9, 96, 96);

		//blue key
		PA_SetSpriteXY(1, 10, 160, 96);
		PA_SetSpriteXY(1, 11, 192, 96);

		//green key
		PA_SetSpriteXY(1, 12, 64, 128);
		PA_SetSpriteXY(1, 13, 96, 128);

		//yellow key
		PA_SetSpriteXY(1, 14, 160, 128);
		PA_SetSpriteXY(1, 15, 192, 128);
		ArrangeTop();
	}	
}

/**************************************************************************************************/

void StylusControls() //new styul controls
{
   chip.DesX = Stylus.X;
   chip.DesY = Stylus.Y;
   
   if((chip.DesX>=0) && (chip.DesX<=32))chip.DesX=0;
   else if((chip.DesX>=32) && (chip.DesX<=64))chip.DesX=1;
   else if((chip.DesX>=64) && (chip.DesX<=96))chip.DesX=2;
   else if((chip.DesX>=96) && (chip.DesX<=128))chip.DesX=3;
   else if((chip.DesX>=128) && (chip.DesX<=160))chip.DesX=4;
   else if((chip.DesX>=160) && (chip.DesX<=192))chip.DesX=5;
   else if((chip.DesX>=192) && (chip.DesX<=224))chip.DesX=6;
   else if((chip.DesX>=224) && (chip.DesX<=256))chip.DesX=7;
   
   if((chip.DesY>=0) && (chip.DesY<=32))chip.DesY=0;
   else if((chip.DesY>=32) && (chip.DesY<=64))chip.DesY=1;
   else if((chip.DesY>=64) && (chip.DesY<=96))chip.DesY=2;
   else if((chip.DesY>=96) && (chip.DesY<=128))chip.DesY=3;
   else if((chip.DesY>=128) && (chip.DesY<=160))chip.DesY=4;
   else if((chip.DesY>=160) && (chip.DesY<=192))chip.DesY=5;
   
   chip.OnTheMove = true;
}

/**************************************************************************************************/

void Move()
{
  	u16 i = chip.x*0.03125;
	u16 i2 = chip.y*0.03125;
		
	//anything that causes a Game Over goes here
   if(cTile[i][i2] == 'f') //chip stepped on fire
	{
	   if(bFireBoots == false){
	   InitRoom(); //restarts the room
	   PA_PlaySimpleSound(10, die);
		return;}   
	}		
	else if(cTile[i][i2] == 'a') //chip fell in water
	{
	   InitRoom(); //restarts the room
  		PA_PlaySimpleSound(10, die);
	   PA_PlaySimpleSound(11, water);
  		return;
	}
	else if(cTile[i][i2] == 'e')//if you reach the finish
	{
		PA_PlaySimpleSound(9, win);//sound of winning	
		++iLevel; //goes to the next level
		SaveGame(); // saves game
		InitRoom();
		return;
	}
	
	if((Pad.Newpress.L) || (Pad.Newpress.R))chip.OnTheMove = false;
	
	//new moving style
	if(chip.OnTheMove == true)
	{
	   ++iMover;
	   if(iMover==15)
	   {
			if(chip.x-chip.DesX*32 > 0){
				if(chip.y-chip.DesY*32 > 0){
					if(chip.x-chip.DesX*32 <= chip.y-chip.DesY*32) chip.Up=true; else chip.Up=false;
				}else{
					if(chip.x-chip.DesX*32 <= chip.DesY*32-chip.y) chip.Up=true; else chip.Up=false;
				}								
			}else{
			   if(chip.y-chip.DesY*32 > 0){
					if(chip.DesX*32-chip.x <= chip.y-chip.DesY*32) chip.Up=true; else chip.Up=false;
				}else{
					if(chip.x-chip.DesX*32 >= chip.y-chip.DesY*32) chip.Up=true; else chip.Up=false;
				}
			}			
			
	      if(chip.DesY*32==chip.y)chip.Up=false;
	      if(chip.DesX*32==chip.x)chip.Up=true;
	      
			if(chip.Up == false)
			{	
	   		if(chip.DesX*32 < chip.x)
	   		{
	   			chip.x -= 32;
					iDire = 3;
					chip.x += CheckSpot() * 32;
				}   
				else if(chip.DesX*32 > chip.x)
	   		{
					chip.x += 32;
					iDire = 2;
					chip.x -= CheckSpot() * 32;
				}  
			}
			else
			{			
				if(chip.DesY*32 < chip.y)
	   		{
					chip.y -= 32;
					iDire = 1;
					chip.y += CheckSpot() * 32;
				}   
				else if(chip.DesY*32 > chip.y)
	   		{
					chip.y += 32;
					iDire = 0;
					chip.y -= CheckSpot() * 32;
				}
			}	
			if((chip.DesX*32==chip.x) && (chip.DesY*32==chip.y)) chip.OnTheMove = false;
		}		
	}	
		
	//anything that causes a Game Over goes here as well
  	 if(cTile[i][i2] == 'f') //chip stepped on fire
	{
	   if(bFireBoots == false){
	   InitRoom(); //restarts the room
	   PA_PlaySimpleSound(10, die);
		return;}
	}		
	else if(cTile[i][i2] == 'a') //chip fell in water
	{
	   InitRoom(); //restarts the room
  		PA_PlaySimpleSound(10, die);
	   PA_PlaySimpleSound(11, water);
  		return;
	}
	else if(cTile[i][i2] == 'e')//if you reach the finish
	{
		PA_PlaySimpleSound(9, win);//sound of winning	
		++iLevel; //goes to the next level
		SaveGame(); // saves game
		InitRoom();
		return;		
	}	

	if(iMover==15)  iMover=0;
	else{		
	if(Stylus.Newpress)  //allows you to move chip with the stylus too
   	{
      	StylusControls();
   	if((Stylus.Y < chip.y) && (Stylus.Y > chip.y - 32) && (Stylus.X > chip.x) && (Stylus.X < chip.x + 32))
      {
			chip.y -= 32;
			iDire = 1;
			chip.y += CheckSpot() * 32;
			chip.OnTheMove = false;
		 }
		else if((Stylus.Y > chip.y + 32) && (Stylus.Y < chip.y + 64) && (Stylus.X > chip.x) && (Stylus.X < chip.x + 32))
		{
			chip.y += 32;
			iDire = 0;
			chip.y -= CheckSpot() * 32;
			chip.OnTheMove = false;
		}
		else if((Stylus.X < chip.x) && (Stylus.X > chip.x - 32) && (Stylus.Y > chip.y) && (Stylus.Y < chip.y + 32))
		{
			chip.x -= 32;
			iDire = 3;
			chip.x += CheckSpot() * 32;
			chip.OnTheMove = false;
		}
		else if((Stylus.X > chip.x + 32) && (Stylus.X < chip.x + 64) && (Stylus.Y > chip.y) && (Stylus.Y < chip.y + 32))
		{
			chip.x += 32;
			iDire = 2;
			chip.x -= CheckSpot() * 32;
			chip.OnTheMove = false;
		}
	} //end of moving chip with the touchscreen
   else {   
    	//moving and changing the animation of chip
		if((Pad.Newpress.Up) || (Pad.Newpress.X))
		{
			chip.y -= 32;
			iDire = 1;
			chip.y += CheckSpot() * 32;
			chip.OnTheMove = false;
		}
		else if((Pad.Newpress.Down) || (Pad.Newpress.B))
		{
			chip.y += 32;
			iDire = 0;
			chip.y -= CheckSpot() * 32;
			chip.OnTheMove = false;
		}
		else if((Pad.Newpress.Left) || (Pad.Newpress.Y))
		{
			chip.x -= 32;
			iDire = 3;
			chip.x += CheckSpot() * 32;
			chip.OnTheMove = false;
		}
		else if((Pad.Newpress.Right) || (Pad.Newpress.A))
		{
			chip.x += 32;
			iDire = 2;
			chip.x -= CheckSpot() * 32;
			chip.OnTheMove = false;
		}//end of moving chip with buttons
	}	//end of moving anything	
	}
}

/**************************************************************************************************/

//sets all the room data
void SetRoom()
{
	u32 i, i2;
	u32 iRoomX, iRoomY;
	
	//checks for scrolling the Y cordinates
	if((chip.y > 96) && (iLocY < iMaxY - 6))
	{
		++iLocY;
		chip.y = 96;
		--chip.DesY;
	}	
	else if((chip.y < 64) && (iLocY > 0))
	{
		--iLocY;
		chip.y = 64;
		++chip.DesY;
	}		
	
	//checks for scrolling the X cordinates
	if((chip.x > 128) && (iLocX < iMaxX - 8))
	{
		++iLocX;
		chip.x = 128;
		--chip.DesX;
	}	
	else if((chip.x < 96) && (iLocX > 0))
	{
		--iLocX;
		chip.x = 96;
		++chip.DesX;
	}	
	
	//sets everything
	for (i=0;i<8;i++)
	{
		for(i2=0;i2<6;i2++)
		{
			iRoomX = iLocX + i;
		   iRoomY = iLocY + i2;
			cTile[i][i2] = cRoom[iRoomX][iRoomY];
		}
	}

	//displays tiles
	for (i=0;i<8;i++)
	{
		for(i2=0;i2<6;i2++)
		{
			if(cTile[i][i2] == 'w')//sets walls
			{
				//sets walls
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 1); 
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
			else if(cTile[i][i2] == 's') //sets sockets
			{
				//sets sockets
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 3);
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
			else if(cTile[i][i2] == 'c') //sets chips
			{
				//sets chips
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 2); 
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
			else if(cTile[i][i2] == 'e')//sets end of level
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 1); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == 'f')//sets fire
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 2); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == 'i')//sets ice
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 3); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
   			else if((cTile[i][i2] == 't') || (cTile[i][i2] == 'T') || (cTile[i][i2] == 'p') || (cTile[i][i2] == 'u')) //sets tiles
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0);
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == 'W') //sets fake walls
			{
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 1);
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
			else if(cTile[i][i2] == 'a') //sets water
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 4); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == 'I') //sets ice skates
			{
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 4); 
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
			else if(cTile[i][i2] == '1') //sets ice skates
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 5); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '2') //sets ice skates
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 6); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '3') //sets ice skates
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 7); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '4') //sets ice skates
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 8); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == 'B') //sets buttons
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 5); //erases anything above the tile
			}
			else if(cTile[i][i2] == 'P') //sets pushable blocks
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 8); 
			}
			else if(cTile[i][i2] == '?') //sets switch wall default up
			{
				if(bSwitch == false)PA_SetSpriteAnim(0, 60 + 6*i + i2, 9); 
			   else if(bSwitch == true)PA_SetSpriteAnim(0, 60 + 6*i + i2, 10); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '/') //sets switch wall default down
			{
			   if(bSwitch == false)PA_SetSpriteAnim(0, 60 + 6*i + i2, 10); 
			   else if(bSwitch == true)PA_SetSpriteAnim(0, 60 + 6*i + i2, 9); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '5') //sets red keys
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 6);
			}
			else if(cTile[i][i2] == '6') //sets green keys
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 9);
			}
			else if(cTile[i][i2] == '8') //sets blue keys
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 10);
			}
			else if(cTile[i][i2] == '9') //sets yellow keys
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 11);
			}
			else if(cTile[i][i2] == '%') //sets red locks
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 11); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '^') //sets green locks
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 12); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '*') //sets blue locks
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 13); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == '(') //sets yellow locks
			{
			   PA_SetSpriteAnim(0, 60 + 6*i + i2, 14); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); //erases anything above the tile
			}
			else if(cTile[i][i2] == 'F') //sets Fire boots
			{
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 7);  //erases anything above the tile
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
			else if(cTile[i][i2] == 'd') //sets dirt
			{
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 15); 
			}
			else if(cTile[i][i2] == 'A') //sets flippers
			{
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 14); 
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
			else if(cTile[i][i2] == 'S') //sets spy
			{
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 12);
			}
			else if(cTile[i][i2] == 'z') //sets snowball
			{
			   enemy[1].use = 's';
			   enemy[1].x = i;
			   enemy[1].y = i2;
		   	//PA_SetSpriteXY(0, 1, i*32, i2*32);
				PA_SetSpriteAnim(0, 11 + 6*i + i2, 0); 
				PA_SetSpriteAnim(0, 60 + 6*i + i2, 0); 
			}
		}
	}
	ArrangeTop();
}

/**************************************************************************************************/

void InitRoom() //basically just sets chips starting spot
{
   DefaultEnemies(); //sets the enemies to default settings
   LevelSelect(); //Selects level
   
   u32 i, i2;
   u32 iRoomX;
	u32 iRoomY;

	iMove = iMoves; //sets the rooms number of moves
	iDire = 0;

	//sets chip
	for (i=0;i<8;i++)
	{
		for(i2=0;i2<6;i2++)
		{
		   iRoomX = iLocX + i;
			iRoomY = iLocY + i2;
			cTile[i][i2] = cRoom[iRoomX][iRoomY];
    	   if(cTile[i][i2] == 'p') //puts the player's starting position
         {
		      chip.x = i*32;
		   	chip.y = i2*32;
		   	PA_SetSpriteAnim(0, 0, 0); //sets it so he is facing down
			cRoom[iRoomX][iRoomY] = 't';
	   	}   
		}
	}	
	
	chip.DesX = 0;
	chip.DesY = 0;
	chip.OnTheMove = false;
	
	//sets items to false
	bSkates = false;
	bFireBoots = false;
	bSwitch = false; //sets switch to false
	iRedKey = 0;
	iGreenKey = 0;
	iYellowKey = 0;
	iBlueKey = 0;

	ArrangeTop();
}

/**************************************************************************************************/

u8 CheckSpot() //checks to see what is in the spot that chip is stepping in
{
	u16 i = chip.x*0.03125;
	u16 i2 = chip.y*0.03125;
	u32 iRoomX = iLocX + i;
	u32 iRoomY = iLocY + i2;
	
	--iMove; //subtracts one move
	ArrangeTop(); //arranges top
	
	if(cTile[i][i2] == 'w')//if you hit a wall
	{
		PA_PlaySimpleSound(15, oof);//sound of chip running into wall
		chip.OnTheMove = false;
	 	return 1;
	}
	else if(cTile[i][i2] == 'c')//if you walk over a chip
	{
		PA_PlaySimpleSound(9, pickupchip);//sound of a chip
		cRoom[iRoomX][iRoomY] = 't'; //removes the chip and subtracts one from the total
		if(iChips != 0)--iChips; //makes sure it doesn't go below 0
		return 0;
	}
	else if(cTile[i][i2] == 's')//if you walk over a socket
	{
	   if(iChips == 0)//if all the chips are gone
		{   
			cRoom[iRoomX][iRoomY] = 't'; //removes socket
			PA_PlaySimpleSound(14, door); //sound of door
			return 0;
		}		
		else //if there are chips left
		{
		   PA_PlaySimpleSound(15, oof);//plays sound and doesn't let chip in
		   chip.OnTheMove = false;
		   return 1;
		}		   
	}
	else if((cTile[i][i2] == 'i') || (cTile[i][i2] == '1') || (cTile[i][i2] == '2') || (cTile[i][i2] == '3') || (cTile[i][i2] == '4'))//if you walk over ice
	{
	   if(bSkates == false){ cBusy = 'i'; chip.OnTheMove = false;}
	   return 0;
		   
	}	
	else if(cTile[i][i2] == 'T')//Fake tile that turns into a wall
	{
	   cRoom[iRoomX][iRoomY] = 'w';
	   PA_PlaySimpleSound(15, oof);//plays sound
	   chip.OnTheMove = false;
	   return 1;
	}
	else if(cTile[i][i2] == 'W')//Fake wall that turns into a tile
	{
	   cRoom[iRoomX][iRoomY] = 't';
	   return 0;
	}
	else if(cTile[i][i2] == 'I')//ice skates
	{
	   cRoom[iRoomX][iRoomY] = 't';
	   bSkates = true;
	   PA_PlaySimpleSound(4, item); //sound of picking up item
	   return 0;
	}
	else if(cTile[i][i2] == 'B')//button
	{
	   if(bSwitch == false)bSwitch = true; //tells the computer the button was pressed
	   else bSwitch = false;
	   PA_PlaySimpleSound(9, button); //sound of hitting button
	   return 0;
	}
	else if(cTile[i][i2] == '?')//switch wall defualt up
	{
	   if(bSwitch == false){PA_PlaySimpleSound(15, oof); chip.OnTheMove = false; return 1;}
	   else return 0;
	}
	else if(cTile[i][i2] == '/')//switch wall defualt down
	{
	   if(bSwitch == false)return 0; //tells the computer the button was pressed
	   else{PA_PlaySimpleSound(15, oof); chip.OnTheMove = false; return 1;}
	}
	else if(cTile[i][i2] == '5')//red key
	{
	   PA_PlaySimpleSound(4, item); //sound of picking up item
		++iRedKey;
		cRoom[iRoomX][iRoomY] = 't';
	   return 0;
	}
	else if(cTile[i][i2] == '6')//Green key
	{
	   PA_PlaySimpleSound(4, item); //sound of picking up item
		++iGreenKey;
		cRoom[iRoomX][iRoomY] = 't';
	   return 0;
	}
	else if(cTile[i][i2] == '8')//Blue key
	{
	   PA_PlaySimpleSound(4, item); //sound of picking up item
		++iBlueKey;
		cRoom[iRoomX][iRoomY] = 't';
	   return 0;
	}
	else if(cTile[i][i2] == '9')//Yellow key
	{
	   PA_PlaySimpleSound(4, item); //sound of picking up item
		++iYellowKey;
		cRoom[iRoomX][iRoomY] = 't';
	   return 0;
	}
	else if(cTile[i][i2] == 'F')//Fire boots
	{
		bFireBoots = true;
		cRoom[iRoomX][iRoomY] = 't';
		PA_PlaySimpleSound(4, item); //sound of picking up item
	   	return 0;
	}
	else if(cTile[i][i2] == '%')//red key door
	{
		if(iRedKey > 0){
			cRoom[iRoomX][iRoomY] = 't';
			--iRedKey;
			PA_PlaySimpleSound(14, door); //sound of door
	   	return 0;}
	   else{
	   	PA_PlaySimpleSound(15, oof); //sound of walking into wall
	   	chip.OnTheMove = false;
			return 1;}
	}
	else if(cTile[i][i2] == '^')//green key door
	{
		if(iGreenKey > 0){
			cRoom[iRoomX][iRoomY] = 't';
			--iGreenKey;
			PA_PlaySimpleSound(14, door); //sound of door
	   	return 0;}
	   else{
	   	PA_PlaySimpleSound(15, oof); //sound of walking into wall
	   	chip.OnTheMove = false;
			return 1;}
	}
	else if(cTile[i][i2] == '*')//blue key door
	{
		if(iBlueKey > 0){
			cRoom[iRoomX][iRoomY] = 't';
			--iBlueKey;
			PA_PlaySimpleSound(14, door); //sound of door
	   	return 0;}
	   else{
	   	PA_PlaySimpleSound(15, oof); //sound of walking into wall
	   	chip.OnTheMove = false;
			return 1;}
	}
	else if(cTile[i][i2] == '(')//yellow key door
	{
		if(iYellowKey > 0){
			cRoom[iRoomX][iRoomY] = 't';
			--iYellowKey;
			PA_PlaySimpleSound(12, door); //sound of door
	   	return 0;}
	   else{
	   	PA_PlaySimpleSound(15, oof); //sound of walking into wall
	   	chip.OnTheMove = false;
			return 1;}
	}
	else if(cTile[i][i2] == 'u')
	{
	   cRoom[iRoomX][iRoomY] = 'w';
	   return 0;
	}	
	else if(cTile[i][i2] == 'd')
	{
	   cRoom[iRoomX][iRoomY] = 't';
	   return 0;
	}	
	else if(cTile[i][i2] == 'S')
	{
		bSkates = false;
		bFireBoots = false;
		return 0;
	}	
	else if(cTile[i][i2] == 'P')//Pushable block
	{//allows you to push the thing onto water or tiles
	   if((iDire==2) && ((cRoom[iRoomX+1][iRoomY] == 't') || (cRoom[iRoomX+1][iRoomY] == 'a'))){
			cRoom[iRoomX][iRoomY] = 't';
			if(cRoom[iRoomX+1][iRoomY] == 'a'){PA_PlaySimpleSound(10, water); cRoom[iRoomX+1][iRoomY] = 'd';}
			else cRoom[iRoomX+1][iRoomY] = 'P';
			return 0;
		}	
	   else if((iDire==3) && ((cRoom[iRoomX-1][iRoomY] == 't') || (cRoom[iRoomX-1][iRoomY] == 'a'))){
			cRoom[iRoomX][iRoomY] = 't';
			if(cRoom[iRoomX-1][iRoomY] == 'a'){PA_PlaySimpleSound(10, water); cRoom[iRoomX-1][iRoomY] = 'd';}
			else cRoom[iRoomX-1][iRoomY] = 'P';
			return 0;
		}	
	   else if((iDire==1) && ((cRoom[iRoomX][iRoomY-1] == 't') || (cRoom[iRoomX][iRoomY-1] == 'a'))){
			cRoom[iRoomX][iRoomY] = 't';
			if(cRoom[iRoomX][iRoomY-1] == 'a'){PA_PlaySimpleSound(10, water); cRoom[iRoomX][iRoomY-1] = 'd';}
			else cRoom[iRoomX][iRoomY-1] = 'P';
			return 0;
		}
		else if((iDire==0) && ((cRoom[iRoomX][iRoomY+1] == 't') || (cRoom[iRoomX][iRoomY+1] == 'a'))){
			cRoom[iRoomX][iRoomY] = 't';
			if(cRoom[iRoomX][iRoomY+1] == 'a'){PA_PlaySimpleSound(10, water); cRoom[iRoomX][iRoomY+1] = 'd';}
			else cRoom[iRoomX][iRoomY+1] = 'P';
			return 0;
		}
		else{
		PA_PlaySimpleSound(15, oof); //sound of walking into wall
		chip.OnTheMove = false;
		return 1;}
	}
	else return 0;//else
}

/**************************************************************************************************/

//I put this damn thing down here cause it's so big X_X
void Slide()//used for sliding on ice
{
   u16 i = (chip.x*0.03125);
	u16 i2 = (chip.y*0.03125);
	
	u8 iRoomX = iLocX + i;
	u8 iRoomY = iLocY + i2;
	
	if(cTile[i][i2] == 't') //default tile
	{
	   cBusy = 't';
	}
	else if(cTile[i][i2] == 'S')//spy
	{
		bSkates = false;
		bFireBoots = false;
		cBusy = 't';
	}
	else if(cTile[i][i2] == 'f') //chip slide on fire
	{
		cBusy = 't';
	}	
	else if(cTile[i][i2] == 'u') //chip slide on fire
	{
		cBusy = 't';
	   cRoom[iRoomX][iRoomY] = 'w';
	}	
	else if(cTile[i][i2] == 'p') //player starting point
	{
	   cBusy = 't';
	}	
	else if(cTile[i][i2] == 'I')//Ice skates
	{
	   PA_PlaySimpleSound(14, item); //sound of picking up item
	   cRoom[iRoomX][iRoomY] = 't';
	   bSkates = true;
	   cBusy = 't';
	}
	else if(cTile[i][i2] == 'W') //fake wall
	{
  	   cRoom[iRoomX][iRoomY] = 't';
	   cBusy = 't';
	}	
	else if(cTile[i][i2] == 'e')//if you reach the finish
	{
		PA_PlaySimpleSound(9, win);//sound of winning
		cBusy = 't';	
	}
	else if(cTile[i][i2] == 'c')//if you walk over a chip
	{
		PA_PlaySimpleSound(15, pickupchip);//sound of a chip
		cRoom[iRoomX][iRoomY] = 't'; //removes the chip and subtracts one from the total
		if(iChips != 0)--iChips; //makes sure it doesn't go below 0
		cBusy = 't';
	}
	else if(cTile[i][i2] == 'F') //pick up fire boots
	{
	   PA_PlaySimpleSound(14, item); //sound of picking up item
  	   cRoom[iRoomX][iRoomY] = 't';
  	   bFireBoots = true;
	   cBusy = 't';
	}	
	else if(cTile[i][i2] == '?')//if you hit a switch wall default up
	{
		if(bSwitch == true)cBusy = 't';
	}
	else if(cTile[i][i2] == '/')//if you hit a switch wall default down
	{
	   if(bSwitch == false)cBusy = 't';
	}
	else if(cTile[i][i2] == '5')//red key
	{
	   PA_PlaySimpleSound(14, item); //sound of picking up item
		++iRedKey;
		cRoom[iRoomX][iRoomY] = 't';
		cBusy = 't';
	}	
	else if(cTile[i][i2] == '6')//green key
	{
	   PA_PlaySimpleSound(14, item); //sound of picking up item
		++iGreenKey;
		cRoom[iRoomX][iRoomY] = 't';
		cBusy = 't';
	}	
	else if(cTile[i][i2] == '8')//blue key
	{
	   PA_PlaySimpleSound(14, item); //sound of picking up item
		++iBlueKey;
		cRoom[iRoomX][iRoomY] = 't';
		cBusy = 't';
	}	
	else if(cTile[i][i2] == '9')//yellow key
	{
	   PA_PlaySimpleSound(14, item); //sound of picking up item
		++iYellowKey;
		cRoom[iRoomX][iRoomY] = 't';
		cBusy = 't';
	}	
	else if(cTile[i][i2] == 'B')//button
	{
	   if(bSwitch == false)bSwitch = true; //tells the computer the button was pressed
	   else bSwitch = false;
	   PA_PlaySimpleSound(13, button); //sound of hitting button
	   cBusy = 't';
	}
	else	//slides chip
	{	   
	   //changes direction if chip hits a ice turner
	   if(iDire==0){
	   	if(cTile[i][i2] == '3')//if you hit a bottom left ice
			{
				iDire = 2; //make chip go right
			}
			else if(cTile[i][i2] == '4')//if you hit a bottom right ice
			{
				iDire = 3; //make chip go left
			}
		}	
		else if(iDire==1){
	   	if(cTile[i][i2] == '2')//if you hit a bottom left ice
			{ 
				iDire = 3; //make chip go left
			}
			else if(cTile[i][i2] == '1')//if you hit a top left ice
			{
				iDire = 2; //make chip go right
			}
		}		
		else if(iDire==2){
	   	if(cTile[i][i2] == '2')//if you hit a top right ice
			{
				iDire = 0; //make chip go down
			}
			else if(cTile[i][i2] == '4')//if you hit a bottom right ice
			{
				iDire = 1; //make chip go up
			}
		}	
		else if(iDire==3){
		   if(cTile[i][i2] == '1')//if you hit a top left ice
			{
				iDire = 0; //make chip go down
			}
			else if(cTile[i][i2] == '3')//if you hit a bottom left ice
			{
				iDire = 1; //make chip go up
			}
		}	//end of ice turning
		
		//used for reversing direction on walls and sockets
		if(iDire==0){
			if(cTile[i][i2+1] == 'w')//if you hit a wall
			{
				iDire=1;
			}
			else if(cTile[i][i2+1] == 'P')//if you hit a wall
			{
				iDire=1;
			}
			else if(cTile[i][i2+1] == '?')//if you hit a switch wall default up
			{
				if(bSwitch == false)iDire=1;
			}
			else if(cTile[i][i2+1] == '/')//if you hit a switch wall default down
			{
			   if(bSwitch == true)iDire=1;
			}
			else if(cTile[i][i2+1] == '%')//if you hit a red key slot
			{
			   	if(iRedKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY+1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iRedKey;
				}	
				else
				{
			   	iDire=1;
				}	
			}
			else if(cTile[i][i2+1] == '^')//if you hit a green key slot
			{
			   	if(iGreenKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY+1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iGreenKey;
				}	
				else
				{
			   	iDire=1;
				}	
			}
			else if(cTile[i][i2+1] == '*')//if you hit a blue key slot
			{
			   	if(iBlueKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY+1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iBlueKey;
				}	
				else
				{
			   	iDire=1;
				}	
			}
			else if(cTile[i][i2+1] == '(')//if you hit a yellow key slot
			{
		   		if(iYellowKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY+1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iYellowKey;
				}	
				else
				{
			   	iDire=1;
				}	
			}
			else if(cTile[i][i2+1] == 's')//if you hit a socket
			{
	   			if(iChips == 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY+1] = 't'; //removes socket
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				}	
				else
				{
			   	iDire=1;
				}			   
			}
		}	
		else if(iDire==1){
			if(cTile[i][i2-1] == 'w')//if you hit a wall
			{
				iDire=0;
			}
			else if(cTile[i][i2-1] == 'P')//if you hit a wall
			{
				iDire=0;
			}
			else if(cTile[i][i2-1] == '?')//if you hit a switch wall default up
			{
				if(bSwitch == false)iDire=0;
			}
			else if(cTile[i][i2-1] == '/')//if you hit a switch wall default down
			{
			   if(bSwitch == true)iDire=0;
			}
			else if(cTile[i][i2-1] == '%')//if you hit a red key slot
			{
			   	if(iRedKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY-1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iRedKey;
				}	
				else
				{
			   	iDire=0;
				}	
			}
			else if(cTile[i][i2-1] == '^')//if you hit a green key slot
			{
			   	if(iGreenKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY-1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iGreenKey;
				}	
				else
				{
			   	iDire=0;
				}	
			}
			else if(cTile[i][i2-1] == '*')//if you hit a blue key slot
			{
			   	if(iBlueKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY-1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iBlueKey;
				}	
				else
				{
			   	iDire=0;
				}	
			}
			else if(cTile[i][i2-1] == '(')//if you hit a yellow key slot
			{
		   		if(iYellowKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY-1] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iYellowKey;
				}	
				else
				{
			   	iDire=0;
				}	
			}
			else if(cTile[i][i2-1] == 's')//if you hit a socket
			{
	   		if(iChips == 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX][iRoomY-1] = 't'; //removes socket
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				}	
				else
				{
			   	iDire=0;
				}			   
			}
		}		
		else if(iDire==2){
			if(cTile[i+1][i2] == 'w')//if you hit a wall
			{
				iDire=3;
			}
			else if(cTile[i+1][i2] == 'P')//if you hit a wall
			{
				iDire=3;
			}
			else if(cTile[i+1][i2] == '?')//if you hit a switch wall default up
			{
				if(bSwitch == false)iDire=3;
			}
			else if(cTile[i+1][i2] == '/')//if you hit a switch wall default down
			{
			   if(bSwitch == true)iDire=3;
			}
			else if(cTile[i+1][i2] == '%')//if you hit a red key slot
			{
			   	if(iRedKey > 0)//if you have a red key
				{   
		   		cRoom[iRoomX+1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iRedKey;
				}	
				else
				{
			   	iDire=3;
				}	
			}
			else if(cTile[i+1][i2] == '^')//if you hit a green key slot
			{
			   	if(iGreenKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX+1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iGreenKey;
				}	
				else
				{
			   	iDire=3;
				}	
			}
			else if(cTile[i+1][i2] == '*')//if you hit a blue key slot
			{
			   	if(iBlueKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX+1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iBlueKey;
				}	
				else
				{
			   	iDire=3;
				}	
			}
			else if(cTile[i+1][i2] == '(')//if you hit a yellow key slot
			{
		   		if(iYellowKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX+1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iYellowKey;
				}	
				else
				{
			   	iDire=3;
				}	
			}
			else if(cTile[i+1][i2] == 's')//if you hit a socket
			{
	   			if(iChips == 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX+1][iRoomY] = 't'; //removes socket
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				}	
				else
				{
			   	iDire=3;
				}			   
			}
		}	
		else if(iDire==3){
	   	if(cTile[i-1][i2] == 'w')//if you hit a wall
			{
				iDire=2;
			}
			else if(cTile[i-1][i2] == 'P')//if you hit a wall
			{
				iDire=2;
			}
			else if(cTile[i-1][i2] == '?')//if you hit a switch wall default up
			{
				if(bSwitch == false)iDire=2;
			}
			else if(cTile[i-1][i2] == '/')//if you hit a switch wall default down
			{
			   if(bSwitch == true)iDire=2;
			}
			else if(cTile[i-1][i2] == '%')//if you hit a red key slot
			{
			   	if(iRedKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX-1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iRedKey;
				}	
				else
				{
			   	iDire=2;
				}	
			}
			else if(cTile[i-1][i2] == '^')//if you hit a green key slot
			{
			   	if(iGreenKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX-1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iGreenKey;
				}	
				else
				{
			   	iDire=2;
				}	
			}
			else if(cTile[i-1][i2] == '*')//if you hit a blue key slot
			{
			   	if(iBlueKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX-1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iBlueKey;
				}	
				else
				{
			   	iDire=2;
				}	
			}
			else if(cTile[i-1][i2] == '(')//if you hit a yellow key slot
			{
		   		if(iYellowKey > 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX-1][iRoomY] = 't'; //removes lock
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				--iYellowKey;
				}	
				else
				{
			   	iDire=2;
				}	
			}
			else if(cTile[i-1][i2] == 's')//if you hit a socket
			{
	   		if(iChips == 0)//if all the chips are gone
				{   
		   		cRoom[iRoomX-1][iRoomY] = 't'; //removes socket
		   		PA_PlaySimpleSound(12, door); //sound of door
		   		cBusy = 't';
				}	
				else
				{
			   	iDire=2;
				}			   
			}
		}	//end of wall/socket
		
		 //changes direction if chip hits a ice turner
		 //it has to run twice in case that you turned right into a wall
	   if(iDire==0){
	   	if(cTile[i][i2] == '3')//if you hit a bottom left ice
			{
				iDire = 2; //make chip go right
			}
			else if(cTile[i][i2] == '4')//if you hit a bottom right ice
			{
				iDire = 3; //make chip go left
			}
		}	
		else if(iDire==1){
	   	if(cTile[i][i2] == '2')//if you hit a bottom left ice
			{ 
				iDire = 3; //make chip go left
			}
			else if(cTile[i][i2] == '1')//if you hit a top left ice
			{
				iDire = 2; //make chip go right
			}
		}		
		else if(iDire==2){
	   	if(cTile[i][i2] == '2')//if you hit a top right ice
			{
				iDire = 0; //make chip go down
			}
			else if(cTile[i][i2] == '4')//if you hit a bottom right ice
			{
				iDire = 1; //make chip go up
			}
		}	
		else if(iDire==3){
		   if(cTile[i][i2] == '1')//if you hit a top left ice
			{
				iDire = 0; //make chip go down
			}
			else if(cTile[i][i2] == '3')//if you hit a bottom left ice
			{
				iDire = 1; //make chip go up
			}
		}	//end of ice turning
		
		//actually slides chip
   	if(iDire==0){
      	for(i=0;i<8;++i)
   		{
   			chip.y += 4;
			if(Pad.Newpress.Select){
				InitRoom(); 
				cBusy='t';
				return;
			}
			Music();
   			PA_WaitForVBL();
			}}  
   	if(iDire==1){
      	for(i=0;i<8;++i)
   		{
   			chip.y -= 4;
			if(Pad.Newpress.Select){
				InitRoom(); 
				cBusy='t';
				return;
			}
			Music();
   			PA_WaitForVBL();
			}}  
   	if(iDire==2){
      	for(i=0;i<8;++i)
   		{
   			chip.x += 4;
			if(Pad.Newpress.Select){
				InitRoom(); 
				cBusy='t';
				return;
			}
			Music();
   			PA_WaitForVBL();
			}}  
   	if(iDire==3){
      	for(i=0;i<8;++i)
   		{
   			chip.x -= 4;
			if(Pad.Newpress.Select){
				InitRoom(); 
				cBusy='t';
				return;
			}
			Music();
   			PA_WaitForVBL();
			}}  
	}	//end of sliding	
	
	i = chip.x*0.03125;
	
	if(cTile[i][i2] == 'f') //chip stepped on fire
	{
	   if(bFireBoots == false){
		InitRoom(); //restarts the room
		PA_PlaySimpleSound(11, die);}
		cBusy = 't';
	}	
	else if(cTile[i][i2] == 'a') //chip fell in water
	{
	   InitRoom(); //restarts the room
	   PA_PlaySimpleSound(11, die);
	   PA_PlaySimpleSound(10, water);
  		cBusy = 't';
	}
	else if(cTile[i][i2] == 'e')//if you reach the finish
	{
		PA_PlaySimpleSound(9, win);//sound of winning	
		cBusy = 't';
		++iLevel; //goes to the next level
		SaveGame(); // saves game
		InitRoom();
	}
	
} //end of void Slide()

/**************************************************************************************************/

void CreateAll() //creats all the sprites ahead of time
{
	u32 i,i2;
	
	//Palettes
	PA_LoadSpritePal(0, 0,(void*)player_Pal); //chip's palette
	PA_LoadSpritePal(0, 1,(void*)floor_Pal); //floor tile's palette
	PA_LoadSpritePal(0, 2,(void*)items_Pal); //items and wall's palette
	PA_LoadSpritePal(0, 3,(void*)enemies_Pal); //enemies' palette
	//top screen
	PA_LoadSpritePal(1, 1,(void*)floor_Pal); //floor tile's palette
	PA_LoadSpritePal(1, 2,(void*)items_Pal); //items and wall's palette
	PA_LoadSpritePal(1, 3,(void*)numbers_Pal); //number palette

	PA_CreateSprite(0, 0,(void*)player_Sprite, OBJ_SIZE_32X32,1, 0, 0, 0); //chip's tile
	
	for(i=1;i<11;i++) //creates enemies
	{
		PA_CreateSprite(0, i,(void*)enemies_Sprite, OBJ_SIZE_32X32,1, 3, 0, 0); //enemy tiles
	}
	
   iTilenum = 10;
	for (i=0;i<8;i++)   //creates items tiles
	{
		for(i2=0;i2<6;i2++)
		{
			++iTilenum;
			PA_CreateSprite(0, iTilenum,(void*)items_Sprite, OBJ_SIZE_32X32,1, 2, i*32, i2*32); //floor tiles
		}
	}
	
	iTilenum=59;

	for (i=0;i<8;i++)   //creates floor tiles
	{
		for(i2=0;i2<6;i2++)
		{
			++iTilenum;
			PA_CreateSprite(0, iTilenum,(void*)floor_Sprite, OBJ_SIZE_32X32,1, 1, i*32, i2*32); //floor tiles
		}
	}

	//top screen

	iTilenum=20;

	for (i=0;i<8;i++)   //creates item tiles
	{
		for(i2=0;i2<6;i2++)
		{
			++iTilenum;
			PA_CreateSprite(1, iTilenum,(void*)items_Sprite, OBJ_SIZE_32X32,1, 2, i*32, i2*32); //items tiles
		}
	}

	for (i=0;i<8;i++)   //creates floor tiles
	{
		for(i2=0;i2<6;i2++)
		{
			++iTilenum;
			PA_CreateSprite(1, iTilenum,(void*)floor_Sprite, OBJ_SIZE_32X32,1, 1, i*32, i2*32); //floor tiles
		}
	}
	
	for(i=0;i<16;++i)PA_CreateSprite(1, i,(void*)numbers_Sprite, OBJ_SIZE_32X32,1, 3, 64, 64); //numbers

}

/**************************************************************************************************/

void SplashScreen()//used the splash screen code from palib
{
	PA_SetBrightness(0, -31); // all black
	PA_SetBrightness(1, -31); // all black	
	PA_Init16bitBg(0, 3);
	PA_Load16bitBitmap(0, splash_Bitmap);	
	PA_Init16bitBg(1, 3);
	PA_Load16bitBitmap(1, splash_Bitmap);	
	
	s8 i;
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}   

	s16 time = 180; //180 frames = 3 seconds
	while(time && (!Pad.Newpress.Anykey) && (!Stylus.Newpress)){ //Display until time over or keys pressed
		time--; //time goes by
		PA_WaitForVBL();
	}		
	
	//Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}  	

	PA_ResetBgSys();
	PA_SetBrightness(0, 0); //normal
	PA_SetBrightness(1, 0); //normal
	PA_PlayMod(music1); 
	PA_SetModVolume(20);
}

/**************************************************************************************************/

char TitleScreen()//title screen, return is for returning which mode the game will use
{

   	//displays the menu
  	PA_SetBrightness(0, -31); // all black
	PA_SetBrightness(1, -31); // all black	
	PA_Init16bitBg(0, 3);
	PA_Load16bitBitmap(0, title0_Bitmap);	
	PA_Init16bitBg(1, 3);
	PA_Load16bitBitmap(1, title1_Bitmap);
	
	s8 i;
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}	
	
	char cSelect = 'm'; //m = main menu, s = start, a = about, c = credits, l = learn
	
	//title screen loop, so the game waits for the user's instructions
	while(cSelect == 'm')
	{
		if(Pad.Newpress.Start)cSelect = 's';
	   	if(Stylus.Newpress){
	      	//if the start button is pressed
		 	if((Stylus.X >= 100) && (Stylus.X <= 141) && (Stylus.Y >= 108) && (Stylus.Y <= 132))cSelect = 's';
			//if the credits button is pressed
		   	if((Stylus.X >= 180) && (Stylus.X <= 221) && (Stylus.Y >= 55) && (Stylus.Y <= 78))cSelect = 'c';
			//if the about button is pressed
			if((Stylus.X >= 24) && (Stylus.X <= 64) && (Stylus.Y >= 56) && (Stylus.Y <= 79))cSelect = 'a';
		}
		PA_WaitForVBL();	   
	}	
	
	//Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();
	}  	

	PA_ResetBgSys();
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}	
	
	return cSelect;//returns c select value so the game knows which mode to use
}

void Credits()
{
	//displays the menu
  	PA_SetBrightness(0, -31); // all black
	PA_SetBrightness(1, -31); // all black	
	PA_Init16bitBg(0, 3);
	PA_Load16bitBitmap(0, credits0_Bitmap);	
	PA_Init16bitBg(1, 3);
	PA_Load16bitBitmap(1, credits1_Bitmap);
	
	s8 i;
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}	
	
	char cSelect = 'c'; //c = credits, b = back
	
	while(cSelect == 'c')
	{
		if(Pad.Newpress.Anykey)cSelect='b';
	   if(Stylus.Newpress){
	      //if the back button is pressed
		   if((Stylus.X >= 110) && (Stylus.X <= 151) && (Stylus.Y >= 126) && (Stylus.Y <= 151))cSelect = 'b';
		}
		PA_WaitForVBL();	   
	}	
	
	//Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();
	}  	

	PA_ResetBgSys();
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}	
}

void About()
{
	//displays the menu
  	PA_SetBrightness(0, -31); // all black
	PA_SetBrightness(1, -31); // all black	
	PA_Init16bitBg(0, 3);
	PA_Load16bitBitmap(0, about_Bitmap);	
	PA_Init16bitBg(1, 3);
	PA_Load16bitBitmap(1, title1_Bitmap);
	
	s8 i;
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}	
	
	char cSelect = 'c'; //c = credits, b = back
	
	while(cSelect == 'c')
	{
	   	if((Pad.Newpress.Anykey) || (Stylus.Newpress))cSelect = 'b';
		PA_WaitForVBL();	   
	}	
	
	//Transition to black
	for(i = 0; i > -32; i--){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();
	}  	

	PA_ResetBgSys();
	//Transition to normal visible background
	for(i = -31; i <= 0; i++){
		PA_SetBrightness(0, i); 
		PA_SetBrightness(1, i); 
		PA_WaitForVBL();		   
	}	
}
