#include "lists.h"
#include <stdlib.h>

/**
* free_list- frees a list_t list.
* @head: points to list_t
* Return: nothing
*/

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
