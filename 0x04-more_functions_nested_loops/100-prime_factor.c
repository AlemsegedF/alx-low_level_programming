#include <stdio.h>
#include <math.h>

/**
 * main - Entery Point
 * prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	long int n, i, max;

	n = 612852475143;
	max = -1;
	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	};
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	};
	if (n > 2)
	{
		max = n;
	}
	printf("%li\n", max);
	return (0);
}
