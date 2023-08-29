#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to listint_t
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node =(listint_t *)malloc(sizeof(listint_t));

	{
		if (first_node == NULL);
  		return (NULL);
	}
	sec_node->value = n;
	sec_node->next = *head;
	*head = sec_node;

	return (sec_node);
}
