#include "holberton.h"
/**
* _strlen_recursion -
*
* @s:
*
* Return:
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
* is_palindromerecursive -
*
* @s:
* @legth:
*
* Return:
*/
int is_palindromerecursive(char *s, int length)
{
	if (s[0] != s[length])
	{
		return 0;
	}
	else if (length <= 1)
	{
		return 1;
	}
	else
	{
		return is_palindromerecursive(s + 1, length - 2);
	}
}
/**
* is_palindrome -
* @s:
*
* Return:
*/
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return is_palindromerecursive(s, length - 1);
}
