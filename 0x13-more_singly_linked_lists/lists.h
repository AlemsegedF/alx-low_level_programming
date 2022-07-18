#ifndef HEADER_LISTS
#define HEADER_LISTS
#include <stddef.h>
/**
* struct listint+s - singly linked list
* @n: integer
* @next: points to next node
*
* Description: singly linked list node structure
*
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif
