#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int h, j;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[h + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[h]);
		}
	}
	return ('\0');
}
