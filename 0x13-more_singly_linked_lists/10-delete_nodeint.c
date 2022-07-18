#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index
* @head: pointer to linked list
* @index: element to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *loc;
	unsigned int i;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	loc = temp->next;
	temp->next = loc->next;
	free(loc);
	return (1);
}
