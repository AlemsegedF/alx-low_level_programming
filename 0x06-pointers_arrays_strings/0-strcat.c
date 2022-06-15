#include "main.h"
#include "stdio.h"
#include "string.h"


/**
 * _strcat - concatenates two strings
 * @dest: string to accept the add string
 * @src: string to be add
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
