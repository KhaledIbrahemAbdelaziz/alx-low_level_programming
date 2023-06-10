#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *table;

	if (!key || !ht || !*key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	table = ht->array[idx];
	while (table)
	{
		if (!strcmp(key, table->key))
			return (table->value);
		table = table->next;
	}
	return (NULL);
}
