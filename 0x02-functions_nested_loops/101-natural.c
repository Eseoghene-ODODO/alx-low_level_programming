#include <stdio.h>

/**
 * main - list all natural numbers multiples of 3 & 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", num);
	return (0);
}
