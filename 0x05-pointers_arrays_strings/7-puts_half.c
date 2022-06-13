#include "main.h"


/**
 * puts_half - prints half of string
 * @str: string
 * return: void
 */

void puts_half(char *str)
{
	int i, j, half;

	for (i = 0; str[i] != '\0'; i++)
		;
	half = i / 2;
	if (half > 2 && i % 2 == 0)
		_putchar(str[half]);
	j = half + 1;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

