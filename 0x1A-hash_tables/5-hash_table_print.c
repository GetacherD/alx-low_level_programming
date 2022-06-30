#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Node;
	unsigned long int i = 0;
	unsigned long int is_first = 1;
	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if ((ht->array)[i])
			 {
			   
				 Node = (ht->array)[i];
				 while(Node)
				 {
					 if (!is_first)
						 printf(",");
					 printf("'%s': '%s'", Node->key, Node->value);
					 is_first = 0;
					 Node = Node->next;
					 if (Node)
						 printf(" ====printing ever collison====");
				 }
				 
			 }
		}
		printf("}\n");
	}
			
}
