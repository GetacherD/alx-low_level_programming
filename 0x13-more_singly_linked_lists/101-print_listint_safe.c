#include "lists.h"
/**
* base_16 - print num in base 16
* @n: decimal number
*/
void base_16(unsigned long int n)
{
	if (n < 16)
	{
		if (n > 9)
			_putchar(n - 9 - 1 + 'a');
		else
			_putchar(n + '0');
	}
	else
	{
		base_16(n / 16);
		if (n % 16 > 9)
			_putchar((n % 16) - 10 + 'a');
		else
			_putchar((n % 16) + '0');
	}
}
/**
* print_int - print int
* @n: decimal num
*/

void print_int(int n)
{
	if (n < 10)
		_putchar(n + '0');
	else
	{
		print_int(n / 10);
		_putchar(n % 10 + '0');
	}
}
/**
* print_hex - print num in base 16
* @n: decimal num
* @y: num 2 in decimal
*/


void print_hex(unsigned long int n, int y)
{
	_putchar('[');
	_putchar('0');
	_putchar('x');
	base_16(n);
	_putchar(']');
	_putchar(' ');
	print_int(y);
	_putchar('\n');
}
/**
* __exit - print num in base 16 and exit
* @n: decimal num
* @y: decimal num 2
*/

void __exit(unsigned int n, int y)
{
	_putchar('-');
	_putchar('>');
	_putchar(' ');
	print_hex(n, y);
	exit(98);
}

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
	unsigned long int n;
	listint_t *buf[1024];

	for (i = 0; i < 1024; i++)
		buf[i] = NULL;
	if (head == NULL)
		exit(98);
	n = (unsigned long int)(void *)head;
	print_hex(n, head->n);
	i = 0;
	cur = head->next;
	if (cur == head)
	{
		n = (unsigned long int)(void *)head;
		print_hex(n, head->n);
		exit(98);
	}
	Nodes++;
	buf[i] = cur;
	while (cur)
	{
		n = (unsigned long int)(void *)cur;
		print_hex(n, cur->n);
		cur = cur->next;
		for (j = 0; j <= i; j++)
			if (buf[j] == cur)
			{
				n = (unsigned long int)(void *)cur;
				__exit(n, cur->n);
			}
		i++;
		buf[i] = cur;
		Nodes++;
	}
	return (Nodes);
}
