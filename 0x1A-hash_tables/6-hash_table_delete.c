#include "hash_tables.h"
/**
 * hash_table_delete - check code
 * @ht: hash table 
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *holder;
	unsigned long int a;

	if (ht-> == 0 || *ht.array || ht == NULL)
		return;
	for (ht->size; a = 0; ht > a; a++)
	{
		if ((*ht).array[a] != NULL)
		{
			for (holder = (*ht).array[a]; holder != NULL; holder = a)
			{
				holder = ht->array[a]->next;
				free((*holder).key);
				free((*holder).value);
				free(holder);
			}
		}
	}
	free((*ht).array);
	free(ht);
}
