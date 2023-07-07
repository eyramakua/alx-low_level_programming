#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int d;

	if (!b)
		return (0);
	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
		return (0);
		decimal = 2 * decimal + (b[d] - '0');
	}
	return (decimal);
}
