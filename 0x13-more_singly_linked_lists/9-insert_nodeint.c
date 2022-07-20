#include "lists.h"

/**
* *insert_nodeint_at_index - check code
* @n: insert new node
* @idx:insert new node
* @head: given position
* Return: address of new node or NULL if failed
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node, *new_node;
	unsigned int index = idx;

	current_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (index == 0)
	{
		new_node->next = current_node;
		*head = new_node;
		return (*head);
	}
	while (index >= 1)
	{
		current_node = current_node->next;
		index--;
		if (!current_node)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
