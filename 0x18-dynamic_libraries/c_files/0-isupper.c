#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * Description: checks for uppercase character.
 * @c: charater
 * Return: Always 0.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
