#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *This function prints the alphabet
 * Return: 0(success)
 */
int main(void)
{
	int alpha = 97;

	while (alpha < alpha + 26)
	{
		putchar(alpha);
		alpha = alpha + 1;
	};
	return (0);
}

