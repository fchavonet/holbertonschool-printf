#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char character);

int print_character(va_list arguments);
int print_string(va_list arguments);

typedef struct format_handler_structure
{
	char specifier;
	int (*function)(va_list);
} format_handler;

#endif
