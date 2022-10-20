#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int c, x;

	for (c = 0; c < 10; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
