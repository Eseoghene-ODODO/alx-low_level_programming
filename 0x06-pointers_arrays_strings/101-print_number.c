#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: character
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
