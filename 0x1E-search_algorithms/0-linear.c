#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: array to search on
 * @size: size of array
 * @value: value to search on array
 * Return: index offound value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
