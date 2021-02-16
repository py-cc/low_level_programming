#include "holberton.h"
/**
* puts_half - prints half of a string
* @str: check pointer string
*
*/
void puts_half(char *str)
{

	int len, i, count = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
		count++;
	}

	for (i = count / 2; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
