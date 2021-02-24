#include "holberton.h"
/**
* _print_rev_recursion - prints a string in reverse with recursion
* @s: pointer to a string
*
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}

	if (*s != '\0')
	{
		_putchar(*s++);
	}
	else
	{
		return;
	}
}
