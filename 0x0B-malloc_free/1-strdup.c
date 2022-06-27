#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: pointer to the copy of the string
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *array;

	size = sizeof(str);
	if (str == NULL)
		return (NULL);
	array = (char *) malloc((size) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
