#include "main.h"
#include <stdlib.h>


/**
 * argstostr -concatenates all the arguments of your program
 * @ac: number of argments
 * @av: arguments
 * Return: concateneted string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		len += j;
	}
	str = malloc(sizeof(char) * len + i + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;

	}
	str[k] = '\0';
	return (str);
}