#include "lists.h"

/**
*free_listint - check code
* @head: free function
**/
void free_listint(listint_t *head)
{
	listint_t *len;

	while (head != NULL)
	{
		len = head;
		head = head->next;
		free(len);
	}
}
