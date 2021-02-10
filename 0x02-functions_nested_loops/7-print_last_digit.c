#include "holberton.h"

/**
* print_last_digit - prints the last digit
* @n: num to be checked
*
* Return: Always 0
*/

int print_last_digit(int n)
{
	int a = n % 10;

	if (a > 0)
	{
		_putchar(a + '0');
	}
	else
	{
		a = a * -1;
		_putchar(a + '0');
	}

	return (a);
}
