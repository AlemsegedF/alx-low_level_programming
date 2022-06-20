#include "main.h"
#include <string.h>


/**
 * _strchr - locates a character in a string
 * @s: string to be affected
 * @c: character to be located
 * Return: affected string
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
			ret = NULL;

	return (ret);
}
