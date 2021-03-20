#include "lists.h"
/**
* len - longitud of string
* @str: string
*
* Return: longitud of string
*/
int len_string(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
* add_node - function that adds a new node at the
* beginning of a list_t list.
*
* @head: double pointer to list_t
* @str: string
* Return: head;
*/
list_t *add_node(list_t **head, const char *str)
{
	int n;
	list_t *new_node;
	n = len_string(str);

	if (*head == NULL) /* *desreferenciacion, valor de la direccion */
	{
		new_node = malloc(sizeof(list_t));
		new_node->str = strdup(str);
		new_node->len = n;
		new_node->next = NULL;
	}
	else
	{
		new_node = malloc(sizeof(list_t));
		new_node->str = strdup(str);
		new_node->len = n;
		new_node->next = *head;
	}
	*head = new_node;
	return (*head);
}
