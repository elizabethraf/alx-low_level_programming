#ifndef _DOG_H_
#define _DOG_H_
#include <stdlib.h>


/**
* struct dog - check code
* @name: name of the dog
* @age:the dog's age
* @owner:owner of the dog
* main: struct
* Description: struct called "dog"
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

