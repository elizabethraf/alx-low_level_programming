#include "lists.h"

/**
* *reverse_listint - code check
* @head: reverse list
* Return: a pointer to the first node;
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t len;
	len = *head;

	len = malloc(sizeof(listint_t));

	if (len == 0 || *head == NULL)
			return (0);

	len = reverse_recur(len, NULL);
		return (*len);
}
