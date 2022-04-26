#include "lists.h"

/**
 * add_node - add node to beginning of linked list
 * @head: position to add
 * @str: string to add
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (str == NULL)
	{
		node->str = "(nil)";
		node->len = 0;
	}

	else
	{
		node->str = strdup(str);
		node->len = strlen(str);
	}
	node->next = *head;

	return (node);
	free(node);
}
