#include "main.h"
/**
 * _isupper - Entery point
 * Description - checks for uppercase character
 * @c: its a character enterd
 * Return: 1 if c is uppercase- Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
