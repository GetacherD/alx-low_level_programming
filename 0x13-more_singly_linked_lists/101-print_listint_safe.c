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
}

/**
 * print_listint_safe - print linked list safely
 * @head: head pointer
 * Return: Number of Nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t Nodes = 0;
	listint_t *first, *second;

	printf("[%p] %d\n", (void *)head, head->n);
	first = head->next;
	second = head->next;

	if (first == head)
	{
		printf("-> [%p] %d\n", (void *)first, first->n);
		return (1);
	}
	Nodes++;
	while (first)
	{
		if (first == first->next)
		{
			printf("-> [%p] %d\n", (void *)first, first->n);
			return (Nodes);
		}
		while (second != first)
		{
			if (second == first->next)
			{
				printf("-> [%p] %d\n", (void *)second, second->n);
				return (Nodes);
			}
			second = second->next;
		}
		printf("[%p] %d\n", (void *)first, first->n);
		second = head->next;
		first = first->next;
		Nodes++;
	}
	return (Nodes - 1);
}
