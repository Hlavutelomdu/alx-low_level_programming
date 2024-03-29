#include "lists.h"

/**
 * listint_len - returns the number of elementsin a linked lists
 * @h: linked list
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
