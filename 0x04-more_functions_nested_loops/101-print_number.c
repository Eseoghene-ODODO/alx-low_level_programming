#include "main.h"
#include <math.h>

/**
 * print_number - function that prints an integer
 * @n: character
 * Return: result (int)
 */

void print_number(int n)
{
	if (n > 0)
	{
		_putchar(n % 10 + '0');
	}
	else if (n == 0)
	{
		_putchar(n % 10 + '0');

	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
