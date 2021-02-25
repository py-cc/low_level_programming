#include "holberton.h"
/**
* evalutePow - function evaluated
* @possibleSqrt: evaluated
* @desired: evaluated
*
* Return: return evaluated
*/

int evalutePow(int possibleSqrt, int desired)
{
	if (possibleSqrt * possibleSqrt == desired)
		return (possibleSqrt);
	else if (possibleSqrt * possibleSqrt > desired)
		return (-1);
	else
		return (evalutePow(possibleSqrt + 1, desired));
}

/**
* _sqrt_recursion -  returns the natural square root of a number
* @n: value evaluated
* Return: returns the natural square root of a number
*/

int _sqrt_recursion(int n)
{
	return (evalutePow(1, n));
}
