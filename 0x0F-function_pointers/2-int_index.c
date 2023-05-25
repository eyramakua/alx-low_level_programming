#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: name
 * @size: number of elements
 * @cmp: pointer to the function
 *
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
		{
			return (b);
		}
	}
	return (-1);
}
