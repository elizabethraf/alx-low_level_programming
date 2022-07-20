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
	unsigned int idx;
	int i;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		current_node = *head;
		for (i = 0; i < idx - 1 && current_node != NULL; i++)
		{
			current_node = current_node->next;
		}

	if (current_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
			return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
