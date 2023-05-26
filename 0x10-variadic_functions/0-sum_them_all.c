#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int b = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (b < n)
		{
			sum += va_arg(args, int);
			b++;
		}

		va_end(args);
		return (sum);
	}
	return (0);
}
