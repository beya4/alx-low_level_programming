#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = calloc(1, sizeof(hash_table_t));

if (hash_table == NULL)
return (NULL);

hash_table->array = calloc(size, sizeof(hash_node_t *));
hash_table->size = size;

if (hash_table->array == NULL)
{
free(hash_table);
return (NULL);
}

return (hash_table);
}
