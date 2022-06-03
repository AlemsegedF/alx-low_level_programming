#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *This function prints all the alphabet
 * Return: 0(success)
 */
int main(void)
{
	int ch = 97;
	int ca = 'A';

	while (ch > 96 && ch < 123)
	{
		putchar(ch);
		ch = ch + 1;
	};
	while (ca > 64 && ca < ('A' + 26))
	{
		putchar(ca);
		ca = ca + 1;
	};
		putchar('\n');
	return (0);
}

