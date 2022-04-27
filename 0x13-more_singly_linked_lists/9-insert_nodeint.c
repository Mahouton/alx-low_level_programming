#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given  position
 * @head: pointer to the head of the list
 * @idx: position of a new node
 * @n: the value of a new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *tmp;

	tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		if (i == idx)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		i++;
		tmp = tmp->next;
	}
	return (*head);
}
