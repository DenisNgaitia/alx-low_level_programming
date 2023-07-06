#include "main.h"
#define INT_SIZE (sizeof(int) * 8)

/**
 * print_binary - function prints binary form of a positive integer
 * @n: this is the number to be converted
 * Return: this is the binary representation of n
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
