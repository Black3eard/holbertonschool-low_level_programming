#include"main.h"
/**
 * print_sign - Entry Point
 * @n: an argument
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
