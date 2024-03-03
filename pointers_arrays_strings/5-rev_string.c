#include "main.h"
/**
 *rev_string - Entry point
 *@s: an argument
 *Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int in = 0, lon = 0;
	char let;

	while (s[in++])
		lon++;
	for (in = lon - 1; in >= lon / 2; in--)
	{
		let = s[in];
			s[in] = s[lon - in - 1];
		s[lon - in - 1] = let;

	}
}
