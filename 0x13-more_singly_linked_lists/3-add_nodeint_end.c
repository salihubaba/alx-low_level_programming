#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of the list
 * @n: no of elements
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *s;

	(void)s;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	s = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (s->next != NULL)
		{
			s = s->next;
		}
		s->next = new;
	}
	return (*head);
}

