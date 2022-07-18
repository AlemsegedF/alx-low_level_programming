#include "lists.h"
#include <stdio.h>

/**
*listint_len - returns the number of elements in alinked listint_t
* @h: poiintr to tne first node
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	i = 1;
	while (h->next)
	{
		h = h->next;
		i++;
	}
	return (i);
}
