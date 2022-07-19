#include "lists.h"

/**
* free_listint2 - check code
* @head: free list
**/
void free_listint2(listint_t **head)
{
	listint_t *new_node, *tmp = *head;

	while (tmp != NULL)
	{
		new_node = tmp;
		tmp = tmp->next;
		free(new_node);
	}
	*head = NULL;
	free(tmp);
}
