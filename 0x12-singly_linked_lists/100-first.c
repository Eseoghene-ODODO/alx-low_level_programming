#include <stdio.h>

void mike(void) __attribute__ ((constructor));
/**
 * mike - the most beautifull name in the world.
 * Return: NOTHING
 */
void mike(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
