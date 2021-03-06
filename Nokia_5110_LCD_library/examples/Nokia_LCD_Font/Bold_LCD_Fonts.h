#pragma once
// If we are not building for AVR architectures ignore PROGMEM
#if defined(__AVR__)
#include <avr/pgmspace.h>
#else
#define PROGMEM
#endif

#include <LCD_Fonts.h>

/**
 * This example uses a font originally created by the author here: 
 * https://github.com/gavinlyonsrepo/NOKIA5110_TEXT
 **/

namespace Bold_LCD_Fonts {
    const uint8_t kColumns_per_character = 7;
    const unsigned char hSpace[] = {0x00};
    const unsigned char hSpaceSize = 1;
    
    
    const unsigned char kFont_Table[][kColumns_per_character] PROGMEM = {        
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //  
	{0x5f,0x5f,0x00,0x00,0x00,0x00,0x00}, // !
	{0x07,0x07,0x00,0x07,0x07,0x00,0x00}, // "
	{0x14,0x7f,0x7f,0x14,0x7f,0x7f,0x14}, // #
	{0x6f,0x6f,0x6b,0xeb,0x6b,0x7b,0x7b}, // $
	{0x63,0x73,0x38,0x1c,0x0e,0x67,0x63}, // %
	{0x7f,0x7f,0x6b,0x63,0x68,0x78,0x78}, // &
	{0x07,0x07,0x00,0x00,0x00,0x00,0x00}, // '
	{0xff,0xff,0x80,0x00,0x00,0x00,0x00}, // (
	{0x80,0xff,0xff,0x00,0x00,0x00,0x00}, // )
	{0x36,0x08,0x7f,0x7f,0x7f,0x08,0x36}, // *
	{0x08,0x08,0x3e,0x08,0x08,0x00,0x00}, // +
	{0xe0,0xe0,0x00,0x00,0x00,0x00,0x00}, // ,
	{0x08,0x08,0x08,0x08,0x08,0x00,0x00}, // -
	{0x60,0x60,0x00,0x00,0x00,0x00,0x00}, // .
	{0x70,0x1c,0x07,0x00,0x00,0x00,0x00}, // /
	{0x7f,0x7f,0x63,0x63,0x63,0x7f,0x7f}, // 0
	{0x60,0x66,0x66,0x7f,0x7f,0x60,0x60}, // 1
	{0x7b,0x7b,0x6b,0x6b,0x6b,0x6f,0x6f}, // 2
	{0x63,0x63,0x6b,0x6b,0x6b,0x7f,0x7f}, // 3
	{0x1f,0x1f,0x18,0x18,0x18,0x7e,0x7e}, // 4
	{0x6f,0x6f,0x6b,0x6b,0x6b,0x7b,0x7b}, // 5
	{0x7f,0x7f,0x6c,0x6c,0x6c,0x7c,0x7c}, // 6
	{0x43,0x63,0x73,0x3b,0x1f,0x0f,0x07}, // 7
	{0x7f,0x7f,0x6b,0x6b,0x6b,0x7f,0x7f}, // 8
	{0x1f,0x1f,0x1b,0x1b,0x1b,0x7f,0x7f}, // 9
	{0x6c,0x6c,0x00,0x00,0x00,0x00,0x00}, // :
	{0xec,0xec,0x00,0x00,0x00,0x00,0x00}, // ;
	{0x08,0x14,0x22,0x22,0x00,0x00,0x00}, // <
	{0x14,0x14,0x14,0x14,0x14,0x00,0x00}, // =
	{0x22,0x22,0x14,0x08,0x00,0x00,0x00}, // >
	{0x03,0x03,0x5b,0x5b,0x0b,0x0f,0x0f}, // ?
	{0x7f,0x7f,0x63,0x6f,0x6b,0x6f,0x6f}, // @
	{0x7f,0x7f,0x1b,0x1b,0x1b,0x7f,0x7f}, // A
	{0x7f,0x7f,0x6b,0x6b,0x6f,0x7e,0x7c}, // B
	{0x7f,0x7f,0x63,0x63,0x63,0x63,0x63}, // C
	{0x7f,0x7f,0x63,0x63,0x67,0x7e,0x7c}, // D
	{0x7f,0x7f,0x6b,0x6b,0x6b,0x6b,0x6b}, // E
	{0x7f,0x7f,0x0b,0x0b,0x0b,0x03,0x03}, // F
	{0x7f,0x7f,0x63,0x63,0x6b,0x7b,0x7b}, // G
	{0x7f,0x7f,0x18,0x18,0x18,0x7f,0x7f}, // H
	{0x63,0x63,0x7f,0x7f,0x63,0x63,0x63}, // I
	{0x60,0x60,0x60,0x60,0x60,0x7f,0x3f}, // J
	{0x7f,0x7f,0x18,0x18,0x1e,0x7f,0x79}, // K
	{0x7f,0x7f,0x60,0x60,0x60,0x60,0x60}, // L
	{0x7f,0x7f,0x03,0x06,0x03,0x7f,0x7f}, // M
	{0x7f,0x7f,0x0e,0x1c,0x38,0x7f,0x7f}, // N
	{0x7f,0x7f,0x63,0x63,0x63,0x7f,0x7f}, // O
	{0x7f,0x7f,0x1b,0x1b,0x1b,0x1f,0x1f}, // P
	{0x7f,0x7f,0x63,0xf3,0xf3,0x7f,0x7f}, // Q
	{0x7f,0x7f,0x1b,0x3b,0x7b,0x7f,0x5f}, // R
	{0x6f,0x6f,0x6b,0x6b,0x6b,0x7b,0x7b}, // S
	{0x03,0x03,0x7f,0x7f,0x03,0x03,0x03}, // T
	{0x7f,0x7f,0x60,0x60,0x60,0x7f,0x7f}, // U
	{0x1f,0x3f,0x70,0x60,0x70,0x3f,0x1f}, // V
	{0x3f,0x7f,0x60,0x30,0x60,0x7f,0x3f}, // W
	{0x77,0x7f,0x1c,0x08,0x1c,0x7f,0x77}, // X
	{0x07,0x0f,0x7c,0x78,0x7c,0x0f,0x07}, // Y
	{0x73,0x7b,0x6b,0x6b,0x6b,0x6f,0x67}, // Z
    };

}  // namespace Nokia_LCD_Fonts
