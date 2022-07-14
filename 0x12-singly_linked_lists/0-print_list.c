#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all elements of a list_t list
* @h: pointer to dataype list_t node
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int number_of_node;

	for (number_of_node = 0; h != NULL; number_of_node++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (number_of_node);
}
