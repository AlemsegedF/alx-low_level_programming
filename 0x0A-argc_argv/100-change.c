#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints the minimum number of coins to make
 * change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num, i, sum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
		printf("0\n");
	sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += num / coins[i];
		num %= coins[i];
		if (num == 0)
			break;
	}
	printf("%d\n", sum);
	return (0);
}
