#include "main.h"
#include "stdio.h"
#include "string.h"


/**
 * _strncat - concatenates two strings
 * @n: character length of src
 * @dest: string to accept the add string
 * @src: string to be add
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
