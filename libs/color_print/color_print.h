/*
 * color_print.h
 *
 *  Created on: Jul 9, 2024
 *      Author: pablo-jean
 */

#ifndef COLOR_PRINT_H_
#define COLOR_PRINT_H_

/*
 * Includes
 */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/*
 * Macros
 */

/*
 * Enumerates
 */


/*
 * Typedefs
 */
typedef const char*		print_color_t;

/*
 * Externs
 */

extern print_color_t COLOR_NONE;
extern print_color_t COLOR_BLACK;
extern print_color_t COLOR_RED;
extern print_color_t COLOR_GREEN;
extern print_color_t COLOR_YELLOW;
extern print_color_t COLOR_BLUE;
extern print_color_t COLOR_MAGENTA;
extern print_color_t COLOR_CYAN;
extern print_color_t COLOR_WHITE;
extern print_color_t COLOR_L_GRAY;
extern print_color_t COLOR_L_RED;
extern print_color_t COLOR_L_GREEN;
extern print_color_t COLOR_L_YELLOW;
extern print_color_t COLOR_L_BLUE;
extern print_color_t COLOR_L_MAGENTA;
extern print_color_t COLOR_L_CYAN;
extern print_color_t COLOR_L_WHITE;

/*
 * Publics
 */

void color_print(print_color_t Color, char* Text, ...);

#endif /* COLOR_PRINT_H_ */
