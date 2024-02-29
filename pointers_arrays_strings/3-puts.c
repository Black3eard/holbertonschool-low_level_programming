#include "main.h"
/**
 * _puts - check the code.
 * @str: an argument.
 * Return: void
 */
void _puts(char *str)
{
	int in;

	for (in = 0; str[in] != '\0'; in++)
	{
		_putchar(str[in]);
	}
	_putchar('\n');
}

