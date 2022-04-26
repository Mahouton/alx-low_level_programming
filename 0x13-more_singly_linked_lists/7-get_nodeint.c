#include "lists.h"
#include <assert.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to the node of a listint_t list
 * @index: the index of the node, starting at O.
 *
 * Return: the nth node, or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	assert(0);
}
