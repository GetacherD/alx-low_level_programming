#include "hash_tables.h"
/**
 * _strcmp - comapre strings
 * @src: first string
 * @dest: second string
 * Return: 1 if equal else -1
 */
int _strcmp(char *src, const char *dest)
{
	int i = 0;

	while (src[i] && dest[i])
	{
		if (src[i] != dest[i])
			return (-1);
		i++;
	}
	if (src[i] == '\0' && dest[i] == '\0')
		return (1);
	return (-1);
}
/**
 * _strcpy -copy strings
 * @src: source str
 * @dest: destination str
 */
void _strcpy(const char *src, char *dest)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/**
 * _strlen - return length of string including null terminator
 * @s: string to be cheked
 * Return: length(number of chars)
 */
int _strlen(const char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);
	while (s[i])
		i++;
	return (i + 1);
}
/**
 * hash_table_set - add new element to table
 * @ht: hash table
 * @key: key to be added
 * @value: value of the key
 * Return: 1 if success 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *Node = NULL, *cur = NULL;

	if (key == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	Node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (Node == NULL)
		return (0);
	if ((ht->array)[i] == NULL)
	{
		Node->key = (char *)malloc(sizeof(char) * _strlen(key));
		if (Node->key == NULL)
		{
			free(Node);
			return (0);
		}
		Node->value = (char *)malloc(sizeof(char) * _strlen(value));
		if (Node->value == NULL)
		{
			free(Node->key);
			free(Node);
			return (0);
		}
		Node->next = NULL;
		_strcpy(key, Node->key);
		_strcpy(value, Node->value);
		(ht->array)[i] = Node;
	}
	else
	{
		cur = (ht->array)[i];
		while (cur && _strcmp(cur->key, key)  != 1)
			cur = cur->next;
		if (cur == NULL)
		{
			Node->key = (char *)malloc(sizeof(char) * _strlen(key));
			if (Node->key == NULL)
			{
				free(Node);
				return (0);
			}
			Node->value = (char *)malloc(sizeof(char) * _strlen(value));
			if (Node->value == NULL)
			{
				free(Node->key);
				free(Node);
				return (0);
			}
			_strcpy(key, Node->key);
			_strcpy(value, Node->value);
			Node->next = (ht->array)[i];
			(ht->array)[i] = Node;
		}
		else
		{
			free(cur->value);
			cur->value = (char *)malloc(sizeof(char) * _strlen(value));
			if (cur->value == NULL)
			{
				free(Node->key);
				free(Node);
				return (0);
			}
			_strcpy(value, cur->value);
		}
	}
	return (1);
}
