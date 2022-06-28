#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char **memory_l(char *);
/**
 * memory_l - create double pointer using malloc
 * @str: string to be split
 * Return: ptr
 */

char **memory_l(char *str)
{
	long int i, num_words, len = 0;
	char **ptr;

	for(i = 0; str[i]; i++)
		len++;
	if (len <= 1)
		return (NULL);
	if (str == NULL)
		return (NULL);
	num_words = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			num_words++;
		else if (str[i] != ' ' && str[i + 1] == ' ')
			num_words++;
	}
	ptr = malloc(sizeof(char *) * num_words);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

/**
 * strtow - splits string
 * @str: string to be split
 * Return:pointer
 */


char **strtow(char *str)
{
	long i, j, k, size, ptr_i;
	char **ptr;

	ptr = memory_l(str);
	if (ptr == NULL)
		return (NULL);
	ptr_i = 0;
	for (i = 0; str[i]; i++)
	{
		size = 0;
		for (k = i; str[k] != ' '; k++)
		{
			size++;
		}
		if (size >= 1)
		{
			ptr[ptr_i] = malloc(sizeof(char) * (size - 1));
			if (ptr[ptr_i] == NULL)
			{
				for (j = ptr_i; j >= 0; j--)
				{
					free(ptr[ptr_i]);
				}
				free(ptr);
				return (NULL);
			}
			k = 0;
			for (j = i; str[j] != ' '; j++)
			{
				ptr[ptr_i][k] = str[j];
				k++;
			}
			ptr[ptr_i][k] = '\0';
			i = j;
			ptr_i++;
		}
	}
	return (ptr);
}