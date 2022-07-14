#include "lists.h"

/**
 * add_node_end - check code
 * @head: pointer to first node in linked list
 * @str: copy data to string of the node
 * Return: the address  or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (1)
		{
			if (tail->next == NULL)
			{
				tail->next = new;
				break;
				}
			tail = tail->next;
		}
	}
	return (new);
}
