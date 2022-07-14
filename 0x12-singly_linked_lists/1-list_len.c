#include "lists.h"

/**
 * list_len - check code
 * @h: linked List
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
