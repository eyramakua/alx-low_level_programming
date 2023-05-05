#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Capitilizes all words of a string
 *
 * @str: string to be capitilized
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int c, d;
	char peps[] = "\t\n,;' '.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (c = 1; str[c] != '\0'; c++)
	{
		for (d = 0; peps[d] != '\0'; d++)
		{
			if (str[c - 1] == peps[d] && str[c] >= 'c' && str[c] <= 'z')
			{
				str[c] -= 32;
			}
		}
	}
	return (str);
}

