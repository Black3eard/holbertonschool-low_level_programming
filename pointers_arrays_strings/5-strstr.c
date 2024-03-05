#include "main.h"
/**
 * _strstr - check the code
 * @haystack: an argument.
 * @needle: an argument.
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
	{
		char *uno = haystack;
		char *dos = needle;

		while (*uno == *dos && *dos != '\0')
		{
			uno++;
			dos++;
		}
		if (*dos == '\0')
			return (haystack);
	}
	return ('\0');
}
