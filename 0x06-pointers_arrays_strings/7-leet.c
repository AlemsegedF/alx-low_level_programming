#include "main.h"


/**
 * leet - swaps letters {aeotl} by {43071}
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int j, k;
	char str1[5] = {'a', 'e', 'o', 't', 'l'};
	char str2[5] = {'A', 'E', 'O', 'T', 'L'};
	int cod[5] = {4, 3, 0, 7, 1};

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[j] == str1[k] || s[j] == str2[k])
			{
				s[j] = cod[k] + '0';
			}
		}
	}
	return (s);
}
