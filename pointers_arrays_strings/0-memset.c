#include "main.h"
#include <stdio.h>

/**
 * _memset - check the code
 * @s: an argument
 * @b: an argument
 * @n: an argument
 * Return: void
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
