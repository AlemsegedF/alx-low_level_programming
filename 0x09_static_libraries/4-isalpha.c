#include "main.h"
/**
 * _isalpha - Entery point
 * @c: the integer value it receives
 * Description - this program checks for alphabet character
 * Return: 1 if c is alphabet: 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	for (i = 0; i <= 'z'; i++)
	{
		if (c == (i + 'a') || c == (i + 'A'))
			return (1);
	}
	return (0);
}
