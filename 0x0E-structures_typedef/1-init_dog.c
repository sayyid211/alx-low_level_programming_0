#include "dog.h"
#include "main.h"
/**
 * init_dog - initializes a dog struct
 * @d: arg 1
 * @name: name of dog
 * @age: dog age
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog *d;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
