#include "lists.h"

/**
 * free_list - check code
 * @head: linked list
 * Return: nothing to return
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (1)
	{
		if (head == NULL)
			break;

		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
