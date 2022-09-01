#include "lists.h"

/**
 * *add_dnodeint - check code
 * @head: 1st node in the list
 * @n: 2scnd node in the list
 * Return: the address or  NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);

	if ((*head) != NULL)
	(*head)->prev = new;
}
