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

	if (num < 0)
	{
		a = a * -1;
		num = a % 10;
		putchar(num + '0');
	}
	else
	{
		putchar(num + '0');
	}

	return (num);
}
