#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Printing numbers '0' to '9' except '2' and '4'
 *
 * Return: All input values except 2 and 4
 */
void print_most_numbers(void)
{
	int A;

	for (A = 0; A <= 9; A++)
	{
		if (A != 2 && A != 4)
		{
			putchar(A + '0');
		}
	}
	putchar('\n');
}
