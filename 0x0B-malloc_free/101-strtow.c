#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int num_words_func(char *);
int word_size(char *);

/**
 * num_words_func - count words
 * @str: string to be split
 * Return: num_words
 */

int num_words_func(char *str)
{
	int i, num_words, len = 0;

	for (i = 0; str[i]; i++)
		len++;
	num_words = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			num_words++;
			i += word_size(str + i);
		}
	}
	return (num_words);
}


/**
 * size_word - number of characters in word
 * @str: string
 * Return: size
 */
int word_size(char *str)
{
	int i, size = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
	{
		size++;
	}
	return (size);
}

/**
 * strtow - splits string
 * @str: string to be split
 * Return:pointer
 */


char **strtow(char *str)
{
	long i, j, num_words, size, ptr_i;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	num_words = num_words_func(str);
	if (num_words == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (num_words + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	for (ptr_i = 0; ptr_i < num_words; ptr_i++)
	{
		while (str[i] == ' ')
			i++;
		size = word_size(str + i);
		ptr[ptr_i] = malloc(sizeof(char) * (size + 1));
		if (ptr[ptr_i] == NULL)
		{
			for (j = ptr_i; j >= 0; j--)
			{
				free(ptr[ptr_i]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < size; j++)
		{
			ptr[ptr_i][j] = str[i++];
		}
		ptr[ptr_i][j] = '\0';
	}
	ptr[ptr_i] = NULL;
	return (ptr);
}
