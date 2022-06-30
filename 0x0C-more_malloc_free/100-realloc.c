#include "main.h"
#include <stdlib.h>


/**
 * _realloc -reallocates a memory block using malloc and free
 * @ptr: pointer to be rellocated
 * @old_size: old_memory size
 * @new_size: new_memory size
 * Return: pointer with new location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	char *copy, *fill;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		return (newPtr);
	}
	copy = ptr;
	newPtr = malloc(sizeof(*copy) * new_size);
	if (newPtr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fill = newPtr;
	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *copy++;
	free(ptr);
	return (newPtr);
}
