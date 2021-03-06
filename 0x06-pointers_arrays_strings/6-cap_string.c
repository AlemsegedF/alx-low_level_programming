#include "main.h"


/**
 * cap_string - capitalizes all words
 * @str: string to be capitalized
 * Return: changed string
 */


char *cap_string(char *str)
{
	int i, j;
	char cm[13] = {',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i - 1] == cm[j] || i == 0)
					str[i] -= 32;
			}
		}
	}
	return (str);
}
