#include "main.h"
/**
 * _strcmp - check the code.
 * @s1: an argument.
 * @s2: an argument.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int count;
	int index = 0;

	count = s1[index] - s2[index];
	while (count == 0)
	{
		if (s1[index] == '\0')
			break;
		index++;
		count = s1[index] - s2[index];
	}
	return (count);
}

