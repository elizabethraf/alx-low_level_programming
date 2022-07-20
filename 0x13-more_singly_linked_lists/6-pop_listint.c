#include "lists.h"

/**
* pop_listint - check code
* @head: delete the node
* Return: 0 if empty, n for head node
**/
int pop_listint(listint_t **head)
{
	listint_t *len;

	if (len == 0 || *head == NULL)
			return (0);
	len = *head;
	*head = len->next;
	free(len);
	return (0);
}
