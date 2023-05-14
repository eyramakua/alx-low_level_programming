#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds two positive integers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c, d, adds = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (!isdigit(argv[c][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
		adds += atoi(argv[c]);
	}
	printf("%d\n", adds);

	return (0);
}
