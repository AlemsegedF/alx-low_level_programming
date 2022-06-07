#include "main.h"
/**
 * print_last_digit - Entery point
 * Description -prints last digit
 * @n: enterd value
 * Return: last_digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n < 0)
		last_digit = -1 * last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
