#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * create_array - creates array of chars and intiallize
 * it with a specific char
 * @size: size pf array
 * @c: character to be intiallized with
 * Return: char typr array
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	array = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
