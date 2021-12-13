#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 *
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n = NULL;
	unsigned long int i = 0, x = 0;
	char *new = ", ", *del = "";

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			n = ht->array[i];
			for (; n != NULL; x++)
			{
				printf("%s", del);
				printf("'%s': '%s'", n->key, n->value);
				del = new;
				n = n->next;
			}
		}
		printf("}\n");
	}
}
