#include "dog.h"

/**
 * init_dog - initializes variable d below.
 * @d: variable of type dog
 * @name: name of dog.
 * @age: dog age.
 * @owner: owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
