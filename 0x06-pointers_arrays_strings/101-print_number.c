#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: character
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 10)
	{
		print_number(number / 10);
	}
	_putchar(number % 10 + '0');
}
