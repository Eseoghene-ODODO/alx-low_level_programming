#include "main.h"

/**
 * print_aphabet - function to print lowercase alphabets
 */

void print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}

