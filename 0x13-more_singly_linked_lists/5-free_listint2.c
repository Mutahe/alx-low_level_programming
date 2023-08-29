#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to listint_t
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
        listint_t *current;

	if (!head)
		return;
       	while (*head != NULL)
        {
                current = *head;
		*head = (*head)->next;
		free(current);
        }
	*head = NULL;
}
