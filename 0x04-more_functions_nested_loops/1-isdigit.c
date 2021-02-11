#include "holberton.h"
/**
 * _isdigit - checks for a digit
 * @c: Numbers check
 *
 * Description: Checks if character is upper or lowercas and returns 1 or 0
 *
 * Return: 1 if c is upper 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
