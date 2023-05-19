#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers
 *
 * @min: smallest number in the array
 * @max: biggest number in the array
 *
 * Return: pointer to the address of the memory block
 */
int *array_range(int min, int max)
{
	int *let;
	int k, l = 0;

	if (min > max)
		return (NULL);

	let = malloc(sizeof(*let) * ((max - min) + 1));
	if (let != NULL)
	{
		for (k = min; k <= max; k++)
		{
			let[l] = k;
			l++;
		}
		return (let);
	}
	else
		return (NULL);
}
