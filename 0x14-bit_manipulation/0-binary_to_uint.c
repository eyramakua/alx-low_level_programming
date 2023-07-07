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
	unsigned int dec;
	int d;

	dec = 0;
	if (!b)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] != '0' && b[d] != '1')
		return (0);
	}
	for (d = 0; b[d] != '\0'; d++)
	{
		dec <<= 1;
		if (b[d] == '1')
			dec += 1;
	}
	return (dec);
}
