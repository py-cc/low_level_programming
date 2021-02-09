#include "holberton.h"

/**
* print_alphabet - print alphabet with function putchar
*
* Return: Nothing
**/

void print_alphabet(void)
{

	/* variable local*/
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
