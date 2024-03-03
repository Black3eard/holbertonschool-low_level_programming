#include <stdio.h>
#include "main.h"
/**
 * _atoi - check the code.
 * @s: an argument.
 * Return: int.
 */
int _atoi(char *s)
{
	int count = 0;
	int neg = 0;
	int min = 1;
	int equal = 0;

	while (s[count])
	{
		if (s[count] == 45)
		{
			min *= -1;
		}
		while (s[count] >= 48 && s[count] <= 57)
		{
			equal = 1;
			neg = (neg * 10) + (s[count] - '0');
			count++;
		}
		if (equal == 1)
		{
			break;
		}
		count++;
	}
	neg *= min;
	return (neg);
}
