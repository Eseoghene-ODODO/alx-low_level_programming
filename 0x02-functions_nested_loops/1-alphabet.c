#include "main.h"

/**
 * main - Entry point
 *
 * Description: printing lowercase letters
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letters = 'a';

	for (; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}

