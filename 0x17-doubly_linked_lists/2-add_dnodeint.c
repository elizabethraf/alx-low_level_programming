#include "lists.h"

/**
 * *add_dnodeint - check code
 * @head: 1st node in the list
 * @n: 2scnd node in the list
 * Return: the address or  NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}
	return (new);
}
