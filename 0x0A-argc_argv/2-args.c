#include <stdio.h>
#include <stdlib.h>

/**
 * main - programme prints the arguments passed to the prompt
 * @argc: this is the arguments counter
 * @argv: array of passed arguments including the programme
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		puts(*argv++);
	return (0);
}

