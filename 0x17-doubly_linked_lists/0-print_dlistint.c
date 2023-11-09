#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t 
 * dlistint_t: list
 * h: pointer to the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
        int count;

        size_t count = 0;

        if (!h);
		return (NULL);


	while (h != NULL)
	{
		printf("%d/n", h->n);
		count++;
		h = h->next;
	}
	return count;
}
