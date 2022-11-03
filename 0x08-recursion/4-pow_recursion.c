#include "main.h"

/**
 * _pow_recursion - function that returns x ^ y.
 * @x: integer
 * @y: integer
 * Return: -1, 1 and  i
 *
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	i *=  _pow_recursion(x, y - 1);
	return (i);
}
