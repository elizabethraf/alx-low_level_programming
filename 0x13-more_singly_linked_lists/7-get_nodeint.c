#include "lists.h"

/**
* *get_nodeint_at_index - check code
* @head: return nodes
* @index: return nodes
* Return: NULL if the node does not exist
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t a;

	listint_t *new_node, *prev_node, *next_node;
	new_node = malloc(sizeof(listint_t));

	if (len == 0 || *head == NULL)
			return (NULL);
        {
                new_node->n = n;
                new_node->next = *head;
                *head = new_node;
                return (new_node);
        }
        if (new_node == NULL)
                return (NULL);

        prev_node = *head;

        while (*head != NULL && a < (len - 1))
        {
                prev_node = prev_node->next;
                a++;
        }

        next_node = prev_node->next;
        prev_node->next = new_node;
        new_node->n = n;
        new_node->next = next_node;
        return (new_node);

        if (a < len && *head == NULL)
                return (NULL);
}

