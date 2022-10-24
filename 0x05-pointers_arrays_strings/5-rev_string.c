#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: character
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	for (; s[i] != '\0';)
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	for (; half >= 0;)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
