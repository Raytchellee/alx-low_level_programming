#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints element of dog.
 * @d: variable of type dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		(!(d->name)) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		(d->age > -1) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		(!(d->owner)) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}

