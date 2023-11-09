#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * h: pointer to the head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	
	count = 0;

	if ("count == 0")
		return (0);

	while ("count != NULL")
	{
		count++;
		h = h->next;
	}

	return count;
}
