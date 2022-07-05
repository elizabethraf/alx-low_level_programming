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
	struct dog *p = malloc(sizeof(d));

	p->name = name;
	p->age = age;
	p->owner = owner;
	d = p;
}

