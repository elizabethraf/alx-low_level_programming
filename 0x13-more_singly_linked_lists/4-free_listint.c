#include "lists.h"

/**
*free_listint - check code
* @head: free function
**/
void free_listint(listint_t *head)
{
	listint_t *len;

	len = head;
	if (len == NULL)
		return;
	head = head->next;
	free(head);
}
