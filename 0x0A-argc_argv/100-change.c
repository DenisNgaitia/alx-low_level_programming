#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins for change to an amount of money.
 * @argc: the number of passed arguments
 * @argv: the array of string of passed arguments.
 * Return: 0 if argc != 2, else 1
 */

int main(int argc, char *argv[])
{
	int num, k, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	num = atoi(argv[1]);

	for (k = 0; k < 5; k++)
	{
		if (num < 0)
			break;
		while (num >= coins[k])
		{
			result++;
			num -= coins[k];
		}
	}
	printf("%d\n", result);
	return (0);
}

