#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 *  of a listint_t linked list.
 * @head: head of the list
 * @index: is the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *a, *b;

	a = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && a != NULL; i++)
		{
			a = a->next;
		}
	}

	if (a == NULL || (a->next == NULL && index != 0))
	{
		return (-1);
	}

	b = a->next;

	if (index != 0)
	{
		a->next = b->next;
		free(b);
	}
	else
	{
		free(a);
		*head = b;
	}
	return (1);
}
