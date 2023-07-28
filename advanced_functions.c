#include "main.h"

/**
 * print_binary - print an unsigned integer converted to binary
 *
 * @arguments: a va_list containing the unsigned int
 *
 * Return: the number of digits printed
 */
int print_binary(va_list arguments)
{
	unsigned int number = va_arg(arguments, int);

	int array[32];
	int index_array = 0;

	int length = 0;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (number > 0)
	{
		array[index_array] = number % 2;
		number = number / 2;
		index_array++;

		length++;
	}

	for (index_array = index_array - 1 ; index_array >= 0 ; index_array--)
	{
		_putchar(array[index_array] + '0');
	}

	return (length);
}
