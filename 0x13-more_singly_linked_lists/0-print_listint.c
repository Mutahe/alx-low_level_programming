#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: pointer to the listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0

	while(h)
	{
		if(!h = NULL)
			printf("%d\n", h->value);
		h = h->new;
		n++;
	}

	return n;

}
