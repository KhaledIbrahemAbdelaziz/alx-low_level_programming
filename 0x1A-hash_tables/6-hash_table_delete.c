#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 * Return: nothong to return.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *table, *frees;
	unsigned long int idx = 0;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		table = ht->array[idx];
		while (table)
		{
			frees = table;
			table = table->next;
			if (frees->key)
				free(frees->key);
			if (frees->value)
				free(frees->value);
			free(frees);
		}
	}
	free(ht->array);
	free(ht);
}
