#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints result of an operation
 * @argc: Number of arguments
 * @argv: Value of arguments
 * Return: Returns 0 (Success)
**/
int main(int argc, char *argv[])
{
	int (*opera)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opera = get_op_func(argv[2]);

	if (!opera)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opera(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
