#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to last head.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	tmp = *head;

	if (tmp != NULL)
	{
		i = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (i);
}
