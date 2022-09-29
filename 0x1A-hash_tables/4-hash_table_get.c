#include "hash_tables.h"

/**
* hash_table_get - check code
* @key: retrieve a value associated with a key
* @ht:  value of a key
* Return: the value or NULL if key couldn't be found
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *len;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, (*ht).size);
	len = (*ht).array[index];
	while (len != NULL)
	{
		if (strcmp(len->key, key) == 0)
			return (len->value);
		len = len->next;
	}
	return (NULL);
}
