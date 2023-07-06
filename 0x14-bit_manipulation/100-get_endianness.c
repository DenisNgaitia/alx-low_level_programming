#include "main.h"

/**
 * get_endianness - function Checks the endianness.
 * Return: If big-endian - 0.
 * Else returns: If little-endian - 1.
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	return ((int)*endian);
}
