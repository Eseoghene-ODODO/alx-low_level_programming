#include "main.h"

/*
 *
 * main - Entry point
 *
 * Description: calling print_alphabet function in the main function
 *
 * Return: 0
 */

void print_alphabet(char letters)
{

	for (; letters < 'z'; letters++)
	{
		_putchar(letters);
	}
}
int main(void)
{
	char letters = 'a';

	print_alphabet(letters);
	_putchar('\n');
	return (0);
}
