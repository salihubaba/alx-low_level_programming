#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list
 *
 * Return: The head nodes data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *s;
	listint_t *j;

	if (*head == NULL)
		return (0);

	s = *head;

	hnode = s->n;

	j = s->next;

	free(s);

	*head = j;

	return (hnode);
}
