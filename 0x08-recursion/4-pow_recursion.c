#include "holberton.h"
/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: the base value
* @y: power value
*
* Return: 0 if y == 0, by mathematical convetion, -1 if y is lower than 0,
* else returns the power raised to the base value
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
