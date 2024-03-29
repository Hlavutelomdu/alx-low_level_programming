#include <stdlib>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
