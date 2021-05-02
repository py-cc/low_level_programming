#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Returns number of elements in a double linked list.
 * @h: Head of the double linked list.
 *
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	dlistint_t const *current = h;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		num_nodes++;
		current = current->next;
	}

	return (num_nodes);
}
