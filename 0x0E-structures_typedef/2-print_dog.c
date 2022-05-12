#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that print struct dog
 * @d: parameter of type dog
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	d->name = malloc(sizeof(char));
	d->age = malloc(sizeof(float));
	d->owner = malloc(sizeof(char));
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
