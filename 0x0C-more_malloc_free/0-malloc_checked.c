#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc()
 * @b: this is the number of bytes to allocate in head
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
