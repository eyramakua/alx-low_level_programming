#include "main.h"

/**
 * *_memset - Fills a block of memory with a specific value
 *
 * @b: constant byte
 * @n: number of bytes
 * @s: memory area
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
}
