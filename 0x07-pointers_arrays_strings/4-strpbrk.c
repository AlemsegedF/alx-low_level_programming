#include "main.h"


/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string that needs to be scanned
 * @accept: sting which needs to be matched
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
