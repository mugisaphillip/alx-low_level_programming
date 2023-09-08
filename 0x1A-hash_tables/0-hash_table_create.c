#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	struct hash_table_s *h_table;
	unsigned long int idx;

	if (size <= 0)
		return (NULL);

	h_table = malloc(sizeof(struct hash_table_s));
	if (h_table == NULL)
		return (NULL);

	h_table->array = malloc(sizeof(struct hash_node_s *) * size);
	if (h_table->array == NULL)
		return (NULL);
	h_table->size = size;
	/* set all array entries to NULL */
	for (idx = 0; idx < size; idx++)
		h_table->array[idx] = NULL;
	return (h_table);
}
