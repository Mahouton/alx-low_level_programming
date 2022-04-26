#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: the head node that will be deleted
 *
 * Return: the head node's data(n),
 * 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del;

	/*If linked list is empty*/
	if (*head == NULL)
		return (0);

	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (del);
}
