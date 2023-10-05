#include "hash_tables.h"

/**
 * create_node_node - creates new node
 * @key: the key
 * @value: value associated with key
 *
 * Return: node
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	
	return (node);
}

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table to add or update the key/value pair
 * @key: The key to add (cannot be an empty string)
 * @value: The value associated with the key (can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	
	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	
	index = key_index((const unsigned char *)key, ht->size);
	new_node = create_hash_node(key, value);
	
	if (new_node == NULL)
		return (0);
	
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
