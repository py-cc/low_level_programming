#include "holberton.h"
/**
* _strlen_recursion - length of string
*
* @s: pointer to a string
*
* Return: return length of string
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
* is_palindromerecursive - pointer to resolve
*
* @s: pointer to string
* @length: length to string
*
* Return: evaluated
*/
int is_palindromerecursive(char *s, int length)
{
	if (s[0] != s[length])
	{
		return (0);
	}
	else if (length <= 1)
	{
		return (1);
	}
	else
	{
		return (is_palindromerecursive(s + 1, length - 2));
	}
}
/**
* is_palindrome - evaluated
* @s: pointer to string
*
* Return: evaluated
*/
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindromerecursive(s, length - 1));
}
