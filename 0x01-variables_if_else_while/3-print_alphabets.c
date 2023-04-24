#include <stdio.h>

/**
 * main - Prints alphabets in lower and upper case
 * Return: Always (Success)
 */

int main(void)
{
	char c = 'a'

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	char c = 'A'

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n')
	return (0);
}
