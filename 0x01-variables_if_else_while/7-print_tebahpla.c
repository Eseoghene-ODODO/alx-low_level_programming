#include <stdio.h>
#include <stdlib.h>

/**
 * main -  Point
 *
 * Description: Loot to output z-a
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cha = 'z';

	while (cha >= 'a')
	{
		putchar(cha);
		cha--;
	}
	putchar('\n');
	return (0);
}


