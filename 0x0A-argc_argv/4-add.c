#include <stdio.h>
#include <stdlib.h>


/**
 * main -prints the number of arguments passed to it
 * @argc: argumnts count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
