#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to listint_t
 *@index: index where the node returns

 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *current = head;

	while (current && num < index)
{
	current = current->next;
		num++;
}
return (current ? current : NULL);
}
