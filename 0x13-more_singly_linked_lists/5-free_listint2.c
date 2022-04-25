#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: list of the elements
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp1;
	tmp1 = *head;

	while (tmp1 != NULL)
	{
		tmp = tmp1->next;
		free(tmp1);
		tmp1 = tmp;
	}
	*head = NULL;
}
