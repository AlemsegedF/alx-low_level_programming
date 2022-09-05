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
	int i = 0, l = 0;

	while (src[i++])
		l++;
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (i = l; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
