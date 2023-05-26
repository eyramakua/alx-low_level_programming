#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mune;
	int cpy_name = 0, cpy_owner = 0;

	if (name != NULL && owner != NULL)
	{
		cpy_name = _strlen(name) + 1;
		cpy_owner = _strlen(owner) + 1;
		mune = malloc(sizeof(dog_t));

		if (mune == NULL)
		{
			return (NULL);
		}

		mune->name = malloc(sizeof(char) * cpy_name);

		if (mune->name == NULL)
		{
			free(mune);
			return (NULL);
		}

		mune->owner = malloc(sizeof(char) * cpy_owner);

		if (mune->owner == NULL)
		{
			free(mune->name);
			free(mune);
			return (NULL);
		}
		mune->name = _strcpy(mune->name, name);
		mune->owner = _strcpy(mune->owner, owner);
		mune->age = age;
	}

	return (mune);
}

/**
 * _strlen - length of a string
 *
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int b = 0;

	for (; *s != '\0'; s++)
	{
		b++;
	}

	return (b);
}

/**
 * _strcpy - Copies string
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: the ponter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	dest[c++] = '\0';

	return (dest);
}

