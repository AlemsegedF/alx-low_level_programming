#include "lists.h"

/**
 * insert_dnodeint_at_index - add at the index
 * @h: head of the list
 * @idx: index
 * @n: number
 * Return: address of the list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hold = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	while (idx > 1)
	{
		hold = hold->next;
		if (hold == NULL)
			return (NULL);
		idx--;
	}
	if (hold->next != NULL)
	{
		new->prev = hold;
		new->next = hold->next;
		hold->next->prev = new;
		hold->next = new;
	}
	else
		return (add_dnodeint_end(h, n));
	return (new);
}
