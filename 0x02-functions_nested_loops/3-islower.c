#include "main.h"
/**
 * _islower - Entery point
 * @c: the integer value it receives
 * Description - this program checks for lowercase character
 * Return: 1 if c is lowercase: 0 otherwise
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		/*refer int c */
		if (c == i)
			return (1);
	}
	return (0);
}
