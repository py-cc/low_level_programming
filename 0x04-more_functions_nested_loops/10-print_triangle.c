#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: is the size  of the triangle '#' should be printed
 */

void print_triangle(int size)
{

	int x = 0, y = 0;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
			{
				_putchar(' ');

			}

			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
