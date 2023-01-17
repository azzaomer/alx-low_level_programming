#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function to intialize dog struct
 * @d: pointer to dog struct
 * @name: dog na,e
 * @age: dog age
 * @owner: dog owmer
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
