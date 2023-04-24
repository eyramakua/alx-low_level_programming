#include <stdio.h>

/**
 * main - Prints alphabets in lower and upper case
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'A'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n')
	return (0);
}
