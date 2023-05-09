#include "main.h"

/**
 * _strpbrk - function that searches a string for anys set of byte
 *
 * @s: string to search
 * @accept: accepted byte
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int h, j;

	for (h = 0; s[h] != '\0'; h++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[h] == accept[j])
			{
				return (&s[h]);
			}
		}
	}
	return ('\0');
}
