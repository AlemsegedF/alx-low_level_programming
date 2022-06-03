#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *This function prints the alphabet
 * Return: 0(success)
 */
int main(void)
{
	int ch = 'a';

	while (ch > 96 && ch < 123)
	{
		putchar(ch);
		ch = ch + 1;
	};
	putchar(\n);
	return (0);
}

