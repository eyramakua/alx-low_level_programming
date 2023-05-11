#include "main.h"

int _strlen(char *s);
int f_fab(char *s, int top, int down);

/**
 * is_palindrome - Checks if a string is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if it is palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	int den = _strlen(s);

	if (den <= 1)
	{
		return (1);
	}
	else
	{
		return (f_fab(s, 0, den - 1));
	}
}

/**
 * f_fab - function to cjeck if string is palindrome
 *
 * @s: string to check
 * @top: the front of the string to check
 * @down: the back of the string to check
 *
 * Return: 1 if the string is palindrome, 0 if otherwise
 */
int f_fab(char *s, int top, int down)
{
	if (top >= down)
	{
		return (1);
	}
	else if (s[top] != s[down])
	{
		return (0);
	}
	else
	{
		return (f_fab(s, top + 1, down - 1));
	}
}

/**
 * _strlen - find the length of a string
 *
 * @s: the string to find
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen(s + 1) + 1);
	}
}
