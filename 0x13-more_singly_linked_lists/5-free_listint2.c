#include "lists.h"

/**
 * free_listint2 - frees linked list and sets head node to NULL
 * @head: pointer to linked list node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h = *head;
	listint_t *temp;

	if (h == NULL)
		return;

	while (h->next)
	{
		temp = h->next->next;
		free(h->next);
		h->next = temp;
	}

	h = NULL;
	free(h);
}
