#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *This function prints the alphabet
 *except for letters q and e
 * Return: 0(success)
 */
int main(void)
{
	int ch = 'a';

	while (ch > 96 && ch < 123)
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
		ch = ch + 1;
	};
	putchar('\n');
	return (0);
}

