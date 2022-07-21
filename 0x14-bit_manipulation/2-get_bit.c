#include "main.h"

/**
 * get_bit - retuens the value of a bit at a given index
 * @n: number
 * @index: index of the bit
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	num = ((n >> index) & 1);
	return (num);
}
