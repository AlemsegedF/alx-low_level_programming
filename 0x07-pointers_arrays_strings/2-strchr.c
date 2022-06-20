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
	int i, s_len;
	char *ret;

	s_len = strlen(s);
	for (i = 0; i < s_len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
			ret = NULL;

	return (ret);
}
