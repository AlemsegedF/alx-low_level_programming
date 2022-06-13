#include "main.h"


/**
 * puts2 - prints every character of a string
 * @str: - accepted string
 * return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i += 2;
		}
	}
	_putchar('\n');
}
