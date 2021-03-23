#include "lists.h"
/**
* free_listint - function that frees a listint_t list
* @head: pointer to list
*
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
