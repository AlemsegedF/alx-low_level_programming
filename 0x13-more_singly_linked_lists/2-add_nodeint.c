#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: pointer to the first node
* @n: valu to te new node
* Return: address to the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t *) malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
