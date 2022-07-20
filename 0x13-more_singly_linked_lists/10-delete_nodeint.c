#include "lists.h"

/**
* delete_nodeint_at_index - check code
* @head: deletes node at index
* @index: deletes node
* Return: 1 if successfull and -1 if it failed
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = index;
	listint_t *current, *new;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0 || *head == NULL)
			return (0);
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	new = current->next;
	current->next = new->next;
	free(new);
	return (1);
}
