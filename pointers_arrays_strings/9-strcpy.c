#include "main.h"
#include <stdio.h>
/**
 * _strcpy - check the code.
 * @dest: an argument.
 * @src: an argument.
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count++] = '\0';
	return (dest);
}
