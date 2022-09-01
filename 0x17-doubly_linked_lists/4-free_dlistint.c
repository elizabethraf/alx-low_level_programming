#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - check code
 * @head: pointer to the beginning of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = head;

	while (head != NULL)
	{
		head = head->next;
		free(next);
		next = head;
	}
}
