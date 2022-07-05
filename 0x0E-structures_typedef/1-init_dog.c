#include "dog.h"

/**
* init_dog - check code
* @owner: - initializer
* @d: variale
* @name: variable type
* @age: variable type
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(0);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

