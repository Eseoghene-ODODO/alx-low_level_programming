#include "main.h"

/**
* _memset - Fills the first n bytes of the memory
* @s: pointer.
* @b: character.
* @n: number.
* Return: memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;
	char *memory = s, value = b;

	while (index < n)
	{
		memory[index] = value;
		index++;
	}
	return (memory);
}
