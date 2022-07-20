#include "lists.h"

/**
* *reverse_listint - code check
* @head: reverse list
* Return: a pointer to the first node;
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pt, *prev = NULL;

	ptr = first;
	while (ptr->next != second)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = ptr->next;
	if (first != ptr && second != first)
		second = reverse_recur(second, first);
	ptr->next = second;
	return (ptr);
}
	listint_t *ptr, *prev = NULL;

	ptr = first;
	while (ptr->next != second)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = ptr->next;
	if (first != ptr && second != first)
		second = reverse_recur(second, first);
	ptr->next = second;
	return (ptr);
}

{
	listint_t len;
	len = *head;

	len = malloc(sizeof(listint_t));

	if (len == 0 || *head == NULL)
			return (0);

	len = reverse_recur(len, NULL);
		return (*len);
}
