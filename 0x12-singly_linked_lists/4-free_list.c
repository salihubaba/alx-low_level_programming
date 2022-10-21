#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new->str);
		free(new);
	}
}
