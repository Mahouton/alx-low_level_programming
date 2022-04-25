#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the listint_t list
 * @n: the new node that will be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
