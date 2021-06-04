//Gfx converted using Mollusk's PAGfx Converter

//This file contains all the .h, for easier inclusion in a project

#ifndef ALL_GFX_H
#define ALL_GFX_H

#ifndef PAGfx_struct
    typedef struct{
    void *Map;
    int MapSize;
    void *Tiles;
    int TileSize;
    void *Palette;
    int *Info;
} PAGfx_struct;
#endif


// Sprite files : 
extern const unsigned char enemies_Sprite[1024] __attribute__ ((aligned (4))) ;  // Pal : enemies_Pal
extern const unsigned char floor_Sprite[21504] __attribute__ ((aligned (4))) ;  // Pal : floor_Pal
extern const unsigned char items_Sprite[16384] __attribute__ ((aligned (4))) ;  // Pal : items_Pal
extern const unsigned char numbers_Sprite[10240] __attribute__ ((aligned (4))) ;  // Pal : numbers_Pal
extern const unsigned char player_Sprite[4096] __attribute__ ((aligned (4))) ;  // Pal : player_Pal

// Background files : 
extern const unsigned short about_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short credits0_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short credits1_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short load_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short pause_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short save_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short splash_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short title0_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap

extern const unsigned short title1_Bitmap[49152] __attribute__ ((aligned (4))) ;  // 16bit bitmap


// Palette files : 
extern const unsigned short enemies_Pal[3] __attribute__ ((aligned (4))) ;
extern const unsigned short floor_Pal[19] __attribute__ ((aligned (4))) ;
extern const unsigned short items_Pal[44] __attribute__ ((aligned (4))) ;
extern const unsigned short numbers_Pal[17] __attribute__ ((aligned (4))) ;
extern const unsigned short player_Pal[12] __attribute__ ((aligned (4))) ;


#endif

