#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table.
 * @ht: The hash table to add/update the key/value pair.
 * @key: The key to be added/updated.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	hash_table_t *current;
	hash_table_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);

			if (new_value == NULL)
				return (0);

			free(current->value);
			current->value = new_value;
			return (1);
		}

		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
