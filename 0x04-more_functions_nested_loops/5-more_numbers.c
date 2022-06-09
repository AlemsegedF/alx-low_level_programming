#include "main.h"
/**
 * more_numbers - Entery point
 * description - prints 0 to 14 in new line 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		};
		_putchar('\n');
	};
}
