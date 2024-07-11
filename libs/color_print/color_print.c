/*
 * color_print.c
 *
 *  Created on: Jul 9, 2024
 *      Author: pablo-jean
 */

/*
 * Includes
 */
#include "color_print.h"


/*
 * Locals
 */

print_color_t COLOR_NONE = "";
print_color_t COLOR_BLACK = "\033[1;30m";
print_color_t COLOR_RED = "\033[1;31m";
print_color_t COLOR_GREEN = "\033[1;32m";
print_color_t COLOR_YELLOW = "\033[1;33m";
print_color_t COLOR_BLUE = "\033[1;34m";
print_color_t COLOR_MAGENTA = "\033[1;35m";
print_color_t COLOR_CYAN = "\033[1;36m";
print_color_t COLOR_WHITE = "\033[1;37m";
print_color_t COLOR_L_GRAY = "\033[1;90m";
print_color_t COLOR_L_RED = "\033[1;91m";
print_color_t COLOR_L_GREEN = "\033[1;92m";
print_color_t COLOR_L_YELLOW = "\033[1;93m";
print_color_t COLOR_L_BLUE = "\033[1;94m";
print_color_t COLOR_L_MAGENTA = "\033[1;95m";
print_color_t COLOR_L_CYAN = "\033[1;96m";
print_color_t COLOR_L_WHITE = "\033[1;97m";

/*
 * Privates
 */

const char *_reset = "\033[0m";
const char *_newline = "\r\n";

/*
 * Publics
 */

void color_print(print_color_t Color, char* Text, ...){
	va_list args;

	va_start(args, Text);

	printf(Color);
	vprintf(Text, args);
	printf(_reset);
	printf(_newline);

	va_end(args);
}

