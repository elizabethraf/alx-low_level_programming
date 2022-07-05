#define _DOG_H_

/**
* struct dog - check code
* @name: name of the dog
* @age:the dog's age
* @owner:owner of the dog
* Description: struct called "dog" that store its name, its age * and the name of its owner.
**/
struct dog
{
	char *name;
	float *age;
	char *owner;
} my_dog;

int main(void)
{
	struct dog my_dog;
	return(0);
}
