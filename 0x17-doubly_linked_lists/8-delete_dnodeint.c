#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: head of the list
 * @index: index of the list
 * Return: 1 if success or -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (hold == NULL)
			return (-1);
		hold = hold->next;
		index--;
	}
	if (hold == *head)
	{
		*head = hold->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		hold->prev->next = hold->next;
		if (hold->next != NULL)
			hold->next->prev = hold->prev;
	}
	free(hold);
	return (1);
}
