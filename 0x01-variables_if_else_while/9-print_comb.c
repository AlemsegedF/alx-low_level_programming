#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 * This function prints numbers
 * combind with comma and space
 * Return: 0(success)
 */
int main(void)
{
	int num = '0';

	do {
		putchar(num);
		if (num != '9')
		{
		putchar(',');
		putchar(' ');
		}
		num++;
	} while (num >= '0' && num <= '9');
	putchar('\n');
		return (0);
}
