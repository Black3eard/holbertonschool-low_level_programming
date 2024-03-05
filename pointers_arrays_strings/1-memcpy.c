#include "main.h"
/**
 * _memcpy - check the code
 * @dest: an argument
 * @src: an argument
 * @n:an argument
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
