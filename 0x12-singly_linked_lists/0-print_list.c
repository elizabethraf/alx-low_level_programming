#include "lists.h"

/**
* print_list - check code
* @h: print elements
* Return: the number of nodes
*
**/
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while ( h != NULL)
	{
		if (h->next == NULL)
			printf("[0] (nil)");
	{
		printf ("[%d", list_t *h);
	}
	h = h->next;
	}
	return (count);
}

