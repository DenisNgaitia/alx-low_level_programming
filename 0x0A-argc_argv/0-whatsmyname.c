#include <stdio.h>

/**
 * main - Programme that prints its name
 * @argc: this is the number of arguments passed.
 * @argv: this is the pointer to an array of pointers.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);
	return (0);
}
