#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of list_t
 * @head - double pointer to list_t
 * @str - string to add node
 *
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == 0)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
