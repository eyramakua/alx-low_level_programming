#include "main.h"

/**
 * _isupper - Shows if the character is uppercase.
 *
 * @c: The character is in the ASCII code.
 *
 * Return: 1 if charcter is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
