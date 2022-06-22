#include "main.h"

int prime_checker(int, int);
int is_prime_number(int);
/**
 * prime_checker - checks if number is prime rucurrsively
 * @num: number to be checked
 * @i: factor
 * Return: 1 or 0;
 */

int prime_checker(int num, int i)
{
	if (num % i == 0 && i != num)
		return (0);
	if (i == num / 2)
		return (1);
	return (prime_checker(num, i + 1));
}

/**
 * is_prime_number - checks if a number is prime number
 * @n: number to be checked
 * Return: 1 0r 0;
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (0);
	return (prime_checker(n, i));
}
