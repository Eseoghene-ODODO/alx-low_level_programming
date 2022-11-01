#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: string.
 * @accept: set of bytes.
 *
 * Return: s and \n
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		index = 0;
		while (accept[index])
		{
			if (*s == accept[index])
			{
				return (s);
			}
			index++;
		}
		s++;
	}
	return ('\0');
}
