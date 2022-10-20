#include "main.h"

/**
 * _isdigit - check the code
 * @c: character
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	return (0);
}
