#define _DOG_H_

/**
* struct dog - check code
* @name: name of the dog
* @age:the dog's age
* @owner:owner of the dog
* main: struct
* Description: struct called "dog" that store its name, its age * and the name of its owner.
**/
struct dog
{
	char *name;
	char *age;
	char *owner;
};

int main(void)
{
	struct dog my_dog;
	mydog.name = "Ppppy";
	mydog.age = "3.5";
	mydog.owner = "Bob";

	printf("%s", my_dog);

	return(0);
}
