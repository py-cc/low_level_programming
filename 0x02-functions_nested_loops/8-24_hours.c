#include "holberton.h"

void jack_bauer(void)
{
int min, min2, hr, hr2;
for (hr = 0; hr < 3; hr++ )
{
for (hr2 = 0; hr2 < 4; hr2++)
{
for (min = 0; min < 6; min++)
{
for (min2 = 0; min2 < 10; min2++)
{
_putchar(hr + '0');
_putchar(hr2 + '0');
_putchar(':');
_putchar(min + '0');
_putchar(min2 + '0');
_putchar('\n');
}
}
}
}
}
