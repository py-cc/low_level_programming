#include "holberton.h"
/**
* _puts_recursion - prints a string, followed by new line
*
* @s: pointer to string
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + 1);
	}
}
