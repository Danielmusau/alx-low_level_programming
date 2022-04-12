#ifndef _DOG_
#define _DOG_

/**
 * struct dog - struct that stores some information of a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Description: struct called "dog" that stores its name,
 * age and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif