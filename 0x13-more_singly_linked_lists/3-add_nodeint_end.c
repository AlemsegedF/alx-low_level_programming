#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end  adds a new node at the end of a listint_t list
* @head: pointer to the first node
* @n: the value to the new node
* Return: the address of the new node
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	ptr = (listint_t *) malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (*head);
}
