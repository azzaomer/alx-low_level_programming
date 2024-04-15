#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new;

	if (new != NULL)
		if (strcmp(new->key, key) == 0)
			return (new->value);
	return NULL;
}

