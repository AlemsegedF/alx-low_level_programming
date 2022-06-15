#include "main.h"


/**
 * cap_string - capitalizes all words
 * @str: string to be capitalized
 * Return: changed string
 */


char *cap_string(char *str)
{
	int i, j;
	char cm[13] = {',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; cm[j] != '\0'; j++)
		{
			if (str[i] == cm[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
		}
	}
	return (str);
}
