#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new nodeat the beginningvof linked list
 * @head: double pointer to list
 * @str: new string to add
 *
 * Return: the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t Pnew;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);

