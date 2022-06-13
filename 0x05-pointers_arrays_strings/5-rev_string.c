#include "main.h"


/**
 * rev_string - reverse string
 * @s: accepted string
 * return: reversed string
 */

void rev_string(char *s)
{
	int j, half, max, length = 0;
	char temp;

	while (s[length] != '\0')
	{
	length++;
	}
	max = length - 1;
	half = length / 2;
	j = 0;
	while (half--)
	{
		temp = s[max - j];
		s[max - j] = s[j];
		s[j] = temp;
		j++;
	}
}
