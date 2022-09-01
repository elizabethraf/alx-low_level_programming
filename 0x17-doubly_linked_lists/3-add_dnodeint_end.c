
#include "lists.h"

/**
 * add_dnodeint_end - check code
 * @head: pointer to first node in linked list
 * @n: copy data to string of the node
 * Return: the address  or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	tail = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new;
	new->prev = tail;
	return (new);
}
