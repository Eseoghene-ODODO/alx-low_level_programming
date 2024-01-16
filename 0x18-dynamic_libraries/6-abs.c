#include "main.h"
#include <stdio.h>

/**
 * _abs -> Function that computes the absolute value of an integer.
 *
 * @y: character
 *
 * Return: y if y > 0, 0 if y == 0, -y if y < 0
 */

int _abs(int y)
{
	if (y > 0)
	{
		return (y);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		return (-y);
	}
}
