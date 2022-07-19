#include "lists.h"

/**
* sum_listint - check code
* @head: sums of the all the data
* Return: 0 if the list is empty
**/
int sum_listint(listint_t *head)
{
	listint_t *len;
	int ttl = 0;

	len = malloc(sizeof(listint_t));

	if (len == NULL)
		return (0);
	len = head;
	while (len != NULL)
	{
		ttl += len->n;
		len = len->next;

	}
	free(len);
	return (ttl);
}

