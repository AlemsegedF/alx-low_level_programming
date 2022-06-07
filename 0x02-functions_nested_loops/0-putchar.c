#include "main.h"
/**
 * main -Entery point
 * This program prints _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char myStrng[] = "_putchar\n";

	int i = 0;

	while (i < 9)
	{
		_putchar(myStrng[i]);
		i++;
	}
	return (0);
}

