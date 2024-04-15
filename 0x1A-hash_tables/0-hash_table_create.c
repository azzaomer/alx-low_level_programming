#include "hash_tables.h"

hash_table_t* create_table(int size)
{
    // Creates a new HashTable.
    hash_table_t* table = malloc(sizeof(hash_table_t));
    unsigned long int i;

    if (table == NULL)
	    return (NULL);

    table->size = size;
    table->array = malloc(sizeof(hash_node_t*) * size);
    if (table->array == NULL)
	    return (NULL);
    for (i = 0; i < size; i++)
        table->array[i] = NULL;

    return table;
}
