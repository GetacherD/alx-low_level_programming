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
	cur = *h;

	for (i = 0; (i < idx) && cur; i++)
		cur = cur->next;
	if (cur)
	{
		newNode->prev = cur->prev;
		newNode->next = cur;
		if (i == 0)
		{
			newNode->prev = NULL;
			(*h)->prev = newNode;
			*h = newNode;
		}
		(cur->prev)->next = newNode;
		cur->prev = newNode;
		return (newNode);
	}
	if (i == 0)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}



