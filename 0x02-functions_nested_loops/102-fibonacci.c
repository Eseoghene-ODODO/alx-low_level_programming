#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long int sum = 0;
	long int first = 0;
	long int second = 1;
	int count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;
		count++;
	}
	sum = first + second;
	printf("%li\n", sum);
	return (0);
}
