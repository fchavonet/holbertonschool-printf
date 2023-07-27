#include "main.h"

int _putchar(char character)
{
	return (write(1, &character, 1));
}

int print_character(va_list arguments)
{
	char c = va_arg(arguments, int);

	return (_putchar(c));
}
