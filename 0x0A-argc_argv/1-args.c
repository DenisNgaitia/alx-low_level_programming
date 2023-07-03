#include <stdio.h>
#include <stdlib.h>

/**
 * main - programme prints the number of arguments passed to it.
 * @argc: this is the size of argv
 * @argv: these are the pointers to an array of characters
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

