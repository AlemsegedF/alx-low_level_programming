#include "main.h"
#include <stdlib.h>


/**
 * array_range - allocates a memeory for an array using malloc
 * @min: minmum element of the array
 * @max: maximum element of the array
 * Return: void
 */
int *array_range(int min, int max)
{
	int i, length;
	int *fill;
	void *ptr;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	ptr = (int *)malloc(length * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	fill = ptr;
	for (i = 0; i < length; i++)
	{
		fill[i] = min;
		min++;
	}
	return (ptr);
}
