#include <stdio.h>
#include "dog.h"

/**
 * init_dog - inits var of type struct dog
 * @d: ptr 2 struct dog var
 * @name: dogname
 * @age: dogage
 * @owner: dogowner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
