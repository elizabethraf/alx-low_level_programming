#include "lists.h"

/**
 * add_node - check code
 * @head: 1st node in the list
 * @str: 2scnd node in the list
 * Return: the address or  NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
