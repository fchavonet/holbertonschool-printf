#include "main.h"

int specifiers_handler(const char specifier, va_list arguments)
{
	int index_array = 0;

	format_handler array[] = {
		{'c', print_character},
		{'\0', NULL}
	};

	while (array[index_array].specifier != '\0')
	{
		if (specifier == array[index_array].specifier)
		{
			return (array[index_array].function(arguments));
		}

		index_array++;
	}

	_putchar('%');
	_putchar(specifier);

	return (2);
}
