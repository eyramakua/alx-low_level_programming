#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: the string yto be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int b = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (b < n)
		{
			printf("%d", va_arg(args, int));

			if (b != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			b++;
		}
		va_end(args);
	}
	printf("\n");
}
