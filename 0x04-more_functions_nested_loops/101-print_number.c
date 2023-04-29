#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 *
 * @n: The integer to print out
 *
 * Return: empty
 */
void print_number(int n)
{
	if (n > -10 && n < 10)
	{
		if (n < 0)
		{
			putchar('-');
			n = n * -1;
		}
		putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		n = n % 10;

		if (n < 0)
			n = n * -1;

		putchar(n + '0');
	}
}
