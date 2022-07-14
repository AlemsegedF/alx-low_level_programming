#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node_end -adds a new node at the end of a list_t list
* @head: begning of list
* @str: needs to be duplicated
* Return: agress of new list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *temp;
	int len;
	list_t *ptr;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new_node->str = temp;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
		{
			ptr = *head;
			for (len = 0; ptr->next != NULL; len++)
		{
				ptr = ptr->next;
			}
			ptr->next = new_node;
		}
	return (*head);
}
