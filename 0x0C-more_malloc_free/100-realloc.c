#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of ptr
 * @new_size: size of memory to be allocated
 *
 * Return: pointer to the address of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *amp;
	char *ptr_copy, *fig;
	unsigned int b;

	if (new_size  == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		amp = malloc(new_size);

		if (amp == NULL)
			return (NULL);

		return (amp);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	amp = malloc(sizeof(*ptr_copy) * new_size);

	if (amp == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fig = amp;

	for (b = 0; b < old_size && b < new_size; b++)
		fig[b] = *ptr_copy++;

	free(ptr);
	return (amp);
}
