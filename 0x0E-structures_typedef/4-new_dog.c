#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicate string
 * @str: string
 * Return: null or pointer to the new copy
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int s = 0;

	if (str)
	{
		while (str[s++])
			;
		d = malloc(sizeof(char) * s);
		if (d)
		{
			while (s--)
				d[s] = str[s];
			return (d);
		}

	}
	return (NULL);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the doge
 * @age: age of the dog
 * @owner: owner of the dof
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));
	if (!t)
		return (NULL);
	if (name)
	{
		t->name = _strdup(name);
		if (!(t->name))
		{
			free(t);
			return (NULL);
		}

	}
	else
		t->name = NULL;
	t->age = age;
	if (owner)
	{
		t->owner = _strdup(owner);
		if (!(t->owner))
		{
			free(t->name);
			free(t);
			return (NULL);
		}
	}
	else
		t->owner = NULL;
	return (t);
}
