#include "main.h"

/**
 * clear_bit - function Sets value of bit at a given index to 0.
 * @n: this is the pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * Return: Incase error occurs - -1 else, 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
