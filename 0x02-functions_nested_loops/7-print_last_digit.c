#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: parameter to be worked on.
 * Return: n (success).
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
