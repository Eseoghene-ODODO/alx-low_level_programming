#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: Using puchar to output 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if  (num == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
