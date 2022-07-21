#include<stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: is a pointer to a strinng of 0 and 1 chars.
 * Return: the converted number , or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = 0;

	if (b[i] == '\0')
		return (0);
	while ((b[i] == '0') || (b[i] == '1'))
	{
		sum <<= 1;
		sum += b[i] - '0';
		i++;
	}
	return (sum);
}
