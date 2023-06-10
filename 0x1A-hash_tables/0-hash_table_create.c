#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array;

	if (size == 0)
		return (NULL);
	array = calloc(1, sizeof(hash_table_t));
	if (array == NULL)
		return (NULL);
	array->size = size;
	array->array = calloc(size, sizeof(hash_table_t *));
	if (array->array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
