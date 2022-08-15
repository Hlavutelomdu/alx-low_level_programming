#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the 1st node in the list
 * @n: data to insert
 *
 * Return: num of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *heah;
	*head = new;

	return (new);
}
