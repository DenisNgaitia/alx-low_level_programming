#include <stdio.h>

/**
 * bmain - This is the function executed before main
 * Return: there is no return when succesful.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
