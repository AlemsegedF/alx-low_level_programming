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
	int c;

	for (; a <= '7'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; a < b && c <= '9'; c++)
			{
				if (b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || b != '8' || c != '9')
					{
						putchar(',');
						putchar(' ');
					};
				};
			};
		};
	};
	putchar('\n');
	return (0);
}
