#include "holberton.h"
/**
* puts2 - prints character of a string
* @str: pointer check string
*
*/
void puts2(char *str)
{
	int i, j, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	for (j = 0; j <= count; j++)
	{
		if (j < count)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
