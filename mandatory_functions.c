#include "main.h"

/**
 * _putchar - writes a character to the standard output (file descriptor 1)
 *
 * @character: the character to be written
 *
 * Return: on success, returns the number of characters written (always 1)
 *         on error, returns -1 and sets errno appropriately
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}

/**
 * print_character - prints a single character to the standard output
 *
 * @arguments: a va_list containing the argument to be printed
 *
 * Return: the number of characters printed (always 1)
 */
int print_character(va_list arguments)
{
	char c = va_arg(arguments, int);

	return (_putchar(c));
}

/**
 * print_string - prints a string to the standard output
 *
 * @arguments: a va_list containing the argument to be printed (a char pointer)
 *
 * Return: the number of characters printed (the length of the string)
 */
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

/**
 * print_percentage - prints a '%' character to the standard output
 *
 * @arguments: a va_list
 *             (unused, provided for consistency with other functions)
 *
 * Return: the number of characters (always 1)
 */
int print_percentage(va_list arguments)
{
	/* silence the unused parameter warning */
	(void)arguments;
	_putchar('%');

	return (1);
}

int print_number(va_list arguments)
{
	long int number = va_arg(arguments, int);

	long int absolute_number = 0;
	long int temp_number = absolute_number;
	long int digit_position = 1;

	int lenght = 0;

	/* negative number processing */
	if (number < 0)
	{
		absolute_number = (number * -1);
		_putchar('-');

		lenght++;
	}
	else
	{
		absolute_number = number;
	}

	temp_number = absolute_number;

	/* find the position of the leftmost digit */
	while (temp_number > 9)
	{
		temp_number = temp_number / 10;
		digit_position = digit_position * 10;
	}

	/* print each digit from left to right */
	while (digit_position >= 1)
	{
		_putchar(((absolute_number / digit_position) % 10) + '0');
		digit_position = digit_position / 10;

		lenght++;
	}

	return (lenght);
}
