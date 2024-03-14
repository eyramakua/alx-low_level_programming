#include "search_algos.h"
/**
 * binary_search -  a function that searches for a value
 * @array: array to search on
 * @size: size of array
 * @value: value to search on array
 * Return: index of found value or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0, end = size, center, i;

	while (begin < end)
	{
		printf("Searching in array: ");
		for (i = begin; i < end - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end - 1]);

		center = centerpoint(begin, end);
		if (array[center] == value)
			return (center);
		else if (array[center] > value)
			end = center;
		else
			begin = center + 1;
	}
	return (-1);
}

/**
 * centerpoint - function to find the centerpoint of two numbers
 * @begin: lower number
 * @end: higher number
 * Return: centerpoint number
 */
size_t centerpoint(size_t begin, size_t end)
{
	int num = begin + end;

	if (num % 2 == 0)
		num = num / 2 - 1;
	else
		num = num / 2;
	return (num);
}
