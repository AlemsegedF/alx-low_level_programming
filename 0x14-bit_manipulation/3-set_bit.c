#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index of the bit
 * Return: 1 if worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	num = (1 << index);
	*n = (num | *n);
	return (1);
}
