#include "lists.h"

/**
* *get_nodeint_at_index - check code
* @head: return nodes
* @index: return nodes
* Return: NULL if the node does not exist
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;

	for (len = 0; len < index; len++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;

	}
	return (head);
}
