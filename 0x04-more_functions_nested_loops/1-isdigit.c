#include "main.h"

/**
 * _isdigit - Checks for a digit
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
