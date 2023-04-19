#include "dog.h"
/**
 * init_dog - function that initialize
 * @name: para 1
 * @age: para 2
 * @owner: para 3
 * @d: struct dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name  = name;
	d->age = age;
	d->owner = owner;
	}
}
