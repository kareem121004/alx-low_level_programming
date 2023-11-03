#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(tmp->key);
			free(temp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
