#include "main.h"


/**
 * print_number - prints integer
 * @n: number to be printed
 * Return: nothing
 */

void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	m = n;
	if (n > 9)
	{
		n = n / 10;
		print_number(n);
	}
	_putchar(m % 10 + '0');
}
