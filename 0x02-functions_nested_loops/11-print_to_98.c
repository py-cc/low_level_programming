#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print all natural numbers
* @n: num to check
*
*/

void print_to_98(int n)
{

	if (n <= 98)
	{

	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
		printf(",");
		printf(" ");
		}
	}
	}

	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
			printf(",");
			printf(" ");
			}
		}
	}
	printf("\n");
}
