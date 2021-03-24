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
	unsigned int i;
	listint_t *num;

	i = 0;

	if (head == NULL)
		return (NULL);

	num = malloc(sizeof(listint_t));
	if (num == NULL)
		return (NULL);

	num->n = 0;
	num->next = NULL;

	while (head != NULL)
	{
		if (i != index)
		{
			head = head->next;
			i++;
		}
		else if (i == index)
		{
			num->n = head->n;
			break;
		}
	}
	return (num);
}
