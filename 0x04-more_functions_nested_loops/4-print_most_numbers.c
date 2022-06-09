#include "main.h"
/**
 * print_most_numbers - Entery point
 * description - prints the numbers 0 to 9
 * with out 2 and 4 follwed by a new line.
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			i++;
		else
		{
			_putchar(i + '0');
			i++;
		};
	};
	_putchar('\n');
}
