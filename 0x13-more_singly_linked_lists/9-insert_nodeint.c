#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to a linked list
* @idx: the index the list where the new node should be added.
*  index starts at 0;
* @n: new nodes data value
* Return: the address of the new node or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	ptr = *head;
	for (i = 0; i < idx; i++)
	{
		ptr = ptr->next;
	}
	new->n = n;
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
