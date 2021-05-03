#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts new node at given position.
 * @h: Head of the double linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data value to insert in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = *h;
	dlistint_t *tmp_2 = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
	}
	if (tmp->next == NULL)
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	else
	{
		tmp_2 = tmp->next;
		tmp->next = new_node;
		tmp_2->prev = new_node;
		new_node->prev = tmp;
		new_node->next = tmp_2;
		new_node->n = n;
	}

	return (new_node);
}
