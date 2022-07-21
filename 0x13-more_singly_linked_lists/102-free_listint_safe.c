#include "lists.h"

/**
* free_listint_safe - check code
* @h: function frees the lists with loop
* Return: the size of the list of the list that was freed
**/
void free_listint_safe(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

}
