#ifndef MAIN_H
#define MAIN_H

/* inclusion of essential libraries */
#include <stdarg.h>
#include <unistd.h>

/* prototype for the main printf function */
int _printf(const char *format, ...);

/* prototype for the specifiers handler function */
int specifiers_handler(const char specifier, va_list arguments);

/* prototype for the Holberton School putchar function */
int _putchar(char character);

/* prototypes for mandatory print functions */
int print_character(va_list arguments);
int print_string(va_list arguments);
int print_percentage(va_list arguments);
int print_number(va_list arguments);

/**
 * struct format_handler_structure - structure to handle format
 *                                   specifiers and corresponding functions
 *
 * @specifier: the format specifier character
 * @function: a function pointer to the corresponding data processing function
 */
typedef struct format_handler_structure
{
	char specifier;
	int (*function)(va_list);
} format_handler;

#endif
