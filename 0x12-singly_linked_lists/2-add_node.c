#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node -adds a new node at the beginning of a list_t list
* @head: begning of list
* @str: needs to be duplicated
* Return: new list head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *temp;
	int len;

	new_node = (list_t *) malloc(sizeof(list_t))
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = strdup(str);
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new_node->str = temp;
	new_node->len = len;
	new_node->next = *head;
	*head =  new_node;
	return (new_node);
}
