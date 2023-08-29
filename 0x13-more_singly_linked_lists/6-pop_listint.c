#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint- deletes the head node of a listint_t linked list
 * @head: double pointer to listint_t
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!head)
	{
		return (0);
	}
	data = (*head)->n;
	*ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (data);
}
