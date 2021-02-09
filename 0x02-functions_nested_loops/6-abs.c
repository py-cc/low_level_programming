#include "holberton.h"
/**
* _abs - tha computes the absolute value of an integer
* @a: num to be checked
*
* Return: Always 0
*/

int _abs(int a)
{
	int num_abs = -1;

	if (a < 0 || a == 0)
	{
		a = a * num_abs;
		return (a);
	}
	else
	{
		num_abs = 1;
		a = a * num_abs;
		return (a);
	}
}
