#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @k: character
 *
 * Return: k % 10 if k > 0 and k < 0 and 0 if k == 0
 */

int print_last_digit(int k)
{
	if (k > 0)
	{
		return (k % 10);
	}
	else if (k < 0)
	{
		return (k % 10);
	}
	else
	{
		return (0 + '0');
	}
}
