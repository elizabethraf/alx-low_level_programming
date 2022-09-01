#include "lists.h"

/**
 * delete_dnodeint_at_index - check code
 * @head: pointer to double linked list
 * @index: index position to delete
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && new)
		{
			new = new->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && new)
		{
			if (new->next)
				new->next->prev = new->prev;
			if (new->prev)
				new->prev->next = new->next;
			else
				*head = new->next;
			free(new);
		}
	}
	return (-1);
}
