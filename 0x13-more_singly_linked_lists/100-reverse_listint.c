#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL, *b = NULL;

	while (*head != NULL)
	{
		a = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = a;
	}
	*head = b;
	return (*head);
}
