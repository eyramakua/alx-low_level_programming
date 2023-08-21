#include "main.h"

/**
 * _strncat -  concatenates two strings.
 *
 * @src: Source
 * @dest: Destination
 * @n: The maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int j = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}
