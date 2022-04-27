#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *h = head;

	if (h == NULL)
		return;

	while (h)
	{
		free(h->str);
		free(h->next);
		h = h->next;
	}

	free(h);
}
