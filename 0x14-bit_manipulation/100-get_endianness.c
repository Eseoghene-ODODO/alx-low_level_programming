#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: *endian == 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;
	return (*endian ==1);
}
