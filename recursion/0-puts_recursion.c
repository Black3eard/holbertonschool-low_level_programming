#include "main.h"
/**
 * _puts_recursion - check the code
 * @s: an argument.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s  == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
