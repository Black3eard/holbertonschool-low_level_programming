#include "main.h"
/**
 * _strlen - check the code.
 * @s: an argument.
 * Return: O
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{}
	return (len);
}

