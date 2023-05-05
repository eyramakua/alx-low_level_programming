#include "main.h"

/**
 * *string_toupper - changes all lowercase characters to uppercase
 *
 * @str: String to be changed
 *
 * Return: Lowercase to Uppercase
 */
char *string_toupper(char *str)
{
	int b = 0;

	while (str[b])
	{
		if (str[b] >= 97 && str[b] <= 122)
		{
			str[b] -= 32;
		}
		b++;
	}
	return (str);
}
