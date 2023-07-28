#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int positive_number = 42;
	int negative_number = -42;
	unsigned int unsigned_integer = 4294967295;
	char character = 'A';
	char *string = "The cake is a lie!";

	_printf("\n%c\n", character);
	_printf("%s\n", string);
	_printf("%%\n\n");

	_printf("42 is the answer to life, the universe, and everything...\n\n");

	_printf("%d\n", positive_number);
	_printf("%i\n\n", negative_number);

	_printf("The number 42 converted into binary is %b\n\n", positive_number);

	_printf("%u\n", unsigned_integer);
	_printf("The number 42 converted into octal is %o\n\n", positive_number);

	return (0);
}
