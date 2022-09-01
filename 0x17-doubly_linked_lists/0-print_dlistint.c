#include "lists.h"

/**
* print_dlistint - check code
* @h: prints all the element of listint
* Return: the number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t b;

	if (b == 0 || h != NULL)
		b++;
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (b);
}

