#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *
 * @a: matrix of integers
 * @size: size of
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int h, diagon1 = 0, diagon2 = 0;

	for (h = 0; h < size; h++)
	{
		diagon1 += a[(size + 1) * h];
		diagon2 += a[(size - 1) * (h + 1)];
	}
	printf("%d, %d\n", diagon1, diagon2);
}
