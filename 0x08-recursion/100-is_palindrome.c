#include "main.h"
#include <string.h>

int is_palindrome(char *s);
int palindrom_recursion(char *s, int, int);

/**
 * palindrom_recursion - returns 1 if string is palindrome and 0 if not
 * @s: string to be exmained
 * @l: length
 * @i: index
 * Return: 0 or 1
 */
int palindrom_recursion(char *s, int l, int i)
{
	if (l < i)
		return (1);
	i++;
	l--;
	if (s[i] == s[l])
	{
		return (palindrom_recursion(s, l, i));
	}
	return (0);
}

/**
 * is_palindrome - check for palindrome
 * @s: string o be checked
 * Return: 1 or 0;
 */


int is_palindrome(char *s)
{
	int l, i;

	l = strlen(s) - 1;
	i = 0;
	if (l == 0)
		return (1);
	if (s[i] == s[l])
		return (palindrom_recursion(s, l, i));
return (0);
}

