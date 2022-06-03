#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *This function prints the alphabet
 * Return: 0(success)
 */
int main(void)
{
	int alpha = 097;

	while (alpha < alpha + 26)
	{
		putchar("%c\n", alpha);
		alpha = alpha + 1;
	};
	return (0);
}

