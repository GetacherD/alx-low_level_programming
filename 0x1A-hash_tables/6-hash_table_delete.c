#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *Node, *cur;

	for (i = 0; i < ht->size; i++)
	{
		if((ht->array)[i])
		{
			cur = (ht->array)[i];
			while (cur)
			{
				Node = cur->next;
				free(cur->key);
				free(cur->value);
				free(cur);
				cur = Node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
