#include "dog.h"
#include <stdlib.h>
#include <string.h>
char *_strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owneer of the dog
 * Return: sruct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len = 0;
	dog_t *ptr_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	len = strlen(name) + 1;
	ptr_dog->name = malloc(sizeof(char) * len);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->name = _strcpy(ptr_dog->name, name);
	ptr_dog->age = age;
	len = 0;
	len = strlen(owner) + 1;
	ptr_dog->owner = malloc(sizeof(char) * len);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->owner = _strcpy(ptr_dog->owner, owner);
	return (ptr_dog);
}

/**
 * _strcpy - copy string
 * @dest: destination string
 * @src:source string
 * Return: ptr
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] ='\0';
	return (dest);
}
