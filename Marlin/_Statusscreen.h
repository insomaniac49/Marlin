/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/Ender-3 Pro/CrealityV427"

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'Infinite Furnace.bmp'
 */

#define STATUS_LOGO_Y 7
#define STATUS_LOGO_X 4
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B01110010,B01011101,B11001001,B01110111,B01110000,
  B00100101,B01010000,B10010101,B00100010,B01000000,
  B00100101,B01011000,B10010101,B00100010,B01100000,
  B00100101,B01010000,B10010101,B00100010,B01000000,
  B01110100,B10010001,B11010010,B01110010,B01110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00111010,B01011100,B01001001,B10001110,B11100000,
  B00100010,B01010010,B10101010,B01010000,B10000000,
  B00110010,B01011100,B10101011,B11010000,B11000000,
  B00100010,B01010010,B10101010,B01010000,B10000000,
  B00100001,B10010010,B10010010,B01001110,B11100000,
  B00000000,B00000000,B00000000,B00000000,B00000000
};


//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
