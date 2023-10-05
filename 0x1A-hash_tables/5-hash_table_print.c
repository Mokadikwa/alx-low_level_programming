#include "hash_tables.h"

/**
 * custom_print - acts as a custom printf function
 * @str: string to print
 */

void custom_print(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
		len++;

	write(1, str, len);
}

/**
 * hash_table_print - a function that prints a hash table
 * @ht: is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag;
	hash_node_t *node;
	char buffer[1024];

	flag = 0;

	if (ht == NULL)
		return;

	custom_print("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				custom_print(", ");

			snprintf(buffer, sizeof(buffer), "'%s': '%s'", node->key, node->value);
			custom_print(buffer);
			flag = 1;
			node = node->next;
		}
	}

	custom_print("}\n");
}
