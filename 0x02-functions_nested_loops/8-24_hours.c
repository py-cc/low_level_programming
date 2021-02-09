#include "holberton.h"

/**
* jack_bauer - prints every minute
*
*/

void jack_bauer(void)
{

	int min, min2, hr, hr2;

	for (hr = 0; hr <= 2; hr++)
	{
		for (hr2 = 0; hr2 <= 3; hr2++)
		{
			for (min = 0; min <= 5; min++)
			{
				for (min2 = min; min2 < 10; min2++)
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
