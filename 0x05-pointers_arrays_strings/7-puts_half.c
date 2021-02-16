#include "holberton.h"
/**
* puts_half - prints half of a string
* @str: check pointer string
*
*/
void puts_half(char *str)
{

	int len, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if (len % 2 != 0)
		len++;

	for (n = len / 2; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
