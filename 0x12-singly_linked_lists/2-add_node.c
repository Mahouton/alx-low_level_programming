#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beging of a list_t lsit.
 * @head: a pointer to the head of the list_t list
 * @str: the new node that will be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *tmp_str;
	int len;
	list_t *new_node = (list_t *) malloc(sizeof(list_t)); /*Allocate node*/

	if (new_node == NULL)
		return (NULL);

	tmp_str = strdup(str);
	if (tmp_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new_node->str = tmp_str; /*put int he data*/
	new_node->len = len;
	new_node->next = (*head); /*Make next of new node as head*/

	(*head) = new_node;

	return (new_node);
}
