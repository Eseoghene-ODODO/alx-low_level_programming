#include "main.h"

/**
 * _isdigit - check the code
 * @c: character
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	return (0);
}
