#include "main.h"
/**
 * print_numbers - Entery point
 * description - prints the numbers 0 to 9 follwed by a new line.
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	};
	_putchar('\n');
}
