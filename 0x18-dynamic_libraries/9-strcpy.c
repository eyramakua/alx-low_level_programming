#include "main.h"

/**
 * _strcpy - copies the string to another destination
 *
 * @src: Source
 * @dest: Destination
 *
 * Return: the pointer to des
 */
char *_strcpy(char *dest, char *src)
{
	int g;

	for (g = 0; src[g] != '\0'; g++)
	{
		dest[g] = src[g];
	}

	dest[g++] = '\0';
	return (dest);
}
