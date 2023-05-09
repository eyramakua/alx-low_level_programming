#include "main.h"

/**
 * _strchr - Locates a character in string
 * @s: string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurence c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
