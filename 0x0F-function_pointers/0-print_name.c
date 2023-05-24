#include "function_pointers.h"

/**
 * print_name - function that prints the namr
 * @name: name to print out
 * @f: function to pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;

		f(name);
	}
}
