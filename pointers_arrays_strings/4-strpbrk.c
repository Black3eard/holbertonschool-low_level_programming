#include "main.h"
/**
 * _strpbrk - check rhe code.
 * @s: an argument.
 * @accept: an argument.
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int count, count0;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count0 = 0; accept[count0] != '\0'; count0++)
		{
			if (s[count] == accept[count0])
				return (s + count);
		}
	}
	return ('\0');
}
