#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates a memory using malloc
 * @b: size of memory block to be allocated
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *cat;

	cat = malloc(b);
	if (cat == NULL)
		exit(98);
	return (cat);
}
