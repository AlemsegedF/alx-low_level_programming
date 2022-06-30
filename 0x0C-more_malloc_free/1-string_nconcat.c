#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of characters to be concatenated
 * Return: ptr to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	len1 = len2 = 0;
	if (s2 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i]; i++)
		len2++;
	for (i = 0; s1[i]; i++)
		len1++;
	if (n >= len2)
		n = len2;
	ptr = (char *) malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
