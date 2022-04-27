#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h = head;
	listint_t *temp;

	if (h == NULL)
		return;

	while (h->next)
	{
		temp = h->next;
		free(h);
		h = temp;
	}

	free(h);
}
