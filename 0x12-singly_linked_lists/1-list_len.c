#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: ointer to a linked list
* Return: number of elemnts
*/

size_t list_len(const list_t *h)
{
	int num_elements = 0;

	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
