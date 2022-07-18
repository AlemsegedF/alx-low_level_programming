#include "lists.h"
#include <stdlib.h>


/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: beginning of node
* Return: the head node's data(n)
*/

int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	val = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (val);
}
