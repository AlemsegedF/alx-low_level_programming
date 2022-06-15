#include "main.h"
#include <string.h>


/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: length of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
