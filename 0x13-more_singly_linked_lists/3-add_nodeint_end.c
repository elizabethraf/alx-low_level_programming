#include "lists.h"

/**
* *add_nodeint_end - check code
* @n: add new nodes at the end
* @head: adding list at the end
* Return: address or NULL if it failed
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		current_node = *head;
	while (current_node->next)
		current_node = current_node->next;

		current_node->next = new_node;
	}
	return (*new_node);
}

