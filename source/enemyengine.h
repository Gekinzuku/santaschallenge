#include "rooms.h"

void DefaultEnemies(void);
void HandleEnemies(void);
void MoveEnemies(void);

typedef struct//enemy's struct
{
	short int x, y, Dire;
	char use;//n = none, s = snowball
} baddies;

baddies enemy[10]; //the enemy struct

