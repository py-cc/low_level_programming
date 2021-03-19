#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: list to print.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	if (h)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}

	return (i);
}
