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

/**
 * print_unsigned_number - print an unsigned number to the standard output
 *
 * @arguments: a va_list containing the unsigned number to be printed
 *
 * Return: the number of characters printed
 */
int print_unsigned_number(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);

	unsigned int temp_number = number;
	unsigned int digit_position = 1;

	int length = 0;

	if (number == 0)
	{
		_putchar('0');

		return (1);
	}

	while (temp_number > 9)
	{
		temp_number = temp_number / 10;
		digit_position = digit_position * 10;
	}

	while (digit_position >= 1)
	{
		_putchar((number / digit_position) % 10 + '0');
		digit_position = digit_position / 10;

		length++;
	}

	return (length);
}

/**
 * print_octal - print an unsigned integer converted to octal
 *
 * @arguments: a va_list containing the unsigned int
 *
 * Return: the number of digits printed
 */
int print_octal(va_list arguments)
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
		array[index_array] = number % 8;
		number = number / 8;
		index_array++;

		length++;
	}

	for (index_array = index_array - 1 ; index_array >= 0 ; index_array--)
	{
		_putchar(array[index_array] + '0');
	}

	return (length);
}
