#include "main.h"

/**
 * _strcmp - copmpare two strings
 * @s1: string to be compared
 * @s2: string to compared
 * Return: value -1,0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	signed int result;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			result = 0;
			continue;
		}
		else if (s1[i] > s2[i])
		{
			result = 15;
			break;
		}
		else if (s1[i] < s2[i])
		{
			result = -15;
			break;
		}
		else
		{
			result = 0;
			break;
		}
	}
	return (result);
}
