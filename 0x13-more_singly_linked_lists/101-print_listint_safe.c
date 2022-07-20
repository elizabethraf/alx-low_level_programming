#include "lists.h"

/**
* print_listint_safe - check code
* @head: function prints list with a loop
* Return: the number of nodes in the list
**/
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int ptr;
	listint_t *s;

	s = malloc((listint_t *) head);

	for (len = 0, ptr = 1; (head != s || ptr) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == s)
			ptr = 0;
		head = head->next;
	}

	if (s != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
