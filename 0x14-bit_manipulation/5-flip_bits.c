#include "main.h"

/**
 * flip_bits - returns the number of bits the needs to be
 * flipped to get the other number
 * @n: number
 * @m: number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
