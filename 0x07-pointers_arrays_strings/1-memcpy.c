#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destianation
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		dest[g] = src[g];
	}
	return (dest);
}
