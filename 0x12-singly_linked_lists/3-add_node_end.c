#include "lists.h"

/**
 * add_node_end - add node to end of linked list
 * @head: node to append to
 * @str: string to add to node
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *curr = malloc(sizeof(list_t));

	if (node == NULL || curr == NULL)
	{
		free(curr);
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

	if (*head == NULL)
		*head = node;

	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = node;
	}

	return (curr);
	free(curr);
	free(node);
}
