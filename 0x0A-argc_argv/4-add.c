#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * main -prints the number of arguments passed to it
 * @argc: argumnts count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, str_len, sum = 0;
	char *p;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		str_len = strlen(argv[i]);
		for (j = 0; j < str_len; j++)
		{
			if (!isdigit(*(p + j)))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
