#include "dog.h"
#include <stdio.h>

/**
* print_dog - check code
* @d:print
**/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
	{
		d.name ? printf("Name: (nil)") : printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

