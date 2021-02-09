#include "holberton.h"

/**
* print_last_digit - prints the last digit
* @a: num to be checked
*
* Return: Always 0
*/

int print_last_digit(int a)
{
	int num;

	num = a % 10;

	if (a <= 0)
	{
		num = num * -1;
		_putchar(num + '0');
	}
	else
	{
		_putchar(num + '0');
	}

	return (num);
}
