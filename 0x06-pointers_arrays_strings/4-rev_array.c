#include "main.h"


/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers
 * @n: the number of elements to swap
 * Return: swapd array
 */


void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
