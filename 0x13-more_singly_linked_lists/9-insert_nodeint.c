#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at index n
 * @head: pointer to head Node
 * @idx: index to be iserted at
 * @n: default data
 *
 * Return: new List head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *Node, *cur;
	unsigned int i  = 0;

	Node  = malloc(sizeof(listint_t));
	if (Node == NULL)
		return (NULL);
	Node->n = n;
	Node->next = NULL;
	if (idx == 0)
	{
		Node->next = *head;
		*head = Node;
		return (Node);
	}
	cur  = *head;
	for (i = 0; cur && i < idx; i++)
	{
		if (i == idx - 1)
		{
			Node->next = cur->next;
			cur->next = Node;
			return (Node);
		}
		cur = cur->next;

	}
	return (NULL);

}

