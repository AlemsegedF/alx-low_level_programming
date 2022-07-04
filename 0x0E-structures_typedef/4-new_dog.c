#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owneer of the dog
 * Return: sruct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len;
	dog_t *ptr_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	for (len = 0; *name++; len++)
		;
	len++;
	ptr_dog->name = malloc(sizeof(char) * len);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	while(*name--)
		;
	ptr_dog->name = strcpy(ptr_dog->name, name);
	ptr_dog->age = age;
	for (len = 0; *owner++; len++)
		;
	len++;
	ptr_dog->owner = malloc(sizeof(char) * len);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}
	while(*owner--)
		;
	ptr_dog->owner = strcpy(ptr_dog->owner, owner);
	return (ptr_dog);
}
