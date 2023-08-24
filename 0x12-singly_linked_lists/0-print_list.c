#include "lists.h"

/**
 * print_list - prints the elements
 * @h - pointer to list_t list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h == NULL)
			print ("[0] (nil)\n");
		else 
			print ("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	Return (count);
}
