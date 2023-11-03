#include "hash_tables.h"

/**
 * key_index - Function that gives the index of a key.
 * @key: key value
 * @size: size of the array of the hash table
 *
 * Return: The index of the key.
 * Description: Using the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
