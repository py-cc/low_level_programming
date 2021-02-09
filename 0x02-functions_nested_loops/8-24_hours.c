#include "holberton.h"
/**
* jack_bauer - print every minutes
*
*/

void jack_bauer(void)
{
int horas, min;
for (horas = 0; horas < 24; horas++)
{
min = 0;
while (min <= 59)
{
_putchar(horas / 10 + '0');
_putchar(horas % 10 + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(min % 10 + '0');
_putchar('\n');
min++;
}
}
}
