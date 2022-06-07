#include "main.h"
/**
 * main - Entery point
 * description - prints alphabbets
 * in lower case letters
 * Return: always 0 (success
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	};
	return (0);
}
