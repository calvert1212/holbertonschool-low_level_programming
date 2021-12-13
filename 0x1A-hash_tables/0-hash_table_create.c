#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: the size of table
 * Return: the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nt = malloc(sizeof(hash_table_t));
	hash_node_t **arr = malloc(sizeof(hash_node_t *) * size);

if (nt == NULL)
	return (NULL);
if (arr == NULL)
	return (NULL);

nt->size = size;
nt->array = arr;
return (nt);
}
