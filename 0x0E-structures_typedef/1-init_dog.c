#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize struct dog
 * @d: parameter of type dog
 * @name: pointer parameter pointing to char
 * @age: float parameter
 * @owner: pointer parameter pointing to char
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
