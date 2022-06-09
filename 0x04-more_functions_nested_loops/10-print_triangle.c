#include "main.h"
/**
 * print_triangle - Entery point
 * description - prints triangle
 * @size: entered value
 * return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = i; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
