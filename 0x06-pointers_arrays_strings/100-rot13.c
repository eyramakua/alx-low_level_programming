#include "main.h"
#include <stdio.h>

/**
 * *rot13 -  encodes a string using rot13
 *
 * @str: string to be encoded in rot13
 *
 * Return: Encode string
 */
char *rot13(char *str)
{
	int b = 0;

	while (str[b])
	{
		while ((str[b] >= 'a' && str[b] <= 'z') || (str[b] >= 'A' && str[b] <= 'Z'))
		{
			if ((str[b] > 'm' && str[b] <= 'z') || (str[b] > 'M' && str[b] <= 'Z'))
			{
				str[b] -= 13;
				break;
			}
			str[b] += 13;
			break;
		}
		b++;
	}
	return (str);
}
