#include "holberton.h"

/**
* print_times_table - print table
* @n: check number
*
*/

void print_times_table(int n)
{
if (n < 15)
{
int i, j, mult = 0;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
mult = j * i;
if (mult <= 9)
{
if (j > 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar(mult + '0');
}
else if (mult >= 10 && mult <= 99)
{
if (j > 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(mult / 10 + '0');
_putchar(mult % 10 + '0');
}
else if (mult >= 100)
{
if (j > 0)
{
_putchar(',');
_putchar(' ');
}
_putchar(mult / 100 + '0');
mult = mult % 100;
_putchar(mult / 10 + '0');
_putchar(mult % 10 + '0');
}
}
_putchar('\n');
}
}
}
