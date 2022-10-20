#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int sum = 0;
	unsigned long int first = 0;
	unsigned long int second = 1;
	int count = 0;

	while (count < 97)
	{
		sum = first + second;
		printf("%lu, ", sum);
		first = second;
		second = sum;
		count++;
	}
	sum = first + second;
	printf("%lu\n", sum);
	return (0);
}
