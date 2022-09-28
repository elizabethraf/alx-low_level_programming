#include "hash_tables.h"

/**
 * key_index - check code
 * @key: index of a key
 * @size: hash table size
 * Return: index for a key
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
