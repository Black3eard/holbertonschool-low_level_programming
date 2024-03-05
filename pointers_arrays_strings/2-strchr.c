#include "main.h"
/**
 * _strchr - check the code
 * @s: an argument
 * @c: an argument
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	int find;

	for (find = 0; s[find] != '\0' && s[find] != c; find++)
	{}
	if (s[find] == c)
	{
		return (s + find);
	}
	else
	{
		return ('\0');
	}
}

