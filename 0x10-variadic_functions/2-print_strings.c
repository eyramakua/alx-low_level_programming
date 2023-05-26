#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 *
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int b = 0;
	char *strings;

	if (n > 0)
	{
		va_start(args, n);

		while (b < n)
		{
			strings = va_arg(args, char *);
			if (strings == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", strings);
			}

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

