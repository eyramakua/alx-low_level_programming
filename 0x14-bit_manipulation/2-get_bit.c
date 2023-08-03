#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 *
 * @n: value of unsigned long int
 * @index: index of a bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; n >>= 1, m++)
	{
		if (index == m)
		{
			return (n & 1);
		}
	}
	return (-1);
}
