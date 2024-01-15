#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: string.
 * @c: character.
 *
 * Return: s + index and \n.
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] >= '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}

	return ('\0');
}
