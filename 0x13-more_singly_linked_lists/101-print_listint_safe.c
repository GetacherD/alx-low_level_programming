#include "lists.h"
/**
 * print_listint_safe - print linked list safely
 * @head: head pointer
 * Return: Number of Nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t Nodes = 0;
	listint_t *cur;
	int i = 0, j = 0;
	listint_t *buf[1024];

	for (i = 0; i < 1024; i++)
		buf[i] = NULL;

	if (head == NULL)
		exit(98);
	printf("[%p] %d\n", (void *)head, head->n);
	i = 0;
	cur = head->next;
	Nodes++;
	buf[i] = cur;
	while (cur)
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		cur = cur->next;
		for (j = 0; j <= i; j++)
			if (buf[j] == cur)
			{
				printf("-> [%p] %d\n", (void *)cur, cur->n);
				exit(98);
			}
		i++;
		buf[i] = cur;
		Nodes++;
	}
	return (Nodes);
}
