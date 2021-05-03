#include <stdio.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;

	}
	return (sum);
}
