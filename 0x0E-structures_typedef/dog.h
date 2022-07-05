#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - check code
* @name: name of the dog
* @age:the dog's age
* @owner:owner of the dog
* Description: struct called "dog" that store its name, its age * and the name of its owner.
**/
struct dog my_dog
{
	char my_dog.*name;
	float my_dog.*age;
	char my_dog.*owner;
};

void int_dog(struct dog * d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t
*new_dog(char *name, float age, char *owner); 
void free_dog(dog_t *d);
#endif
