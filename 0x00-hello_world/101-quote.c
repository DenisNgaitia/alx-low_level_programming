#include <stdio.h>
#include <unistd.h>

/**
 *main - A programme that prints a line to the standard eror
 *
 *Return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
