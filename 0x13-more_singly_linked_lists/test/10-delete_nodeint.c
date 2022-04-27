#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t
 * @head: pointer to the list of node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *tmp = *head;
	unsigned int i;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	del = tmp->next;
	tmp->next = del->next;
	free(del);
	return (1);
}
