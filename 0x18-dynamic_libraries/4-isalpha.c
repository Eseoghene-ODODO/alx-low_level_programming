#include "main.h"

/**
 * _isalpha - Cheecks if c is either uppercase or lowercase
 *
 * @c: A character
 *
 * Return: 1 if a is eithe uppercase or lowercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
