#include "main.h"

/**
 * leet - encode intp 1337 speak
 * @n: Input value
 * Return: n value
 */
char *leet(char *n)
{
	int h, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (h = 0; n[h] != '\0'; h++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[h] == s1[m])
			{
				n[h] = s2[m];
			}
		}
	}
	return (n);
}
