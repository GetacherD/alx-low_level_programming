#include "lists.h"
/**
 * find_listint_loop - find loop in list
 * @head: head ptr
 * Return: loop head
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (head == NULL)
		return (NULL);
	first = head;
	second = head;
	while (first)
	{
		if (first == first->next)
		{
			return (first);
		}
		while (second != first)
		{
			if (second == first->next)
			{
				return (second);
			}
			second = second->next;
		}
		second = head;
		first->first->next;
	}
	return (NULL);
}
