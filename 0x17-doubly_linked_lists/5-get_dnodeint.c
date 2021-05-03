#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Function returns nth node of double linked list.
 * @head: Head of the double linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: address of nth node of double linked list. NULL if does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *tmp = head;
	unsigned int i = 0;

	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (head)
	{
		while (i < index)
		{
			tmp = tmp->next;
			i++;
		}
		new_node->n = tmp->n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	return (new_node);
}
