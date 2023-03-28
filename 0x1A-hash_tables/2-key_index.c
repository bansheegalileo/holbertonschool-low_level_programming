#include "hash_tables.h"

/**
 * key_index - get index at which a pair will b stord
 *
 * @key: key to get indexof
 *
 * @size: arr sixe on ht
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
