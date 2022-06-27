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
	int i, size = 0;
	char *array;

	for (i = 0; str[i]; i++)
		size++;
	if (str == NULL)
		return (NULL);
	array = (char *) malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
