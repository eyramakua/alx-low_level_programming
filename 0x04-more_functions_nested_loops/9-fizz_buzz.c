#include "main.h"
#include <stdio.h>

/**
 * main - prints a FizzBuzz program
 *
 * Return: 0
 */
int main(void)
{
	int Z;

	for (Z = 1; Z <= 100; Z++)
	{
		if ((Z % 3 == 0) && (Z % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (Z % 3 == 0)
		{
			printf("Fizz");
		}
		else if (Z % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", Z);
		}

		if (Z != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
