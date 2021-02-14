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
putchar(n / 100 + '0');
num = n / 10;
putchar(num % 10 + '0');
putchar(n % 10 + '0');
}
else if (n > 1000)
{
putchar(n / 1000 + '0');
num = n / 100;
putchar(num % 10 + '0');
num = n % 100;
putchar(num / 10 + '0');
putchar(num % 10 + '0');
}
else
{
putchar(n / 10 + '0');
num = n % 10;
putchar(num + '0');
}
}
else if (n < 0)
{
n = -n;
putchar('-');
num = n / 10;
putchar(num + '0');
num = n % 10;
putchar(num + '0');
}
else if (n == 0)
{
putchar(n + '0');
}
}
