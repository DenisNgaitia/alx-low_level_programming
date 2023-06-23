#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this one prints each array elem on a newl
 * @array: this is the array
 * @size: this is how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void yeah no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

