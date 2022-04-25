#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the element of a listint_t list
 * @h: nodes that will be printed
 *
 * Return: the numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}

