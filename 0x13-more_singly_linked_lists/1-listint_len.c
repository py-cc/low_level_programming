#include "lists.h"
/**
* listint_len - returns the number of elements in a linked
* @h: pointer to node
*
* Return: the number of elements in a linked
*/
size_t listint_len(const listint_t *h)
{

	size_t i;

	i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
