#include "main.h"

/**
 * get_endianness - function that checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int h;
	char *j;

	h = 1;
	j = (char *) &h;

	return ((int)*j);
}
