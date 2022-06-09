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

	if (idx == 0 || !(*h))
		return (add_dnodeint(h, n));
	cur = *h;
	for (i = 0; (i < idx) && cur; i++)
		cur = cur->next;
	if (cur == NULL)
		return (add_dnodeint_end(h, n));
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	(cur->prev)->next = newNode;
	newNode->next = cur;
	newNode->prev = cur->prev;
	cur->prev = newNode;

	return (newNode);
}



