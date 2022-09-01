#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head of the list
 * @n: number
 * Return: address of the head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dark, *hold;
	dark = malloc(sizeof(dlistint_t));
	if (dark == NULL)
		return (NULL);
	dark->n = n;
	dark->next = NULL;
	dark->prev = NULL;
	if (*head == NULL)
		*head = dark;
	else
	{
		hold = *head;
		while (hold->next != NULL)
		{
			hold = hold->next;
		}
		hold->next = dark;
		dark->prev = hold;
	}
	return (*head);
}
