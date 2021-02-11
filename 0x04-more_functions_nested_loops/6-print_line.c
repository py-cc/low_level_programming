#include "holberton.h"
/**
 * print_line - prints the numbers from 0 to 14
 *
 * @n: is the number of times the character _ should be printed
 */
void print_line(int n)
{

	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
