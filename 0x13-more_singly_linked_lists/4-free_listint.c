#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to listint_t
 *
 * Return:
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;
		head = head->next;
		free(temp);
	}
}
