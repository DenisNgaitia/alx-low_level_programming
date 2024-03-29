#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

int _isdigit(char *s);

/**
 * main - takes two numbers as arguments and outputs the product.
 * @argc: the number of arguments including name of program.
 * @argv: this is an array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	if (argc != 3)
	{
		for (i = 0; ERR_MSG[i] != '\0'; i++)
			_putchar(ERR_MSG[i]);
		_putchar(10);
		exit(98);
	}
	if (_isdigit(argv[1]) == 0)
		printf("%s\n", argv[1]);
		
	return (0);
}

/**
 * isdigit - checks if string is a number or not
 * @s: this is the string to be checked
 * Return: 1 (true), else 0.
 */

int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < 48 || *s > 57)
			return (1);
		s++;
	}
	return (0);
}
