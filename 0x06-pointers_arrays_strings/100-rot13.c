#include "main.h"


/**
 * rot13 -encods a string using rot13
 * @s: sting to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char com1[52] = {'a', 'b', 'c', 'd', 'e', 'e', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'A', 'B', 'C', 'D',
	'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
	'n', 'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z', 'N', 'O', 'P', 'Q', 'R',
	'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char com2[52] = {'n', 'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z', 'N', 'O', 'P', 'Q', 'R',
	'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
	'a', 'b', 'c', 'd', 'e', 'e', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'A', 'B', 'C', 'D',
	'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == com1[j])
			{
				s[i] = com2[j];
				break;
			}
		}
	}
	return (s);
}
