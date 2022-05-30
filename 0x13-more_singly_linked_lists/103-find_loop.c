#include "lists.h"
/**
 * find_listint_loop - find loop in list
 * @head: head ptr
 * Return: loop head
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	first = head;
	second = head;
	while (first)
	{
		if (first == first->next)
			return (first);

		while (second != first)
		{
			if (second == first->next)
			{
				return (second);
			}
			second = second->next;
		}
		first = first->next;
		second = head;
	}
	return (NULL);
}
