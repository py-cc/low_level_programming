#include "holberton.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: array where the data is stored
 * @b: byte to print
 * @n: n bytes that has to be printed
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
