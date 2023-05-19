#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: size of memory block to be allocated
 *
 * Return: pointer to address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *bat;
	unsigned int h;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bat = malloc(nmemb + size);

	if (bat != NULL)
	{
		for (h = 0; h < (nmemb * size); h++)
			bat[h] = 0;
		return (bat);
	}
	else
		return (NULL);
}
