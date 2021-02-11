#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: is the number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
if (n > 0)
{
int row, column;
for (row = 0; row < n; row++)
{
for (column = 0; column < n; column++)
{
if (row == column)
{
_putchar('\\');
_putchar('\n');
break;
}
else if (row > column)
{
_putchar(' ');
}
}
}
}
else
{
_putchar('\n');
}
}
