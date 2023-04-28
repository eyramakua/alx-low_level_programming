#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0-14x10
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int pres;
	int Z;

	for (pres = 1; pres <= 10; pres++)
	{
		for (Z = 0; Z <= 14; Z++)
		{
			if (Z >= 10)
			{
				putchar((Z / 10) + '0');
			}
			putchar((Z % 10) + '0');
		}
		putchar('\n');
	}
}
