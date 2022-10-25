#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *s;
	listint_t *p;

	if (head != NULL)
	{
		p = *head;
		while ((s = p) != NULL)
		{
			p = p->next;
			free(s);
		}
		*head = NULL;
	}
}

