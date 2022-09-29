#include "hash_tables.h"

/**
* hash_table_print - check code
* @ht: print the table
* Return: void
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *len;
	int count = 98;

	if ((*ht).array == NULL || ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		len = ht->array[a];
		while (len != NULL)
		{
			if (count == 1)
				printf(", ");
			printf("'%s': '%s'", len->key, len->value);
			count = 1;
			len = len->next;
			count = 1;
		}
	}
	printf("}\n");
}
