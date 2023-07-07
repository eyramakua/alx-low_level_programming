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
	unsigned int sum;
	int gen, jen;

	if (!b)
		return (0);

	sum = 0;

	for (gen = 0; b[gen] != '\0'; gen++)

	for (gen--, jen = 1; gen >= 0; gen--, jen *= 2)
	{
		if (b[gen] != '0' && b[gen] != '1')
		{
			return (0);
			}

		if (b[gen] & 1)
		{
			sum += jen;
		}
	}
	return (sum);
}
