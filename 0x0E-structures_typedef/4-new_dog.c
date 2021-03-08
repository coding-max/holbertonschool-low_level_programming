#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	else
		new_dog->name = _strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	else
		new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}

/**
 * _strcpy - copy the string pointed to by src inluding the null byte
 * to the buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 *
 * Return: @direction = pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *direction = dest;

	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (direction);
}
