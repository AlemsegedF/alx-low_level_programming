#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of integer array
 * @height: height of integer array
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;
	
	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (;i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	if (array[i] == NULL)
                {
                        free(array[i]);
                        free(array);
                        return (NULL);
                }
	return (array);
}
