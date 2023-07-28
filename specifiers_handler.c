#include "main.h"

/**
 * specifiers_handler - find the appropriate print function for the specifier
 *
 * @specifier: the conversion specifier to find the handler for
 * @arguments: the va_list containing the arguments
 *
 * Return: the number of characters printed by the handler function (2)
 */
int specifiers_handler(const char specifier, va_list arguments)
{
	int index_array = 0;

	/**
	 * array of format_handler structures mapping specifiers
	 * to their print functions
	 */
	format_handler array[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_number},
		{'i', print_number},
		{'b', print_binary},
		{'u', print_unsigned_number},
		{'o', print_octal},
		{'\0', NULL}
	};

	while (array[index_array].specifier != '\0')
	{
		/**
		 * if the specifier matches an entry in the array,
		 * call the associated print function
		 */
		if (specifier == array[index_array].specifier)
		{
			return (array[index_array].function(arguments));
		}

		index_array++;
	}

	/**
	 * if no matching specifier found,
	 * print '%' followed by the unrecognized specifier
	 */
	_putchar('%');
	_putchar(specifier);

	return (2);
}
