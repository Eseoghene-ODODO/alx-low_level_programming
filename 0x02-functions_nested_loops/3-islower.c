#include "main.h"

/**
 * _islower - Function that checks for lowercase letters
 *
 * @c: a character
 *
 * Return: 1 if c is a lowercase, 0 if c is not a lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
