#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 *
 * @array: pointer to int
 * @action: pointer to the function
 * @size: size of the array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t h;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}
