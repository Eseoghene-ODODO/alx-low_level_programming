#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: integer
 * Return: i, 1, and -1
 */

int factorial(int n)
{
	int i = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	i *= factorial(n - 1);
	return (i);
}
