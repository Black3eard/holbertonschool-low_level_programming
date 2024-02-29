#include "main.h"
/**
 * _strcat - check the code.
 * @dest: an argument.
 * @src: an argument.
 * Return: char.
 */
char *_strcat(char *dest, char *src)
{
	int space;
	int espacio;

	for (space = 0; dest[space] != '\0'; space++)
	{}
		dest[space] = ' ';

	for (espacio = 0; src[espacio] != '\0'; espacio++)
	{
		dest[space] = src[espacio];
		space++;
	}
	dest[space] = '\0';
	return (dest);
}
