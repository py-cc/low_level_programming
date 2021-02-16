#include "holberton.h"
/**
* print_rev - prints a string, in revers
*
* @s: check string
*/
void print_rev(char *s)
{
	int len = 0, rev, n;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	n = len;

	for (rev = n - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
