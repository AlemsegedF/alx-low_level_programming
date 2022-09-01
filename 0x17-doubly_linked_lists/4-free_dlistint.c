#include "lists.h"
/**
 * free_dlistint - free memory
 * @head: head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;
	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
