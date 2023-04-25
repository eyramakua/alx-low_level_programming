#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastdi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdi = n % 10;

	printf("Last digit of %d is %d and", n, lastdi);
	if (lastdi > 5)
	{
	printf("is greater than 5\n");
	}
	else if (lastdi == 0)
	{
	printf("is 0\n");
	}
	else
	{
	printf("is less than 6 and not 0\n");
	}
	return (0);
}
