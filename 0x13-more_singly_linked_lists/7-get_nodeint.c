#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to the node of a listint_t list
 * @index: the index of the node, starting at O.
 *
 * Return: the nth node, or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
