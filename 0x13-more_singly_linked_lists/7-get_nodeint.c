#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: pointer to the beginning of a linked list
* @index: the index of the node
* Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
