#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 *This function prints all the possible
 *combination of two numbers
 * Return: 0(Success)
 */
int main(void)
{
	int a = '0';
	int b;

	for (; a >= '0' && a <= '8'; a++)
	{
		for (b = '0'; b >= '0' && b <= '9'; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || b != '9')
				{
				putchar(',');
				putchar(' ');
				};
			};

		};
	};
	putchar('\n');
return (0);
}
