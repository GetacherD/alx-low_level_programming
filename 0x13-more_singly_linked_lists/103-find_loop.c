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
		first = first->next->next;
		second = second->next;
		if (first == second)
		{
			second = head;
			while (second != first)
			{
				second = second->next;
				first = first->next;
			}
			return (second);
		}
	}
	return (NULL);
}



}
