#include "lists.h"

/**
* pop_listint - check code
* @head: delete the node
* Return: 0 if empty, n for head node
**/
int pop_listint(listint_t **head)
{
	listint_t *len;
	unsigned int n;

	if (len == NULL || *head == NULL)
		return (0);
	len = *head;
	*head = len->next;
	n = len->n;
	free(len);
	return (n);
}

