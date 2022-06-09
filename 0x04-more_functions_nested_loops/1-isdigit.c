#include "main.h"
/**
 * _isdigit - Entery point
 * Description - checks for a digit (0 through 9)
 * @c: its a digit enterd
 * Return: 1 if c is between 0 to 9 - Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
