#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to new string (Successs), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, gen;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			gen++;
		gen++;
	}
	str = malloc(sizeof(char) * (gen + 1));

	if (str == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
