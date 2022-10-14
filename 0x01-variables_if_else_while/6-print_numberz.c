#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: Loop to output base ten with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Num1;

	while (Num1 < 10)
	{
		putchar(Num1 % 10 + '0');
		Num1++;
	}
	putchar('\n');
	return (0);
}
