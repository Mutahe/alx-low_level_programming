#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: points to the first node
 * Return: 0 if empty, else return sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
