#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of the doubly linked list
 * @head: head node of specific doubly linked list
 * @n: value for the new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->prev = NULL;
	node->n = n;
	node->next = *head;
	
	(*head)->prev = node;
	*head = node;

	return (node);
	free(node);
}
