#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to the first node
* Return: the number  of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	int i = 0;

	ptr = h;
	while (ptr->next)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
