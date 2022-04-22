#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number elements in a linked list_t list.
 * @h: pointer to struct list_t
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	do {
		h = h->next;
		n++;
	} while (h != NULL);

	return (n);
}

