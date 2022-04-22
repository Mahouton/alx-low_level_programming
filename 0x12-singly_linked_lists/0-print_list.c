#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to struct list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	do {
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	} while (h != NULL);
	return (n);
}

