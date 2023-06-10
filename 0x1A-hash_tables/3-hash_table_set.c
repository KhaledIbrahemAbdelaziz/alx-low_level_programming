#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key.
 * value must be duplicated.
 * value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *table, *new_ele;
	char *valuecpy, *keycpy;
	unsigned long int idx = 0;

	if (!ht || !key || !*key || !value)
		return (0);
	valuecpy = strdup(value);
	if (!valuecpy)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	table = ht->array[idx];
	while (table)
	{
		if (!strcmp(key, table->key))
		{
			free(table->value);
			table->value = valuecpy;
			return (1);
		}
		table = table->next;
	}
	new_ele = calloc(1, sizeof(hash_node_t));
	if (new_ele == NULL)
	{
		free(valuecpy);
		return (0);
	}
	keycpy = strdup(key);
	if (!keycpy)
		return (0);
	new_ele->key = keycpy;
	new_ele->value = valuecpy;
	new_ele->next = ht->array[idx];
	ht->array[idx] = new_ele;
	return (1);
}
