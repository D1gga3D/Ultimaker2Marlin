#ifndef ULTILCD2_MENU_DUAL_H
#define ULTILCD2_MENU_DUAL_H

#include "Configuration.h"

#if EXTRUDERS > 1
void lcd_menu_dual();
void switch_extruder(uint8_t newExtruder);
void lcd_menu_tune_tcretract();
void lcd_menu_extruderoffset();
#endif // EXTRUDERS

#endif //ULTILCD2_MENU_DUAL_H