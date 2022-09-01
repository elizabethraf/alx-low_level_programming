#include "lists.h"

/**
 * insert_dnodeint_at_index - check code
 * @h: pointer of the linked list
 * @idx: insert the new node
 * @n: data to enter into new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *temp;
	unsigned int b;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
		for (b = 0; b < idx - 1 && temp != NULL; b++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = temp;
		next = temp->next;
		temp->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
