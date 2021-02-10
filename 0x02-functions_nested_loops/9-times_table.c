#include "holberton.h"

/**
* times_table - print the 9 times table
*
*/

void times_table(void)
{
int i, j, mult;
for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{

	mult = i * j;

	if (j == 0)
	{
	_putchar(0 + '0');
	}
	else if (mult <= 9)
	{
		_putchar(' ');
		_putchar(mult % 10 + '0');
	}
	else
	{
		_putchar(mult / 10 + '0');
		_putchar(mult % 10 + '0');
	}

	if (j != 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
	}
	}
}
