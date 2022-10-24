#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head of thr list
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}
}

