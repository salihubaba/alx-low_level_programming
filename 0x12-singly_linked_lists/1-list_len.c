#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: head of the linked list
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
