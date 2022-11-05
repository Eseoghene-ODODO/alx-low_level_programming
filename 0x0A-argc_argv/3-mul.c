#include <stdio.h>
#include <stdlib.h>

/**
 * main - function thats outputs the string
 * @argc: integer
 * @argv: character
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
	return (0);
}

