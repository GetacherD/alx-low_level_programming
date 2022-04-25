#include "lists.h"
/**
 * get_nodeint_at_index - get nth node index
 * @head: head Node
 * @index: index of nth Node
 *
 * Return: nth Node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	i = 0;
	ptr = head;
	while (ptr && (i <= index))
	{
		i++;
		ptr = ptr->next;
	}

	if ((i - 1) == index)
		return (ptr);
	else
		return (NULL);
}



