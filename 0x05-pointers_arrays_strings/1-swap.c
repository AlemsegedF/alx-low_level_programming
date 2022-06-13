#include "main.h"


/**
 * swap_int - swaps the values of two bariables
 * @a: accepted variable 1
 * @b: accepted variable 2
 * Return: swaped value
 */


void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
