#include "lists.h"
/**
 * get_dnodeint_at_index - get node of the list
 * @head: head of the list
 * @index: index of the list
 * Return: node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}
	if (n > index)
		return (NULL);
	return (head);
}
