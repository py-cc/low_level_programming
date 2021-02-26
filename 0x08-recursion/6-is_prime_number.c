#include "holberton.h"
/**
* _prime - if number is a prime or not
* @i: iteracion
* @n: value number
*
* Return: 1 if the inputr integer is a prime number, otherwise return 0
*/
int _prime(int i, int n)
{
	if (i * i == n && n % i == 0)
		return (0);
	else if (i * i == n && n % i == 1)
		return (1);
	else if (i * i > n)
		return (1);
	else
		return (_prime(i + 1, n));
}
/**
* is_prime_number - print integer is a prime number
* @n: value number
*
* Return: 1 if the inputr integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);

	return (_prime(1, n));
}
