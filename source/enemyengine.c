#include <PA9.h> // Include for PA_Lib
#include "enemyengine.h"

short int iClock = 0;

/**************************************************************************************************/

void DefaultEnemies()//sets the enemies to default
{
   short int i;
   for(i=0;i<10;++i)
   {
   	enemy[i].use = 'n';   
	}  
	
	for(i=0;i<10;++i)
   {
  		PA_SetSpriteXY(0, i+1, -32, -32);    
	}    
}

/**************************************************************************************************/

void HandleEnemies() //controls handling the enemies
{
 	short int i, iEnemy = 0;
	
	for(i=0;i<10;++i)
   {
      if(enemy[i].use == 'n') {enemy[i].x = -1; enemy[i].y = -1;}
      PA_SetSpriteXY(0, iEnemy+1, enemy[i].x*32, enemy[i].y*32);
      ++iEnemy;
      enemy[i].use = 'n'; 
	}
	MoveEnemies();
}

/**************************************************************************************************/

void MoveEnemies()
{
   ++iClock;
   if(iClock == 30)
   {
      if((enemy[1].x > 0) && (enemy[1].y > 0))
		{
		   cRoom[iLocX+enemy[1].x][iLocY+enemy[1].y] = 't';
		   cRoom[iLocX+enemy[1].x][iLocY+enemy[1].y-1] = 'z';
		}		
		   
      iClock = 0;
	}   
}
