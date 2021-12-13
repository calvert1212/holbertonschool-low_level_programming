#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table
 *
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n = NULL;
	unsigned long int i, x;

	i = 0;
	x = 0;
	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			n = ht->array[i];
			for (; n != NULL; x++)
			{
				free(n->key);
				free(n->value);
				n = n->next;
				free(ht->array[i]);
				ht->array[i] = n;
			}
		}
		free(ht->array);
		free(ht);
	}
}
