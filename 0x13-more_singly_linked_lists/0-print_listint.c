#include "lists"

/**
 * print_listint - prints all element of linked list
 * @h: linked list
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}