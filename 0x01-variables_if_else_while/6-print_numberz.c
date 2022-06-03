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
	int num = 0;

	while (num >= 0 && num < 10)
	{
		putchar(num);
		num++;
	};
	putchar('\n');
		return (0);
}
