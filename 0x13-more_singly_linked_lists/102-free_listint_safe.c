#include "lists.h"

/**
* free_listint_safe - check code
* @h: function frees the lists with loop
* Return: the size of the list of the list that was freed
**/
void free_listint_safe(listint_t *head)
{
	listint_t *current, *len, *head;
	size_t i, r;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	head = *h;
	i = 0;

	while (head != NULL)
	{
		len = *h;
		for (r = 0; r < i; r++)
		{
			if (len == current)
			{
				*h = NULL;
				return (i);
			}
			len = len->next;
		}
		current = head->next;
		free(head);
		head = current;
		i++;
	}
	*h = NULL;
	return (i);
}
