#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: dog age.
 * @owner: owner of dog.
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int idx = 0, idy = 0, idz = 0, ida = 0;
	dog_t *d;

	while (name[idx] != '\0')
		idx++;
	idx++;
	while (owner[idy] != '\0')
		idy++;
	idy++;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(idx);
	d->owner = malloc(idy);
	if (!(d->name) || !(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	while (idz < idx)
	{
		d->name[idz] = name[idz];
		idz++;
	}
	d->name[idz] = '\0';
	while (ida < idy)
	{
		d->owner[ida] = owner[ida];
		ida++;
	}
	d->owner[ida] = '\0';
	d->age = age;
	return (d);
}
