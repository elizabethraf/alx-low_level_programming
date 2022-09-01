#include "lists.h"

/**
* print_dlistint - check code
* @h: prints all the element of listint
* Return: the number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t b;

	b = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		b++;
	}
	return (b);
}

