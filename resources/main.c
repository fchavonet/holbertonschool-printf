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
	char character = 'A';
	char *string = "The cake is a lie!";

	_printf("%i\n", positive_number);
	_printf("%d\n\n", negative_number);

	_printf("%c\n", character);
	_printf("%s\n\n", string);

	_printf("42 is the answer to life, the universe, and everything...\n\n");

	_printf("The number 42 converted into binary is %b\n\n", positive_number);

	_printf("%%\n");

	return (0);
}
