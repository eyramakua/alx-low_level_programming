#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: An attay of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *math = a;
	int *bass = a + n - 1;
	int brass;

	while (math < bass)
	{
		brass = *math;
		*math = *bass;
		*bass = brass;
		math++;
		bass--;
	}
}
