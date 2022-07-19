#include "lists.h"

/**
* free_listint2 - check code
* @head: free list
**/
void free_listint2(listint_t **head)
{
	listint_t *len;
	len = *head;

	if  (head == NULL || *head == NULL)
		return (NULL);
	{
		while (*head != NULL)
		{
			len = *head;
			*head = len->next;
			free(len);

		}
	}
}
