#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index.
 *
 * @index: index of bit to set
 * @n: unsigned int
 *
 * Return: 1 if it worked, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}
