#include "main.h"

int specifiers_handler(const char specifier, va_list arguments)
{
	int index_array = 0;

	format_handler array[] = {
		{'c', print_character},
		{'s', print_string},
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

int _printf(const char *format, ...)
{
	int index_format = 0;
	int total_length = 0;

	va_list arguments;

	va_start(arguments, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	while (format[index_format] != '\0')
	{
		if (format[index_format] == '%')
		{
			total_length += specifiers_handler(format[index_format + 1], arguments);
			index_format += 2;
		}
		else
		{
			total_length += _putchar(format[index_format]);
			index_format++;
		}
	}

	va_end(arguments);

	return (total_length);
}
