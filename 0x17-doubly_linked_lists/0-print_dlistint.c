#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function print nodes
 * @h: head to double linked list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t const *current = h;
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}

	return (num);
}
