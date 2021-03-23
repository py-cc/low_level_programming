#include "lists.h"
/**
* print_listint - print contains of list
* @h: pointer to struct
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{

	size_t i;

	i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
