#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to listint_t
 *
 * Return: next node
 */
void free_listint2(listint_t **head)
{
        while (head != NULL)
        {
                listint2 *temp = head;
		head = head->next;
		free_listint2(temp);
        }
}
