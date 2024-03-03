#include "main.h"
/**
 *cap_string - Entry point
 *@upe: an argument
 *Return: Always 0 (Success)
 */
char *cap_string(char *upe)
{
	int count;

	for (count = 0; upe[count] != '\0'; count++)
	{
		if (count == 0 || upe[count - 1] == ' ' || upe[count - 1] == '.'
				|| upe[count - 1] == '\n' || upe[count - 1] == '	'
				|| upe[count - 1] == ',' || upe[count - 1] == '!'
				|| upe[count - 1] == '?' || upe[count - 1] == '"'
				|| upe[count - 1] == '(' || upe[count - 1] == ')'
				|| upe[count - 1] == '{' || upe[count - 1] == '}'
				|| upe[count - 1] == ';')
		{
			if (upe[count] >= 'a' && upe[count] <= 'z')
				upe[count] -= 32;
		}
	}
	return (upe);
}
