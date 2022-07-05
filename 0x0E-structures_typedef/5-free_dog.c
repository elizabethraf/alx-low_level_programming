#include <stdio.h>
#include "dog.h"

/**
* free_dog - check code
* @d:
* Return: 0 always
**/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

