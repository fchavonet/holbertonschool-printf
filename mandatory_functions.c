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

int print_string(va_list arguments)
{
	char *string = va_arg(arguments, char *);
	char *null = "(null)";
	int length = 0;

	if (string == NULL)
	{
		/* print "(null)" and return the number of characters printed (6) */
		return (write(1, null, 6));
	}

	while (*string != '\0')
	{
		_putchar(*string);
		string++;

		length++;
	}

	return (length);
}
