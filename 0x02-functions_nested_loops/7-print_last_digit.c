#include "holberton.h"

/**
* print_last_digit - prints the last digit
* @a: num to be checked
*
* Return: Always 0
*/

int print_last_digit(int a)
{

	a = % 10;

	if (a < 0)
	{
		a = a * -1;
		putchar(a + '0');
	}
	else
	{
		putchar(num + '0');
	}

	return (a);
}
