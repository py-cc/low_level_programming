#include <stdio.h>
#include "lists.h"

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
