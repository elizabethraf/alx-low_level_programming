#include "lists.h"

/**
* print_list - check code
* @h: print elements
* Return: the number of nodes
*
**/
size_t print_list(const list_t *h)
{
	size_t len;
	len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (0);
}
