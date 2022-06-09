#include "lists.h"
/**
 * add_dnodeint - add node at begining
 * @head: head pointer
 * @n: new node data
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!head || !(*head))
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	}
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (newNode);
}
