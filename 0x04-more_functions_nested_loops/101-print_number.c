#include "holberton.h"
/**
* print_number - prints an integer
* @n: check number
*
* Return: Always 0 (Success)
*/
void print_number(int n)
{
unsigned int num;
if (n > 0)
{
if (n > 100 && n < 1000)
{
_putchar(n / 100 + '0');
num = n / 10;
_putchar(num % 10 + '0');
_putchar(n % 10 + '0');
}
else if (n > 1000)
{
_putchar(n / 1000 + '0');
num = n / 100;
_putchar(num % 10 + '0');
num = n % 100;
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
else
{
_putchar(n / 10 + '0');
num = n % 10;
_putchar(num + '0');
}
}
else if (n < 0)
{
n = -n;
_putchar('-');
num = n / 10;
_putchar(num + '0');
num = n % 10;
_putchar(num + '0');
}
else if (n == 0)
{
_putchar(n + '0');
}
}
