#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
 * Return: nothing to return.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *table;
	unsigned long int idx = 0;
	int not_found = 0;

	if (!ht)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		table = ht->array[idx];
		while (table)
		{
			if (not_found)
				printf(", ");
			printf("'%s': '%s'", table->key, table->value);
			not_found = 1;
			table = table->next;
		}
	}
	printf("}\n");
}
