#include "main.h"
#include <stdio.h>

/**
 * main - programme prints the sum of positive integers
 * @argc: this is the number of passed arguments
 * @argv: this is the the array of passed arguments
 * Return: 0 if int, else 1.
 */

int main(int argc, char *argv[])
{
	int result = 0, i, k, num;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
			if (argv[i][k] < 48 || argv[i][k] > 57)
			{
				puts("Error");
				return (1);
			}

		num = _atoi(argv[i]);
		if (num >= 0)
			result += num;
	}
	printf("%d\n", result);
	return (0);
}

/**
 * _atoi - function coverts string to integer
 * @s: this is the string to manipulate
 * Return: integer if string contains int, else 0
 */

int _atoi(char *s)
{
	int i, digit, FLAG = 0, n = 0, len = 0, d = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len && !FLAG; i++)
	{
		if (s[i] == '-')
			d++;
		digit = s[i] - 48;

		if (s[i] >= 48 && s[i] <= 57)
		{
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			FLAG = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			FLAG = 0;
		}
	}
	if (!FLAG)
		return (0);
	return (n);
}
