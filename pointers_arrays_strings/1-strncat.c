#include "main.h"
/**
 * _strncat - check the code.
 * @dest: an argument
 * @src: an argument
 * @n: an argument
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int space;
	int espacio;

	for (space = 0; dest[space] != '\0'; space++)
	{}
	for (espacio = 0; src[espacio] != '\0' && espacio < n; espacio++, space++)
	{
		dest[space] = src[espacio];
	}
	return (dest);
}
