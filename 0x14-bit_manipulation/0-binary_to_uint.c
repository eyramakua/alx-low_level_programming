#include "main.h"

/**
 * binary_to_uint - function that converts to a binary number
 *
 * @b: poier to a string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int fig_num = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		fig_num = 2 * fig_num + (b[d] - '0');
	}
	return (fig_num);
}
