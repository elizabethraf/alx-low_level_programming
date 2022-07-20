#include "lists.h"

/**
* free_listint2 - check code
* @head: free list
**/
void free_listint2(listint_t **head)
{
	listint_t *len;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		len = (*head);
		(*head) = (*head)->next;
		free(len);
	}
	free(*head);
	head = NULL;
}
