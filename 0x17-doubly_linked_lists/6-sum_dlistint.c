#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Function returns sum of all the data of a double linked list.
 * @head: Head of the double linked list.
 *
 * Return: The sum of all the data (n).
 */
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
