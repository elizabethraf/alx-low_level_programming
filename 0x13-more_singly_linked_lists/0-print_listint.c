#include "lists.h"

/**
* print_listint - check code
* @h: print the elements
* Return: the number of node
**/
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		len++;
	}
	return (len);
}
