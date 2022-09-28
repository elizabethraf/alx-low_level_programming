#include "hash_tables.h"

/**
* hash_table_create - check code
* @size: the size of the arrary
* Return: a pointer to the newly created table else NULL
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (size == 0 || hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(size * sizeof(hash_table_t *));
	if (!(*hash).array)
	{
		free(hash);
		return (NULL);
	}
	return (hash);

}


