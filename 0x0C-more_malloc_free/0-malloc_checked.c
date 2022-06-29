#include "main.h"
#include <stdlib.h>

/**
 * mallock_checked - allocates memory using malloc
 * @b: memory size to allocate
 * Return:a pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
