#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to search
 * @accept: the set bytes to accept
 *
 * Return: number of bytes in the inital segment of s
 * which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ham = 0, g, d;

	for (g = 0; s[g] != '\0'; g++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[g] == accept[d])
			{
				ham++;
				break;
			}
		}
		if (accept[d] == '\0')
		{
			break;
		}
	}
	return (ham);
}
