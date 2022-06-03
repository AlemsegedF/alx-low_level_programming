#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *This function prints all the alphabet
 * Return: 0(success)
 */
int main(void)
{
	int ch = 'a';
	int ca = 'A';

	while (ch > 96 && ch < 123)
	{
		putchar(ch);
		ch = ch + 1;
	};
	while (ca > 'A' && ca < (ca + 26))
	{
		putchar(ca);
	};
		putchar('\n');
	return (0);
}

