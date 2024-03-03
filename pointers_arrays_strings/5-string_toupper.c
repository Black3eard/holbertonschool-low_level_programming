#include "main.h"
/**
 *string_toupper - check the code.
 *@lin: an argument.
 *Return: Always 0 (Success)
 */
char *string_toupper(char *lin)
{
	int count;

	for (count = 0; lin[count] != '\0'; count++)
	{
		if (lin[count] >= 'a' && lin[count] <= 'z')
			lin[count] = lin[count] - 32;
	}
	return (lin);
}
