#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char character);

int print_character(va_list arguments);

#endif
