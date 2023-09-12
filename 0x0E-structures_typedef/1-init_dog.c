#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a dog
 * @d: points to dog address
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		malloc(sizeof(struct dog));
}
