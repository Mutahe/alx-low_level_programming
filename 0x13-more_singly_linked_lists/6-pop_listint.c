#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - deletes the head node of a listint_t linked list
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
		return(0);
	}
	data = (*head)->n;
	*ptr = (*head)->next;

	free(*head);
	
	return (data);
}
