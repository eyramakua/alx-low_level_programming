#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int e, f;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (e = 0; e < n; e++)
		{
			for (f = 0; f < e; e++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
