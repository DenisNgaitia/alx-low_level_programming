#include "main.h"

/**
 *_memcpy - This is the function that copies memory area
 *@dest: This is the memory where is stored
 *@src: This is the memory where is copied
 *@n: This is the number of bytes
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

