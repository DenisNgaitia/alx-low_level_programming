#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name using pointer to function
 * @name: this is the string to add
 * @f: this is the pointer to function
 * Return: nothing when its successful
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

