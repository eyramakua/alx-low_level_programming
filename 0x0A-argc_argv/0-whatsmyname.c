#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its own name, followed by a new name
 *
 * @argc: argument count
 * @argv: words
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
