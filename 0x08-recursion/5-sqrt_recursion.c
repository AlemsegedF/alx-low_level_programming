#include "main.h"

int i_sqroot(int, int);
int _sqrt_recursion(int);
/**
 * i_sqroot - finds square root by recursion
 * @num: number
 * @i: index
 * Return: square root
 */

int i_sqroot(int num, int i)
{
	if (i * i == num)
		return (i);
	if (num / 2 == i)
		return (-1);
	return (i_sqroot(num, i + 1));
}

/**
 * _sqrt_recursion - calculates natural sqroot of a number
 * @n: number sqroot to be calculated
 * Return: square root
 */


int _sqrt_recursion(int n)
{
	int index = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (i_sqroot(n, index));
}
