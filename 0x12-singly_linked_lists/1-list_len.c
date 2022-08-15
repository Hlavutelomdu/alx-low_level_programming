#include "lists.h"

/**
 * list_len - returns the number ofelements in a linked list
 * @h: pointer to the list
 *
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
