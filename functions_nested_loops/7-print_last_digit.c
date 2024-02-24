#include "main.h"
/**
 * print_last_digit - check the code
 * @l: an argument
 * Return: Always 0
 */
int print_last_digit(int l)
{
	int por = l % 10;

	if (por < 0)
	{
		_putchar('0' - por);
		return (-por);
	}
	else
	{
		_putchar('0' + por);
		return (por);
	}
}
