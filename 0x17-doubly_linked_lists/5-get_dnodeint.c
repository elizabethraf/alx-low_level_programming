#include "lists.h"

/**
 * get_dnodeint_at_index - check code
 * @head: head pointer to linked list
 * @index: to get node
 * Return: NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}
	if (head && index == 0)
		return (head);
	return (NULL);
}
