#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int second, third;

	for (second = 0; second <= 99; second++)
	{
		for (third = second; third <= 99; third++)
		{
			if (second == third)
			{
				continue;
			}
			if (second < third)
			{
				putchar(second / 10 + '0');
				putchar(second % 10 + '0');
				putchar(' ');
				putchar(third / 10 + '0');
				putchar(third % 10 + '0');
				if (second != 98 || third != 99)
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
