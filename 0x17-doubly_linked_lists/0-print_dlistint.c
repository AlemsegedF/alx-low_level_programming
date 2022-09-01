#include "lists.h"

/**
 * print_dlistint - works on number of nodes
 * @h: head of the list
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
