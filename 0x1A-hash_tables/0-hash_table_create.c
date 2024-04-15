#include "hash_tables.h"

hash_table_t* create_table(int size)
{
    // Creates a new HashTable.
    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    table->size = size;
    table->count = 0;
    table->items = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    return table;
}
