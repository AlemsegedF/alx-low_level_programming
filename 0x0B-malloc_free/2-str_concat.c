#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings;
 * @s1: string to accept
 * @s2: string to be added to s1
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, size;
	char *array;

	len1 = len2 = size = 0;
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	size = len1 + len2 + 1;
	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		array[i] = s1[i];
	for (j = 0; s2[j]; j++)
		array[i + j] = s2[j];
	array[i + j] = '\0';
	return (array);
}
