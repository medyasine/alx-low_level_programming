#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - azertyui
 * @s: para 1
 *
 * Return: number
 */
int _strlen(const char *str)
{
	int s;
	while(*str++)
		s++;
	return (s);
}
/**
 * _strcopy - azertyuio
 * @src: string to copy
 * @pts: copy string to here
 *
 * return: @pts
 */
char *_strcopy(char *pts, char *src)
{
	int i;
	for ( i = 0; *(src + i) != '\0';i++)
	{
		*(pts + i) = *(src + i);
	}
	*(pts + i) = '\0';
	return (pts);
}
/**
 * new_dog - unction that creates a new dog
 * @name: para 1
 * @age: para 2
 * @owner: para 3
 *
 *Return: dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
        if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*dog).owner == NuLL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
