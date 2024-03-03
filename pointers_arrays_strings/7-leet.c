#include "main.h"
/**
 *leet - check the code
 *@s: an argument
 *Return: char
 */
char *leet(char *s)
{
	char letra[5] = { 'A', 'E', 'O', 'T', 'L' };
	char num[5] = { '4', '3', '0', '7', '1' };
	int a = 0, b = 0, l = 5;

		while (s[a])
		{
			b = 0;
			while (b < l)
			{
				if (s[a] == letra[b] || s[a] - 32 == letra[b])
				{
					s[a] = num[b];
				}
				b++;
			}
			a++;
		}
		return (s);
}
