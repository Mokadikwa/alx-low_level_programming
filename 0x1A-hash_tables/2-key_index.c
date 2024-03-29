#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key
 * @key: the key
 * @size: size of the array
 *
 * Return:  the index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
