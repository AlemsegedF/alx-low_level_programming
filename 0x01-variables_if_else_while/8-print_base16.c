#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 * This function prints numbers
 * from less than ten
 * Return: 0(success)
 */
int main(void)
{
	int num = '0';
	int ch = 'a';

	while (num >= '0' && num <= '9')
	{
		putchar(num);
		num++;
	};
	while (ch >= 'a' && ch <= 'f')
	{
		putchar(ch);
		ch++;
	};
	putchar('\n');
		return (0);
}
