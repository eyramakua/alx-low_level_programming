#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 *
 * @src: Source
 * @dest: Destination
 *
 * Return: a pointer pointing to dest.
 */
char *_strcat(char *dest, char *src)
{
	int k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (*src != '\0')
	{
		dest[k] = *src;
		src++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
