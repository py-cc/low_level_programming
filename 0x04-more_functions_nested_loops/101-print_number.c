#include "holberton.h"
/**
* print_number - prints an integer
*
* @n: num to check
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}
