#include "lists.h"

/**
* free_listint2 - check code
* @head: free list
**/
void free_listint2(listint_t **head)
{
	listint_t *len, *tmp = *head;
	if (*head == NULL)
			free(*head);
	while (tmp != NULL)
	{
		len = tmp;
		tmp = tmp->next;
		free(len);
	}
	*head = NULL;
	free(tmp);
}
