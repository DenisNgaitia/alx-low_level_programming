#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - this one returns the natural square root of a number
 * @n: yeah the number to calculate the square root of
 *
 * Return: this is the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - this one recurses to find the natural
 * square root of a number
 * @n: the number to calculate the sqaure root of
 * @i: the iterator
 *
 * Return: this is the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

