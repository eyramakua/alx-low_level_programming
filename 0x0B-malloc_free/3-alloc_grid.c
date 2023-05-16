#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ab;
	int c, d;

	if (height <= 0 || width <= 0)
		return (NULL);

	ab = (int **) malloc(sizeof(int *) * height);

	if (ab == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		ab[c] = (int *) malloc(sizeof(int) * width);
		if (ab[c] == NULL)
		{
			free(ab);
			for (d = 0; d <= c; d++)
				free(ab[d]);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			ab[c][d] = 0;
	}
	return (ab);
}
