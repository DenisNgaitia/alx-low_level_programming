#include "main.h"

/**
 * binary_to_uint - function converts binary to unsigned int.
 * @b: A pointer to a strinf 0 and 1 chars
 * Return: this is the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		num <<= 1;
		num += *b++ - '0';
	}

	return (num);
}

