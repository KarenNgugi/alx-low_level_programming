#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *h = head;
	list_t *temp;

	if (h == NULL)
		return;

	while (h->next)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}

	free(h->str);
	free(h);
}
