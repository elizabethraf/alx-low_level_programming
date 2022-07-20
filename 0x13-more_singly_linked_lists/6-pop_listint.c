#include "lists.h"

/**
* pop_listint - check code
* @head: delete the node
* Return: 0 if empty, n for head node
**/
int pop_listint(listint_t **head)
{
	listint_t *len;
	int n;

	if (*head == NULL)
		return (0);

	len = *head;
	n = len->n;
	(*head) = (*head)->next;

	free(head);
	return (n);
}
