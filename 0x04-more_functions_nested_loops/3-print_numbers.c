#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print the numbers from '0' to '9'
 *
 * Return: requested value from inputed value.
 */
void print_numbers(void)
{
	int Z;

	for (Z = 0; Z <= 9; Z++)
	{
		putchar(Z + '0');
	}
	putchar('\n');
}
