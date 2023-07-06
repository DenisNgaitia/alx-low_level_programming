#include "main.h"

/**
 * set_bit - sets value of a bit at a given index
 * @n: pointer to the number whose bit is to be set
 * @index: this is the index of the bit to set
 * Return: 1 (success), else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index >= (sizeof(unsigned long int) * 8)))
		return (-1);

	*n |= 1UL << index;
	return (1);
}
