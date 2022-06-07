#include "main.h"
/**
 * print_alphabet - Entery point
 * description - prints alphabbets
 * in lower case letters
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	};
	_putchar('\n');
}
