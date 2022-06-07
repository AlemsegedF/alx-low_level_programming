#include "main.h"
/**
 *print_alphabet_x10 - Entery point
 * description - prints alphabbets
 * in lower case letters ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0
		;
	while (i < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		};
		_putchar('\n');
	}
}
