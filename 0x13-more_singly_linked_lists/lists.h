#ifndef HEADER_LISTS
#define HEADER_LISTS
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
size_t print_listint(const listint_t *h);
#endif