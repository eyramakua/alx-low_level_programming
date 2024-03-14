#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted array
 * @size: size of array
 * @array: array to search on
 * @value: value to search on array
 * Return: index of value found or -1 if fail
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t tam = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

	if (size <= 0)
		return (-1);
	if (tam > size)
	{
		printf("Value checked array[%ld] is out of range\n", tam);
		return (-1);
	}
	else if (array[tam] > value)
	{
		high = tam - 1;
		tam = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
	}
	while (tam < size)
	{
		printf("Value checked array[%ld] = [%d]\n", tam, array[tam]);
		if (array[tam] == value)
			return (tam);
		else if (array[tam] < value)
			tam++;
		else
			break;
	}
	return (-1);
}
