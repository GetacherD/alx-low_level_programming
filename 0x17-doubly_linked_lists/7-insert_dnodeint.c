#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: head pointer
 * @idx: index to be inserted
 * @n: new node data
 * Return: adress of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *cur;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (!h || !(*h))
	{
		*h = newNode;
		return (newNode);
	}
	cur = *h;
	while (cur)
	{
		if (i == idx)
		{
			newNode->next = cur;
			newNode->prev = cur->prev;
			(cur->prev)->next = newNode;
			cur->prev = newNode;
			return (newNode);
		}
		cur = cur->next;
		i++;
	}
	return (NULL);
}



