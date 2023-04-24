#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ab, ac, ad

	for (ab = 0; ab <= 7; ab++)
	{
		for (ac = ab + 1; ac <= 8; ac++)
		{
			for (ad = ac + 1; ad <= 9; ad++)
			{
				putchar(ab + '0');
				putchar(ac + '0');
				putchar(ad + '0');
				if (ab != 7 || ac != 8 || ad != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
