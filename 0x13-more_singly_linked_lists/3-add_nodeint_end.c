#include "lists.h"
/**
* add_nodeint_end - function that adds a new node at the end of a list
* @head: points to the next node
* @n: integer
*
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		tmp = *head; /* no perder el puntero */
		new_node->n = n;
		new_node->next = NULL;
		if (tmp == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next; /* recorrerlo */
			}
			tmp->next = new_node; /* añadir un nuevo nodo*/
		}
		return (new_node);
	}
	return (NULL);
}
