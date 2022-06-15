#include "main.h"


/**
 * cap_string - capitalizes all words
 * @str: string to be capitalized
 * Return: changed string
 */


char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '.' || str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	}
	return (str);
}
