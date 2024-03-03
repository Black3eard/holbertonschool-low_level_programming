#include "main.h"
/**
 * _strncpy - check the code.
 * @dest: an argument.
 * @src: an argument.
 * @n: an argument.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] && count < n; count++)
	{
		dest[count] = src[count];
	}
	if (count < n)
	{
		dest[count] = '\0';
	}
	return (dest);
}
