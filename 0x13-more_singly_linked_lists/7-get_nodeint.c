#include "lists.h"
/**
* get_nodeint_at_index - that returns the nth node of a listint_t linked list.
* @head: pointer to node
* @index: index return
*
* Return: node to allocated value index;
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
