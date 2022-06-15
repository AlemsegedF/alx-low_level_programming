#include "main.h"

/**
 * _strcmp - copmpare two strings
 * @s1: string to be compared
 * @s2: string to compared
 * Return: value -1,0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
