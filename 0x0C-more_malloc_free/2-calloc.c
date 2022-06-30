#include "main.h"
#include <stdlib.h>


/**
 * _calloc - allocates a memeory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size of data type in bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *start;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	start = ptr;
	for (i = 0; i < (size * nmemb); i++)
		start[i] = '\0';
	return (ptr);
}
