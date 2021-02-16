#include "holberton.h"
/**
* puts_half - prints half of a string
* @str: check pointer string
*
*/
void puts_half(char *str)
{

	int len, count = 0, n;

	for (len = 0; str[len] != '\0'; len++)
		count++;

	if (count % 2 != 0)
		count++;

	for (n = count / 2; n <= count; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
