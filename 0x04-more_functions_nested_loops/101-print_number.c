#include "main.h"
#include <math.h>

/**
 * print_number - function that prints an integer
 * @n: character
 * Return: result (int)
 */

void print_number(int n)
{
	char x1, x2;
	int x3;
	int x4 = 0;

	if (n < 0)
	{
		_putchar('-');
		x1 = (char)('0' - (n % 10));
		n = n / -10;
	}
	else
	{
		x1 = (char)((n % 10) + '0');
		n = n / 10;
	}
	x3 = 0;
	while (n > 0)
	{
		x3 = x3 * 10 + (n % 10);
		n = n / 10;
		x4++;
	}
	while (x3 > 0)
	{
		x2 = (char)((x3 % 10) + '0');
		_putchar(x2);
		x3 = x3 / 10;
		x4--;
	}
	while (x4 != 0)
	{
		_putchar('0');
		x4--;
	}
	_putchar(x1);
}
