#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings followed by a new line
* @separator: the string to be printed between strings
* @n: number of arguments passed
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) != NULL)
		{
			printf("%s", va_arg(ap, char *));
		}
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
		printf("\n");
}
