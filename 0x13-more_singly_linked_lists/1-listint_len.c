#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: list of elements in a linked listint_t
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
