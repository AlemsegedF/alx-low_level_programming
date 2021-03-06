#include "main.h"
/**
 * print_times_table - Entery point
 * description: prints time table n times
 * @n: entered value
 * Return : void
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n <= 14 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (p > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar(p % 10 + '0');
				}
				else if (p > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar((p / 10) % 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					};
					_putchar(p + '0');
				}
			}
			_putchar('\n');
		}
	}
}
